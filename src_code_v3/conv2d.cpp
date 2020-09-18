#include "conv2d.h"




void conv2d(STREAM_T &stream_kernel, STREAM_T &stream_input, STREAM_T &stream_output, int input_row, int input_col){
// define port
	#pragma HLS INTERFACE axis port=stream_kernel
	#pragma HLS INTERFACE axis port=stream_input
	#pragma HLS INTERFACE axis port=stream_output
	#pragma HLS INTERFACE s_axilite port=input_row
	#pragma HLS INTERFACE s_axilite port=input_col

	#pragma HLS INTERFACE ap_ctrl_none port=return

// define index and tmp variable
    int count = 0, row = 0, col = 0;
    int debug_count = 0;
    AXI_T axi_tmp;

// allocate memory for containers.
    float input[MAX_INPUT_ROW][MAX_INPUT_COL] ;   				 	// matrix 64*64(max case)
    float kernel[KERNEL_ROW][KERNEL_COL]    ;   				// kernel 3*3
    float output[MAX_OUTPUT_ROW][MAX_OUTPUT_COL]     ;   			// 62*62(max case)
    
// load kernle data

    for( row = 0 ; row < KERNEL_ROW ; row ++){
    	for( col = 0 ; col < KERNEL_COL ; col ++){
       	    axi_tmp = stream_kernel.read();
            kernel[row][col] = axi_tmp.data;
            if(axi_tmp.last)
            	break;
        }
    }


// load input data

    for( row = 0 ; row < input_row ; row ++){
    	for( col = 0 ; col < input_col ; col ++){
       	    axi_tmp = stream_input.read();
            input[row][col] = axi_tmp.data;
            if(axi_tmp.last)
            	break;
        }
    }

// conv2d computation
    float x = 0;
    int i = 0, j = 0;
    int m = 0, n = 0;
    row = 0, col = 0;
    int row_boundary = input_row - KERNEL_ROW + 1 ; 	// find the index of sliding window boundary
    int col_boundary = input_col - KERNEL_COL + 1 ;

    for( row=0 ; row < row_boundary ; row ++ ){
    	for( col = 0 ; col < col_boundary ; col ++ ){
	   
    		output[row][col] = 0; // initialize

    		// W * b
    		for( m = 0 ; m < KERNEL_ROW ; m++ ){
    			for( n = 0 ; n < KERNEL_COL ; n++ ){
    				x = input[row+m][col+n] * kernel[m][n] ;
    				output[row][col] += x ;
    			}
    		}
    	}
    }

//  store output in stream
    int output_row = input_row - KERNEL_ROW + 1 ;
    int output_col = input_col - KERNEL_COL + 1 ;

    for( row = 0 ; row < output_row ; row++){
        for( col = 0 ; col < output_col ; col++){

	        if( row == output_row-1 && col == output_col-1)
	        	axi_tmp.last = 1 ;
	        else
	        	axi_tmp.last = 0 ;

	        axi_tmp.data = output[row][col] ;
	        stream_output << axi_tmp;
        }
    }
}
