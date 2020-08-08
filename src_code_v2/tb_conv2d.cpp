#include "conv2d.h"
#include<stdio.h>
#include<stdlib.h>
int main(void){

// info of input volumn
	int input_size = 16;  				// 16*16 matrix
	int input_channel = CHANNEL; 		// RGB channel
	int input_number = 1;				// maybe as a argument 
// info of filters
	int filter_size = FILTER_SIZE;		// a kernel is a 3*3 kernel
	int filter_channel = CHANNEL;		// RGB channel
	int filter_number = 1;				// maybe as a argument n

// initialize input and filter
	float input[input_number][input_channel][input_size][input_size]={
		{// first input
			{	{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1},
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
			},
			{	{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1},
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
			},
			{	{1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1},
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
			}
		} // end of first input
	};
	
	float filter[filter_number][filter_channel][filter_size][filter_size]=
	{
		{// first filter
			{
				{1,0,0},
				{1,0,0},
				{1,0,0}
			},
			{
				{1,0,0},
				{1,0,0},
				{1,0,0}
			},
			{
				{1,0,0},
				{1,0,0},
				{1,0,0}
			}
		}// end of first filter
	};

// Print Info
	printf("====Input Volume Info====\n");
	printf("Input Height: %d\n", input_size);
	printf("Input Width: %d\n", input_size);
	printf("Input Channel: %d\n", input_channel);
	printf("Input Number: %d\n", input_number);

	printf("====Filter Info====\n");
	printf("Filter Height: %d\n", filter_size);
	printf("Filter Width: %d\n", filter_size);
	printf("Filter Channel: %d\n", filter_channel);
	printf("Filter Number: %d\n", filter_number);

	
	AXI_T axi_tmp;
	STREAM_T stream_filter, stream_input, stream_output ;

// store 3*3*3*n filter data in stream<>
	int count = 0, channel = 0, row = 0, col = 0;
	for( count=0; count < filter_number; count++ ){
		for( channel=0; channel < filter_channel; channel++ ){
			for( row=0; row < filter_size; row++ ){
				for( col=0; col < filter_size; col++ ){

					// check the last data
					if( count==filter_number && channel==filter_channel && row==filter_size && col==filter_size)
						break;

					// not the last data
					axi_tmp.data = filter[count][channel][row][col];
					axi_tmp.last = 0;
					stream_filter << axi_tmp;
				}
			}
		}
	}
	// store the last data into the stream<>
	axi_tmp.data = filter[filter_number-1][filter_channel-1][filter_size-1][filter_size-1];
	axi_tmp.last = 1;
	stream_filter << axi_tmp;

// store input volume data in stream<>

	for( count=0; count < input_number; count++ ){
		for( channel=0; channel < input_channel; channel++ ){
			for( row=0; row < input_size; row++ ){
				for( col=0; col < input_size; col++ ){

					// check the last data
					if( count==input_number && channel==input_channel && row==input_size && col==input_size)
						break;

					// not the last data
					axi_tmp.data = input[count][channel][row][col];
					axi_tmp.last = 0;
					stream_input << axi_tmp;
				}
			}
		}
	}
	// store the last data into the stream<>
	axi_tmp.data = input[input_number-1][input_channel-1][input_size-1][input_size-1];
	axi_tmp.last = 1;
	stream_input << axi_tmp;

// execute the conv2d
	conv2d(stream_filter, stream_input, stream_output, input_size, 1, 1);

// print the answer
	printf("====Output Volume====\n");
	

}
