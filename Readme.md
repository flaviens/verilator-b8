# Segmentation fault with Verilator

In this repository, you can reproduce a segmentation fault with Verilator `Verilator 5.021 devel rev v5.020-31-g54922c036` and `g++ (Ubuntu 10.5.0-1ubuntu1~20.04) 10.5.0`.

## How to reproduce

Either use the precompiled problematic binary
```bash
TRACEFILE=trace.vcd SIMLEN=200 obj_dir_problematic/Vtop
```

Or compile the problematic binary yourself (note that in most contexts, it seems that the compilation will work fine)
```bash
TRACEFILE=trace.vcd SIMLEN=200 obj_dir_problematic/Vtop
```

## Expected behavior

Successful execution.

## Actual behavior

Segmentation fault.

GDB trace:
```bash
Thread 1 "Vtop" received signal SIGSEGV, Segmentation fault.
trace_init (voidSelf=0x5555555b1740, tracep=0x5555555d7958, code=1) at Vtop.cpp:117
117         if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
(gdb) bt
#0  trace_init (voidSelf=0x5555555b1740, tracep=0x5555555d7958, code=1) at Vtop.cpp:117
#1  0x00005555555689c7 in VerilatedTrace<VerilatedVcd, VerilatedVcdBuffer>::traceInit (this=0x5555555d7958) at /path/to/verilator/include/verilated_trace.h:343
#2  0x000055555556aaf4 in VerilatedVcd::open (this=0x5555555d7958, filename=<optimized out>) at /path/to/verilator/include/verilated_vcd_c.cpp:123
#3  0x000055555555a0a3 in run_test (my_module=0x5555555b15c0, simlen=205, trace_filename=...) at /usr/include/c++/10/bits/basic_string.h:2312
#4  0x0000555555559bfa in main (argc=<optimized out>, argv=<optimized out>, env=<optimized out>) at /path/to/some/tb_base.cc:251
```
