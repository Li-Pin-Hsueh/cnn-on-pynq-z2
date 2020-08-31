vlib work
vlib activehdl

vlib activehdl/xilinx_vip
vlib activehdl/xpm
vlib activehdl/axi_infrastructure_v1_1_0
vlib activehdl/axi_vip_v1_1_7
vlib activehdl/processing_system7_vip_v1_0_9
vlib activehdl/xil_defaultlib
vlib activehdl/xbip_utils_v3_0_10
vlib activehdl/axi_utils_v2_0_6
vlib activehdl/xbip_pipe_v3_0_6
vlib activehdl/xbip_dsp48_wrapper_v3_0_4
vlib activehdl/xbip_dsp48_addsub_v3_0_6
vlib activehdl/xbip_dsp48_multadd_v3_0_6
vlib activehdl/xbip_bram18k_v3_0_6
vlib activehdl/mult_gen_v12_0_16
vlib activehdl/floating_point_v7_1_10
vlib activehdl/lib_pkg_v1_0_2
vlib activehdl/fifo_generator_v13_2_5
vlib activehdl/lib_fifo_v1_0_14
vlib activehdl/lib_srl_fifo_v1_0_2
vlib activehdl/lib_cdc_v1_0_2
vlib activehdl/axi_datamover_v5_1_23
vlib activehdl/axi_sg_v4_1_13
vlib activehdl/axi_dma_v7_1_22
vlib activehdl/generic_baseblocks_v2_1_0
vlib activehdl/axi_register_slice_v2_1_21
vlib activehdl/axi_data_fifo_v2_1_20
vlib activehdl/axi_crossbar_v2_1_22
vlib activehdl/axi_protocol_converter_v2_1_21
vlib activehdl/proc_sys_reset_v5_0_13
vlib activehdl/axi_clock_converter_v2_1_20
vlib activehdl/blk_mem_gen_v8_4_4
vlib activehdl/axi_dwidth_converter_v2_1_21

vmap xilinx_vip activehdl/xilinx_vip
vmap xpm activehdl/xpm
vmap axi_infrastructure_v1_1_0 activehdl/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_7 activehdl/axi_vip_v1_1_7
vmap processing_system7_vip_v1_0_9 activehdl/processing_system7_vip_v1_0_9
vmap xil_defaultlib activehdl/xil_defaultlib
vmap xbip_utils_v3_0_10 activehdl/xbip_utils_v3_0_10
vmap axi_utils_v2_0_6 activehdl/axi_utils_v2_0_6
vmap xbip_pipe_v3_0_6 activehdl/xbip_pipe_v3_0_6
vmap xbip_dsp48_wrapper_v3_0_4 activehdl/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_6 activehdl/xbip_dsp48_addsub_v3_0_6
vmap xbip_dsp48_multadd_v3_0_6 activehdl/xbip_dsp48_multadd_v3_0_6
vmap xbip_bram18k_v3_0_6 activehdl/xbip_bram18k_v3_0_6
vmap mult_gen_v12_0_16 activehdl/mult_gen_v12_0_16
vmap floating_point_v7_1_10 activehdl/floating_point_v7_1_10
vmap lib_pkg_v1_0_2 activehdl/lib_pkg_v1_0_2
vmap fifo_generator_v13_2_5 activehdl/fifo_generator_v13_2_5
vmap lib_fifo_v1_0_14 activehdl/lib_fifo_v1_0_14
vmap lib_srl_fifo_v1_0_2 activehdl/lib_srl_fifo_v1_0_2
vmap lib_cdc_v1_0_2 activehdl/lib_cdc_v1_0_2
vmap axi_datamover_v5_1_23 activehdl/axi_datamover_v5_1_23
vmap axi_sg_v4_1_13 activehdl/axi_sg_v4_1_13
vmap axi_dma_v7_1_22 activehdl/axi_dma_v7_1_22
vmap generic_baseblocks_v2_1_0 activehdl/generic_baseblocks_v2_1_0
vmap axi_register_slice_v2_1_21 activehdl/axi_register_slice_v2_1_21
vmap axi_data_fifo_v2_1_20 activehdl/axi_data_fifo_v2_1_20
vmap axi_crossbar_v2_1_22 activehdl/axi_crossbar_v2_1_22
vmap axi_protocol_converter_v2_1_21 activehdl/axi_protocol_converter_v2_1_21
vmap proc_sys_reset_v5_0_13 activehdl/proc_sys_reset_v5_0_13
vmap axi_clock_converter_v2_1_20 activehdl/axi_clock_converter_v2_1_20
vmap blk_mem_gen_v8_4_4 activehdl/blk_mem_gen_v8_4_4
vmap axi_dwidth_converter_v2_1_21 activehdl/axi_dwidth_converter_v2_1_21

vlog -work xilinx_vip  -sv2k12 "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_if.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/clk_vip_if.sv" \
"D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -sv2k12 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
"D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_7  -sv2k12 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ce6c/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_9  -sv2k12 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_2/ip/design_2_processing_system7_0_0/sim/design_2_processing_system7_0_0.v" \

vcom -work xbip_utils_v3_0_10 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/d117/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_6 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_6 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_6 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/910d/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_6 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_6 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_16 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ce84/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_10 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/248c/hdl/floating_point_v7_1_rfs.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_AXILiteS_s_axi.v" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_fadd_32ns_bkb.v" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_filter.v" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_fmul_32ns_cud.v" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_input_0.v" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/regslice_core.v" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d.v" \

vcom -work xil_defaultlib -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/ip/conv2d_ap_fadd_3_full_dsp_32.vhd" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/ip/conv2d_ap_fmul_2_max_dsp_32.vhd" \
"../../../bd/design_2/ip/design_2_conv2d_0_0/sim/design_2_conv2d_0_0.vhd" \

vcom -work lib_pkg_v1_0_2 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/276e/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_5 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/276e/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/276e/hdl/fifo_generator_v13_2_rfs.v" \

vcom -work lib_fifo_v1_0_14 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/a5cb/hdl/lib_fifo_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work axi_datamover_v5_1_23 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/af86/hdl/axi_datamover_v5_1_vh_rfs.vhd" \

vcom -work axi_sg_v4_1_13 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/4919/hdl/axi_sg_v4_1_rfs.vhd" \

vcom -work axi_dma_v7_1_22 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/0fb1/hdl/axi_dma_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_2/ip/design_2_axi_dma_0_0/sim/design_2_axi_dma_0_0.vhd" \
"../../../bd/design_2/ip/design_2_axi_dma_1_0/sim/design_2_axi_dma_1_0.vhd" \

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_21  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/2ef9/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work axi_data_fifo_v2_1_20  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/47c9/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_22  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/b68e/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_2/ip/design_2_xbar_0/sim/design_2_xbar_0.v" \

vlog -work axi_protocol_converter_v2_1_21  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/8dfa/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_2/ip/design_2_auto_pc_0/sim/design_2_auto_pc_0.v" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/design_2/ip/design_2_rst_ps7_0_100M_0/sim/design_2_rst_ps7_0_100M_0.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_2/ip/design_2_xbar_1/sim/design_2_xbar_1.v" \

vlog -work axi_clock_converter_v2_1_20  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/7589/hdl/axi_clock_converter_v2_1_vl_rfs.v" \

vlog -work blk_mem_gen_v8_4_4  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/2985/simulation/blk_mem_gen_v8_4.v" \

vlog -work axi_dwidth_converter_v2_1_21  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/07be/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl" "+incdir+../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl" "+incdir+D:/Xilinx/Vivado/2020.1/data/xilinx_vip/include" \
"../../../bd/design_2/ip/design_2_auto_us_0/sim/design_2_auto_us_0.v" \
"../../../bd/design_2/ip/design_2_auto_pc_1/sim/design_2_auto_pc_1.v" \
"../../../bd/design_2/ip/design_2_xbar_2/sim/design_2_xbar_2.v" \
"../../../bd/design_2/ip/design_2_auto_us_1/sim/design_2_auto_us_1.v" \
"../../../bd/design_2/ip/design_2_auto_us_2/sim/design_2_auto_us_2.v" \
"../../../bd/design_2/ip/design_2_auto_pc_2/sim/design_2_auto_pc_2.v" \
"../../../bd/design_2/sim/design_2.v" \

vlog -work xil_defaultlib \
"glbl.v"

