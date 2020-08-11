#include "conv2d.h"




void conv2d(STREAM_T &stream_filter, STREAM_T &stream_input, STREAM_T &stream_output, int input_size, int input_number, int filter_number ){
// define port
	#pragma HLS INTERFACE axis port=stream_kernel
	#pragma HLS INTERFACE axis port=stream_input
	#pragma HLS INTERFACE axis port=stream_output
	#pragma HLS INTERFACE s_axilite port=input_size
	#pragma HLS INTERFACE s_axilite port=input_number
	#pragma HLS INTERFACE s_axilite port=filter_number
	#pragma HLS INTERFACE ap_ctrl_none port=return

// define index and tmp variable
    int count = 0, channel = 0, row = 0, col = 0;
    int debug_count = 0;
    AXI_T axi_tmp;

// allocate memory for containers.
    float input[MAX_BATCH][CHANNEL][MAX_INPUT_SIZE][MAX_INPUT_SIZE] ;   // batch:256, channel:3, matrix 64*64(max case)
    float filter[MAX_NUMBER_OF_FILTER][CHANNEL][FILTER_SIZE][FILTER_SIZE]    ;   // number of filter:3, channel:3, kernel 3*3
    float output[MAX_NUMBER_OF_FILTER][MAX_OUTPUT_SIZE][MAX_OUTPUT_SIZE]     ;   // numebr of output:3, matrix: 62*62(max case)
    
// load filter data
    for( count = 0 ; count < filter_number ;count ++ ){
        for( channel = 0 ; channel < CHANNEL ; channel ++){
            for( row = 0 ; row < FILTER_SIZE ; row ++){
                for( col = 0 ; col < FILTER_SIZE && !stream_filter.empty()  ; col ++){
                    axi_tmp = stream_filter.read();
                    filter[count][channel][row][col] = axi_tmp.data;
                }
            }
        }
    }

// load input data
    for( count = 0 ; count < input_number ; count ++ ){
        for( channel = 0 ; channel < CHANNEL ; channel ++){
            for( row = 0 ; row < input_size ; row ++){
                for( col = 0 ; col < input_size && !stream_input.empty()  ; col ++){
                    axi_tmp = stream_input.read();
                    input[count][channel][row][col] = axi_tmp.data;
                }
            }
        }
    }

// conv2d computation
    int input_count = 0, filter_count = 0;
    int map_boundary = input_size - FILTER_SIZE + 1 ;
    int m = 0, n = 0;
    float x = 0, sum = 0;

    for( input_count = 0 ; input_count < input_number ; input_count++ ){
    	for( filter_count = 0 ; filter_count <  filter_number ; filter_count++ ){


			for( row = 0 ; row < map_boundary ; row ++ ){
				for( col = 0 ; col < map_boundary ; col ++ ){
					sum = 0;
					for( channel = 0 ; channel < CHANNEL ; channel ++){
						x = 0 ;
						for( m = 0 ; m < FILTER_SIZE ; m++ ){
							for( n = 0 ; n < FILTER_SIZE ; n++ ){
								x += input[input_count][channel][row+m][col+n] * filter[filter_count][channel][m][n];
							}
						}
						sum += x;
					} // end of channel iteration
					axi_tmp.data = sum ;
					stream_output << axi_tmp;
				}// end of decide boundary
			}

    	}
    }

}
