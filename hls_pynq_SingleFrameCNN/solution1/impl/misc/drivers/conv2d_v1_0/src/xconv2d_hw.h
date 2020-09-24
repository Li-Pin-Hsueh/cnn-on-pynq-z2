// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x00 : reserved
// 0x04 : reserved
// 0x08 : reserved
// 0x0c : reserved
// 0x10 : Data signal of input_row
//        bit 31~0 - input_row[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of input_col
//        bit 31~0 - input_col[31:0] (Read/Write)
// 0x1c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCONV2D_AXILITES_ADDR_INPUT_ROW_DATA 0x10
#define XCONV2D_AXILITES_BITS_INPUT_ROW_DATA 32
#define XCONV2D_AXILITES_ADDR_INPUT_COL_DATA 0x18
#define XCONV2D_AXILITES_BITS_INPUT_COL_DATA 32

