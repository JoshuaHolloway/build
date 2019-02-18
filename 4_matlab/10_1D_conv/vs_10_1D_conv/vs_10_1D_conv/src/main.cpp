#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	func_initialize();

	// a is 2x2 matrix
	// b is 2x2 matrix

	double x[4] = { 1, 2, 3, 4 };
	double h[3] = { 1, 1, 1 };
	double y[4] = { };

	func(x, h, y);

	for (int i = 0; i < 4; ++i)
		printf("%2.1f ", y[i]);
	printf("\n");

	func_terminate();
	getchar();
	return 0;
}