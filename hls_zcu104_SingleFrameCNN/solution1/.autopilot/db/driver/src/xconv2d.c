// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xconv2d.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XConv2d_CfgInitialize(XConv2d *InstancePtr, XConv2d_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XConv2d_Set_input_row(XConv2d *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2d_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2D_AXILITES_ADDR_INPUT_ROW_DATA, Data);
}

u32 XConv2d_Get_input_row(XConv2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2d_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2D_AXILITES_ADDR_INPUT_ROW_DATA);
    return Data;
}

void XConv2d_Set_input_col(XConv2d *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XConv2d_WriteReg(InstancePtr->Axilites_BaseAddress, XCONV2D_AXILITES_ADDR_INPUT_COL_DATA, Data);
}

u32 XConv2d_Get_input_col(XConv2d *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XConv2d_ReadReg(InstancePtr->Axilites_BaseAddress, XCONV2D_AXILITES_ADDR_INPUT_COL_DATA);
    return Data;
}

