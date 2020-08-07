#include "conv2d.h"
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int input_size = 16;
	int I_ROW = input_size;
	int I_COL = input_size;

// initialize input and kernel matrix
	float input[I_ROW][I_COL]={
			{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1},
			{0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0},
			{0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0},
			{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1},
			{0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0},

			{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1},
			{0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0},
			{0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0},
			{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1},
			{0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0},

			{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1},
			{0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0},
			{0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0},
			{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1},
			{0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0},

			{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1}
	};
	/*
	float input[I_ROW][I_COL]={
			{1, 1, 1},
			{0, 1, 1},
			{2, 0, 1}
	};
	*/
	float kernel[K_ROW][K_COL]={
			{1,0,0},
			{1,0,0},
			{1,0,0}
	};
// Print Matrix Info
	printf("====Input Matrix====\n");
	for(int i=0 ; i < I_ROW ; i++){
		for(int j = 0 ; j < I_COL ; j++ ){
			printf("%.1f  ", input[i][j]);
		}
		printf("\n");
	}

	printf("====Kernel Matrix====\n");
	for(int i=0 ; i < K_ROW ; i++){
		for(int j = 0 ; j < K_COL ; j++ ){
			printf("%.1f  ", kernel[i][j]);
		}
		printf("\n");
	}

	
	AXI_T axi_tmp;
	STREAM_T str_kernel, str_input, str_output;

// store 3*3 kernel data in stream<>
	int row=0, col=0;
	while( row < K_ROW ){
		while( col < K_COL){

			// check if it's the last data
			if( row == K_ROW - 1 && col == K_COL - 1)
				break;	

			// not the last data			
			axi_tmp.data = kernel[row][col];
			axi_tmp.last = 0;
			str_kernel << axi_tmp;
			col++;
		}
		col = 0;
		row++;
	}
	// store the last data
	axi_tmp.data = kernel[K_ROW-1][K_COL-1];
	axi_tmp.last = 1;
	str_kernel << axi_tmp;

// store 5*5 input data in stream<>
	row=0, col=0;
	while( row < I_ROW ){
		while( col < I_COL){

			// check if it's the last data
			if( row == I_ROW - 1 && col == I_COL - 1)
				break;	

			// not the last data			
			axi_tmp.data = input[row][col];
			axi_tmp.last = 0;
			str_input << axi_tmp;
			col++;
		}
		col = 0;
		row++;
	}
	// store the last data
	axi_tmp.data = input[input_size-1][input_size-1];
	axi_tmp.last = 1;
	str_input << axi_tmp;


// execute the conv2d
	conv2d(str_kernel, str_input, str_output, input_size);


// print the answer
	printf("====Output Feature Map====\n");
	int output_size = I_ROW - K_ROW + 1;

	for(int k=0 ; k < (output_size*output_size) ; k++){
		printf("%.1f  ", str_output.read().data);
		if( (k+1) % output_size == 0 )
			printf("\n"); 
	}

}
