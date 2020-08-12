// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of input_size
//        bit 31~0 - input_size[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of input_number
//        bit 31~0 - input_number[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of filter_number
//        bit 31~0 - filter_number[31:0] (Read/Write)
// 0x24 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCONV2D_AXILITES_ADDR_INPUT_SIZE_DATA    0x10
#define XCONV2D_AXILITES_BITS_INPUT_SIZE_DATA    32
#define XCONV2D_AXILITES_ADDR_INPUT_NUMBER_DATA  0x18
#define XCONV2D_AXILITES_BITS_INPUT_NUMBER_DATA  32
#define XCONV2D_AXILITES_ADDR_FILTER_NUMBER_DATA 0x20
#define XCONV2D_AXILITES_BITS_FILTER_NUMBER_DATA 32

