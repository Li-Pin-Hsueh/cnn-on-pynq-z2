-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.1 (win64) Build 2902540 Wed May 27 19:54:49 MDT 2020
-- Date        : Fri Sep 18 14:46:54 2020
-- Host        : DESKTOP-DQ2I52E running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               c:/Users/Vincent/Desktop/cnn-on-pynq-z2/vivado_SingleFrameCNN/vivado_SingleFrameCNN.srcs/sources_1/bd/design_1/ip/design_1_conv2d_0_1/design_1_conv2d_0_1_stub.vhdl
-- Design      : design_1_conv2d_0_1
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity design_1_conv2d_0_1 is
  Port ( 
    s_axi_AXILiteS_AWADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_AXILiteS_AWVALID : in STD_LOGIC;
    s_axi_AXILiteS_AWREADY : out STD_LOGIC;
    s_axi_AXILiteS_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_AXILiteS_WVALID : in STD_LOGIC;
    s_axi_AXILiteS_WREADY : out STD_LOGIC;
    s_axi_AXILiteS_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_BVALID : out STD_LOGIC;
    s_axi_AXILiteS_BREADY : in STD_LOGIC;
    s_axi_AXILiteS_ARADDR : in STD_LOGIC_VECTOR ( 4 downto 0 );
    s_axi_AXILiteS_ARVALID : in STD_LOGIC;
    s_axi_AXILiteS_ARREADY : out STD_LOGIC;
    s_axi_AXILiteS_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_AXILiteS_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_AXILiteS_RVALID : out STD_LOGIC;
    s_axi_AXILiteS_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    stream_kernel_TVALID : in STD_LOGIC;
    stream_kernel_TREADY : out STD_LOGIC;
    stream_kernel_TDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    stream_kernel_TLAST : in STD_LOGIC_VECTOR ( 0 to 0 );
    stream_input_TVALID : in STD_LOGIC;
    stream_input_TREADY : out STD_LOGIC;
    stream_input_TDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    stream_input_TLAST : in STD_LOGIC_VECTOR ( 0 to 0 );
    stream_output_TVALID : out STD_LOGIC;
    stream_output_TREADY : in STD_LOGIC;
    stream_output_TDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    stream_output_TLAST : out STD_LOGIC_VECTOR ( 0 to 0 )
  );

end design_1_conv2d_0_1;

architecture stub of design_1_conv2d_0_1 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_AXILiteS_AWADDR[4:0],s_axi_AXILiteS_AWVALID,s_axi_AXILiteS_AWREADY,s_axi_AXILiteS_WDATA[31:0],s_axi_AXILiteS_WSTRB[3:0],s_axi_AXILiteS_WVALID,s_axi_AXILiteS_WREADY,s_axi_AXILiteS_BRESP[1:0],s_axi_AXILiteS_BVALID,s_axi_AXILiteS_BREADY,s_axi_AXILiteS_ARADDR[4:0],s_axi_AXILiteS_ARVALID,s_axi_AXILiteS_ARREADY,s_axi_AXILiteS_RDATA[31:0],s_axi_AXILiteS_RRESP[1:0],s_axi_AXILiteS_RVALID,s_axi_AXILiteS_RREADY,ap_clk,ap_rst_n,stream_kernel_TVALID,stream_kernel_TREADY,stream_kernel_TDATA[31:0],stream_kernel_TLAST[0:0],stream_input_TVALID,stream_input_TREADY,stream_input_TDATA[31:0],stream_input_TLAST[0:0],stream_output_TVALID,stream_output_TREADY,stream_output_TDATA[31:0],stream_output_TLAST[0:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "conv2d,Vivado 2020.1";
begin
end;
