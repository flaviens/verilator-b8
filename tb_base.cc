// Copyright 2023 Flavien Solt, ETH Zurich.
// Licensed under the General Public License, Version 3.0, see LICENSE for details.
// SPDX-License-Identifier: GPL-3.0-only

#include "Vtop.h"
#include "verilated.h"
#include "ticks.h"

#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <fstream>
#include <cassert>

#define IN_DATA_WIDTH  96
#define OUT_DATA_WIDTH 96
#define NUM_SUBNETS 1
#define NUM_CLKINS 5
#define PATH_TO_INPUTS_FILE "inputs.txt"

#if VM_TRACE
#if VM_TRACE_FST
#include <verilated_fst_c.h>
#else
#include <verilated_vcd_c.h>
#endif // VM_TRACE_FST
#endif // VM_TRACE

typedef Vtop Module;

#define PATH_TO_METADATA "tmp/metadata.log"

size_t curr_id_in_inputs_from_file = 0;
size_t curr_id_in_actor_id_order = 0;

// For subnets, there are multiple inputs in a row to build the full-width input
std::vector<uint32_t> inputs_from_file;
std::vector<uint32_t> actor_id_order;

#if VM_TRACE
const int kTraceLevel = 6;
#if VM_TRACE_FST
  VerilatedFstC *trace_;
#else
  VerilatedVcdC *trace_;
#endif // VM_TRACE_FST
#endif // VM_TRACE

int read_inputs_from_file() {
  // Make sure we call this function only once
  assert(inputs_from_file.size() == 0);

  std::ifstream in_file(PATH_TO_INPUTS_FILE);
  uint64_t next_in_id, next_input;
  std::string next_input_str;
  uint64_t num_32bit_inputs;
  in_file >> num_32bit_inputs;

  uint64_t remaining_lines_to_read = num_32bit_inputs;
  int simlen = 0;
  while(remaining_lines_to_read--) {
    simlen++;
    in_file >> next_in_id;
    in_file >> next_input_str;
    next_input = std::stoul(next_input_str, nullptr, 16);

    // std::cout << "Next actor id: " << next_in_id << std::endl;
    actor_id_order.push_back(next_in_id);

    inputs_from_file.push_back(next_input);

    // Check whether we were reading the subnet id or the subnet input
    if (next_in_id < NUM_SUBNETS) {
      for (int i = 1; i < IN_DATA_WIDTH / 32; i++) {
        in_file >> next_in_id; // Only used for assertions
        if (next_in_id != actor_id_order.back()) {
          std::cout << "Error: subnet id mismatch. Expected: " << actor_id_order.back() << " - Got: " << next_in_id << std::endl;
          exit(1);
        }
        in_file >> next_input_str;
        next_input = std::stoul(next_input_str, nullptr, 16);
        inputs_from_file.push_back(next_input);
        remaining_lines_to_read--;
      }
    }
  }

  return simlen;
}

void randomize_inputs(Module *my_module) {
  if (actor_id_order.size() == 0) {
    std::cout << "Error: actor_id_order is empty." << std::endl;
    exit(1);
  }
  if (curr_id_in_actor_id_order >= actor_id_order.size()) {
    std::cout << "Error: curr_id_in_actor_id_order is too big: " << curr_id_in_actor_id_order << " - actor_id_order.size(): " << actor_id_order.size() << std::endl;
    exit(1);
  }

  int curr_actor_id = actor_id_order[curr_id_in_actor_id_order++];
  int curr_is_subnet = curr_actor_id < NUM_SUBNETS;

  if (curr_is_subnet) {
    for (int word_id_in_input = (curr_actor_id * IN_DATA_WIDTH) / 32; word_id_in_input < ((curr_actor_id + 1) * IN_DATA_WIDTH) / 32; word_id_in_input++) {
      my_module->in_data[word_id_in_input] = inputs_from_file[curr_id_in_inputs_from_file++];
    }
  } else {
    int curr_clkin_id = curr_actor_id - NUM_SUBNETS;
    my_module->clkin_data[curr_clkin_id] = inputs_from_file[curr_id_in_inputs_from_file++];
  }
}

/**
 * Runs the testbench.
 *
 * @param tb a pointer to a testbench instance
 * @param simlen the number of cycles to run
 */
std::pair<long, uint64_t> run_test(Module *my_module, int simlen, const std::string trace_filename) {
  
  srand(time(NULL)); // set random seed to current time
  uint64_t cumulated_output = 0;
  auto start = std::chrono::steady_clock::now();

#if VM_TRACE
#if VM_TRACE_FST
    trace_ = new VerilatedFstC;
#else
    trace_ = new VerilatedVcdC;
#endif // VM_TRACE_FST
    my_module->trace(trace_, kTraceLevel);
    trace_->open(trace_filename.c_str());
    size_t tick_count_ = 0;
#endif // VM_TRACE

  for (int tick_id = 0; tick_id < simlen; tick_id++) {
    randomize_inputs(my_module);
    my_module->eval();
#if VM_TRACE
      trace_->dump(tick_count_++);
#endif // VM_TRACE

    for (int i = 0; i < OUT_DATA_WIDTH / 32; i++)
      cumulated_output += my_module->out_data[i];
  }

#if VM_TRACE
      trace_->flush();
#endif // VM_TRACE

  auto stop = std::chrono::steady_clock::now();
  long ret = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count();
  return std::make_pair(ret, cumulated_output);
}

int main(int argc, char **argv, char **env) {

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(VM_TRACE);

  ////////
  // Instantiate the module.
  ////////

  Module *my_module = new Module;

  ////////
  // Get the ctx vars.
  ////////

  int simlen = read_inputs_from_file();
  std::string vcd_filepath = cl_get_tracefile();

  ////////
  // Run the experiment.
  ////////

  std::pair<long, uint64_t> duration_and_output = run_test(my_module, simlen, vcd_filepath);
  long duration = duration_and_output.first;
  uint64_t cumulated_output = duration_and_output.second;

  std::cout << "Testbench complete!" << std::endl;
  std::cout << "Output signature: " << std::dec << cumulated_output << "." << std::endl;
  std::cout << "Elapsed time: " << std::dec << duration << "." << std::endl;

  delete my_module;
  exit(0);
}
