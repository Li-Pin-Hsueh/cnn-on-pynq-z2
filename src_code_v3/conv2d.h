#include "hls_stream.h"

#define KERNEL_ROW 3
#define KERNEL_COL 3
#define MAX_INPUT_ROW 64
#define MAX_INPUT_COL 64
#define MAX_OUTPUT_ROW 62
#define MAX_OUTPUT_COL 62

struct AXI_T {
	float data;
	bool last;
};
typedef hls::stream<AXI_T> STREAM_T;

void conv2d(STREAM_T &stream_kernel, STREAM_T &stream_input, STREAM_T &stream_output, int input_row, int input_col);
