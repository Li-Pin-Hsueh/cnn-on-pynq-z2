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
	
/*	float input[input_number][input_channel][input_size][input_size]={
			{// first input
					{//first channel
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0}
					},
					{
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0}
					},
					{
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0},
							{1,0,0,0,0}
					}
			}
	};
*/
	float filter[filter_number][filter_channel][filter_size][filter_size]={
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
	printf("\n====Input Volume Info====\n");
	printf("Input Height: %d\n", input_size);
	printf("Input Width: %d\n", input_size);
	printf("Input Channel: %d\n", input_channel);
	printf("Input Number: %d\n", input_number);

	printf("\n====Filter Info====\n");
	printf("Filter Height: %d\n", filter_size);
	printf("Filter Width: %d\n", filter_size);
	printf("Filter Channel: %d\n", filter_channel);
	printf("Filter Number: %d\n", filter_number);

	
	AXI_T axi_tmp;
	STREAM_T stream_filter("Filter"), stream_input("Input"), stream_output("Output") ;

// store 3*3*3*n filter data in stream<>
	int count = 0, channel = 0, row = 0, col = 0;
	for( count=0; count < filter_number; count++ ){
		for( channel=0; channel < filter_channel; channel++ ){
			for( row=0; row < filter_size; row++ ){
				for( col=0; col < filter_size; col++ ){

					// check the last data
					if( count==filter_number-1 && channel==filter_channel-1 && row==filter_size-1 && col==filter_size-1)
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
					if( count==input_number-1 && channel==input_channel-1 && row==input_size-1 && col==input_size-1)
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
	conv2d(stream_filter, stream_input, stream_output, input_size, input_number, filter_number);

// print the answer
	int output_volume_number = filter_number;
	int output_volume_size = input_size - filter_size + 1;
	count = 1;

	printf("\n=====output volume=======\n");
	while( !stream_output.empty() ){

		printf("%.1f  ", stream_output.read().data);
		if( count % output_volume_size == 0 ) printf("\n");
		if( count % (output_volume_size*output_volume_size) == 0 ) printf("=========\n");
		count ++;
	}
	


}
