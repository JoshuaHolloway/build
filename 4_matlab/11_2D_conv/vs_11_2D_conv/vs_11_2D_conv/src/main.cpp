#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	func_initialize();

	// a is 2x2 matrix
	// b is 2x2 matrix

	double x[4* 4] = { 
		1,   2,   3,   4,
		5,   6,   7,   8,
		9,  10,  11,  12,
		13, 14,  15,  16};
	double h[3*3] = { 
		1, 1, 1,
		1, 1, 1, 
		1, 1, 1};
	double y[4*4] = { };

	func(x, h, y);

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%2.1f\t", y[i * 4 + j]);
		}
		printf("\n");
	}
	printf("\n");

	func_terminate();
	getchar();
	return 0;
}