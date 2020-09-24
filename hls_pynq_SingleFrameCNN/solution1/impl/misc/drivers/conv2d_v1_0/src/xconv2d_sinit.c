// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xconv2d.h"

extern XConv2d_Config XConv2d_ConfigTable[];

XConv2d_Config *XConv2d_LookupConfig(u16 DeviceId) {
	XConv2d_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XCONV2D_NUM_INSTANCES; Index++) {
		if (XConv2d_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XConv2d_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XConv2d_Initialize(XConv2d *InstancePtr, u16 DeviceId) {
	XConv2d_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XConv2d_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XConv2d_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

