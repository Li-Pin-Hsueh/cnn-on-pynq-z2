############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_SingleFrameCNN
set_top conv2d
add_files src_code_v3/conv2d.cpp
add_files -tb src_code_v3/tb_conv2d.cpp
open_solution "solution1"
set_part {xczu7ev-ffvc1156-2-e}
create_clock -period 10 -name default
#source "./hls_SingleFrameCNN/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
