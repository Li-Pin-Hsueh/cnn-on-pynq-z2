#include "hls_stream.h"
#define K_ROW 3
#define K_COL 3

struct AXI_T {
	float data;
	bool last;
};
typedef hls::stream<AXI_T> STREAM_T;
void conv2d(STREAM_T &_kernel, STREAM_T &_input, STREAM_T &_output, int _input_size );
