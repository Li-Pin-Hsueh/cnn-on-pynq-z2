#include "conv2d.h"


void conv2d(STREAM_T &_kernel, STREAM_T &_input, STREAM_T &_output, int _input_size ){
	#pragma HLS INTERFACE axis port=_kernel
	#pragma HLS INTERFACE axis port=_input
	#pragma HLS INTERFACE axis port=_output
	#pragma HLS INTERFACE s_axilite port=_input_size
	#pragma HLS INTERFACE ap_ctrl_none port=return

// specify the matrix size
	int input_size = _input_size;
	int kernel_size = K_ROW;
	int output_size = input_size - kernel_size + 1;	
// initialize the maps
	float kernel[kernel_size][kernel_size];	// 3*3 Kernel
	float input[32][32];	// 3*3 or 5*5 input matrix
	float output[30][30];	// 3*3 for 5*5 input matrix, 1*1 for 3*3 input matrix

	AXI_T tmp;
// Load data from kernel stream<>
	int row = 0, col = 0;
	// printf("Kernel : ");
	do {
		tmp = _kernel.read();
		// printf("%f ,", tmp.data);
		kernel[row][col] = tmp.data;
		if(col == kernel_size - 1){		// go to the next row
			row++ 	;
			col = 0	;
		}
		else	col ++ ;
	}
	while(!tmp.last);

// Load data from 5*5 input matrix
	row = 0, col = 0;
	do {
		tmp = _input.read();

		input[row][col] = tmp.data;
		if(col == input_size - 1){		// go to the next row
			row++ 	;
			col = 0	;
		}
		else	col ++ ;
	}
	while(!tmp.last);
	
// computation of conv2d
	int i = 0, j = 0;
	int m = 0, n = 0;
	float x;
	row = 0, col = 0;
	int boundary = input_size - kernel_size + 1 ; 	// find the index of sliding window boundary
	
	for( row=0 ; row < boundary ; row ++ ){
		for( col = 0 ; col < boundary ; col ++ ){

			// iterate the output matrix
			//for( i = 0 ; i < output_size ; i++ ){
				//for( j = 0 ; j < output_size ; j++ ){
					output[row][col] = 0; // initialize

					// W * b
					for( m = 0 ; m < kernel_size ; m++ ){
						for( n = 0 ; n < kernel_size ; n++ ){
							x = input[row+m][col+n] * kernel[m][n] ;
							output[row][col] += x ;
						}
					}

					// end of W * b
				//}
			//}
			// end of iteration of output matrix
		}
	}

	
// restore 3*3 output data in stream<>

	AXI_T axi_tmp;
	row=0, col=0;
	while( row < output_size ){
		while( col < output_size ){

			// check if it's the last data
			if( row == output_size - 1 && col == output_size - 1)
				break;	

			// not the last data			
			axi_tmp.data = output[row][col];
			axi_tmp.last = 0;
			_output << axi_tmp;
			col++;
		}
		col = 0;
		row++;
	}
// store the last data
	axi_tmp.data = output[output_size-1][output_size-1];
	axi_tmp.last = 1;
	_output << axi_tmp;

} // end of main()
