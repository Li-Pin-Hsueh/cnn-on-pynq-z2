-makelib ies_lib/xilinx_vip -sv \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/axi_vip_if.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/clk_vip_if.sv" \
  "D:/Xilinx/Vivado/2020.1/data/xilinx_vip/hdl/rst_vip_if.sv" \
-endlib
-makelib ies_lib/xpm -sv \
  "D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
  "D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib ies_lib/xpm \
  "D:/Xilinx/Vivado/2020.1/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib ies_lib/axi_infrastructure_v1_1_0 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_vip_v1_1_7 -sv \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ce6c/hdl/axi_vip_v1_1_vl_rfs.sv" \
-endlib
-makelib ies_lib/processing_system7_vip_v1_0_9 -sv \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/6b56/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_processing_system7_0_0/sim/design_2_processing_system7_0_0.v" \
-endlib
-makelib ies_lib/xbip_utils_v3_0_10 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/d117/hdl/xbip_utils_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/axi_utils_v2_0_6 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/1971/hdl/axi_utils_v2_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_pipe_v3_0_6 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/7468/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_dsp48_wrapper_v3_0_4 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_dsp48_addsub_v3_0_6 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/910d/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_dsp48_multadd_v3_0_6 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/b0ac/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_bram18k_v3_0_6 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/d367/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/mult_gen_v12_0_16 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ce84/hdl/mult_gen_v12_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/floating_point_v7_1_10 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/248c/hdl/floating_point_v7_1_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_AXILiteS_s_axi.v" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_fadd_32ns_bkb.v" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_filter.v" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_fmul_32ns_cud.v" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d_input_0.v" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/regslice_core.v" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/verilog/conv2d.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/ip/conv2d_ap_fadd_3_full_dsp_32.vhd" \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/120f/hdl/ip/conv2d_ap_fmul_2_max_dsp_32.vhd" \
  "../../../bd/design_2/ip/design_2_conv2d_0_0/sim/design_2_conv2d_0_0.vhd" \
-endlib
-makelib ies_lib/lib_pkg_v1_0_2 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/fifo_generator_v13_2_5 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/276e/simulation/fifo_generator_vlog_beh.v" \
-endlib
-makelib ies_lib/fifo_generator_v13_2_5 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/276e/hdl/fifo_generator_v13_2_rfs.vhd" \
-endlib
-makelib ies_lib/fifo_generator_v13_2_5 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/276e/hdl/fifo_generator_v13_2_rfs.v" \
-endlib
-makelib ies_lib/lib_fifo_v1_0_14 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/a5cb/hdl/lib_fifo_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/lib_srl_fifo_v1_0_2 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/lib_cdc_v1_0_2 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/axi_datamover_v5_1_23 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/af86/hdl/axi_datamover_v5_1_vh_rfs.vhd" \
-endlib
-makelib ies_lib/axi_sg_v4_1_13 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/4919/hdl/axi_sg_v4_1_rfs.vhd" \
-endlib
-makelib ies_lib/axi_dma_v7_1_22 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/0fb1/hdl/axi_dma_v7_1_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_axi_dma_0_0/sim/design_2_axi_dma_0_0.vhd" \
  "../../../bd/design_2/ip/design_2_axi_dma_1_0/sim/design_2_axi_dma_1_0.vhd" \
-endlib
-makelib ies_lib/generic_baseblocks_v2_1_0 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_register_slice_v2_1_21 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/2ef9/hdl/axi_register_slice_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_data_fifo_v2_1_20 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/47c9/hdl/axi_data_fifo_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_crossbar_v2_1_22 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/b68e/hdl/axi_crossbar_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_xbar_0/sim/design_2_xbar_0.v" \
-endlib
-makelib ies_lib/axi_protocol_converter_v2_1_21 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/8dfa/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_auto_pc_0/sim/design_2_auto_pc_0.v" \
-endlib
-makelib ies_lib/proc_sys_reset_v5_0_13 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_rst_ps7_0_100M_0/sim/design_2_rst_ps7_0_100M_0.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_xbar_1/sim/design_2_xbar_1.v" \
-endlib
-makelib ies_lib/axi_clock_converter_v2_1_20 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/7589/hdl/axi_clock_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/blk_mem_gen_v8_4_4 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/2985/simulation/blk_mem_gen_v8_4.v" \
-endlib
-makelib ies_lib/axi_dwidth_converter_v2_1_21 \
  "../../../../vivado_proj_v2.srcs/sources_1/bd/design_2/ipshared/07be/hdl/axi_dwidth_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/design_2/ip/design_2_auto_us_0/sim/design_2_auto_us_0.v" \
  "../../../bd/design_2/ip/design_2_auto_pc_1/sim/design_2_auto_pc_1.v" \
  "../../../bd/design_2/ip/design_2_xbar_2/sim/design_2_xbar_2.v" \
  "../../../bd/design_2/ip/design_2_auto_us_1/sim/design_2_auto_us_1.v" \
  "../../../bd/design_2/ip/design_2_auto_us_2/sim/design_2_auto_us_2.v" \
  "../../../bd/design_2/ip/design_2_auto_pc_2/sim/design_2_auto_pc_2.v" \
  "../../../bd/design_2/sim/design_2.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  glbl.v
-endlib

