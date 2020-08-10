#include "conv2d.h"




void conv2d(STREAM_T &stream_filter, STREAM_T &stream_input, STREAM_T &stream_output, int input_size, int n ){
    printf(" conv2d executed.");
    int count = 0, channel = 0, row = 0, col = 0;
    AXI_T axi_tmp;
// allocate memory for containers.
    float input[MAX_BATCH][CHANNEL][MAX_INPUT_SIZE][MAX_INPUT_SIZE] ;   // batch:256, channel:3, matrix 64*64(max case)
    float filter[MAX_NUMBER_OF_FILTER][CHANNEL][FILTER_SIZE][FILTER_SIZE]    ;   // number of filter:3, channel:3, kernel 3*3
    float output[MAX_NUMBER_OF_FILTER][MAX_OUTPUT_SIZE][MAX_OUTPUT_SIZE]     ;   // numebr of output:3, matrix: 62*62(max case)
    
// load filter data
    for( count = 0 ; !stream_filter.empty() ;count ++ ){
        for( channel = 0 ; channel < CHANNEL ; channel ++){
            for( row = 0 ; row < FILTER_SIZE ; row ++){
                for( col = 0 ; col < FILTER_SIZE ; col ++){
                    axi_tmp = stream_filter.read();
                    filter[count][channel][row][col] = axi_tmp.data;
                }
            }
        }
    }
// load input data
    for( count = 0 ; !stream_input.empty() ;count ++ ){
        for( channel = 0 ; channel < CHANNEL ; channel ++){
            for( row = 0 ; row < input_size ; row ++){
                for( col = 0 ; col < input_size ; col ++){
                    axi_tmp = stream_input.read();
                    input[count][channel][row][col] = axi_tmp.data;
                }
            }
        }
    }

}
