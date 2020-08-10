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

    int count = 0, channel = 0, row = 0, col = 0;
    AXI_T axi_tmp;
// allocate memory for containers.
    float input[MAX_BATCH][CHANNEL][MAX_INPUT_SIZE][MAX_INPUT_SIZE] ;   // batch:256, channel:3, matrix 64*64(max case)
    float filter[MAX_NUMBER_OF_FILTER][CHANNEL][FILTER_SIZE][FILTER_SIZE]    ;   // number of filter:3, channel:3, kernel 3*3
    float output[MAX_NUMBER_OF_FILTER][MAX_OUTPUT_SIZE][MAX_OUTPUT_SIZE]     ;   // numebr of output:3, matrix: 62*62(max case)
    
// load filter data


    for( count = 0 ; count < filter_number && !stream_filter.empty() ;count ++ ){
        for( channel = 0 ; channel < CHANNEL && !stream_filter.empty()  ; channel ++){
            for( row = 0 ; row < FILTER_SIZE && !stream_filter.empty()  ; row ++){
                for( col = 0 ; col < FILTER_SIZE && !stream_filter.empty()  ; col ++){
                    axi_tmp = stream_filter.read();
                    //printf("%.1f  ", axi_tmp.data);
                    filter[count][channel][row][col] = axi_tmp.data;

                }
                //printf("\n");
            }
            //printf("\n\n");
        }
        //printf("=======\n");
    }
// load input data
    for( count = 0 ; count < input_number && !stream_input.empty() ;count ++ ){
        for( channel = 0 ; channel < CHANNEL && !stream_input.empty() ; channel ++){
            for( row = 0 ; row < input_size && !stream_input.empty()  ; row ++){
                for( col = 0 ; col < input_size && !stream_input.empty()  ; col ++){
                    axi_tmp = stream_input.read();
                    //printf("%.1f  ", axi_tmp.data);
                    input[count][channel][row][col] = axi_tmp.data;
                }
                //printf("\n");
            }
            //printf("\n\n");
        }
        //printf("=======\n");
    }

}
