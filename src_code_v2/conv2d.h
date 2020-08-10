#include "hls_stream.h"

#define CHANNEL 3

#define MAX_BATCH 1
#define MAX_INPUT_SIZE 64

#define FILTER_SIZE 3	// 3*3 
#define MAX_NUMBER_OF_FILTER 3

#define MAX_OUTPUT_SIZE 62


struct AXI_T {
	float data;
	bool last;
};
typedef hls::stream<AXI_T> STREAM_T;
// filter size K_SIZE*K_SZIE*
void conv2d(STREAM_T &stream_filter, STREAM_T &stream_input, STREAM_T &stream_output, int input_size, int input_number, int filter_number );
