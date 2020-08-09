#include "hls_stream.h"
#define FILTER_SIZE 3	// 3*3 
#define CHANNEL 3	// a Filter includes 3 Kernels

struct AXI_T {
	float data;
	bool last;
};
typedef hls::stream<AXI_T> STREAM_T;
// filter size K_SIZE*K_SZIE*
void conv2d(STREAM_T &filter, STREAM_T &input, STREAM_T &output, int input_size, int n );
