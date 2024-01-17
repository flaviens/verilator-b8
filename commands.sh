verilator --cc --trace --exe --Wno-MULTIDRIVEN --Wno-UNOPTFLAT --Wno-WIDTHTRUNC --Wno-CMPCONST --Wno-WIDTHEXPAND --Wno-UNSIGNED -fno-acyc-simp --build tb_base.cc top.sv -CFLAGS '-I../include -g' --build-jobs 32
TRACEFILE=trace.vcd SIMLEN=200 obj_dir/Vtop
