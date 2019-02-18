#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	func_initialize();

	// a is 2x2 matrix
	// b is 2x2 matrix

	double a[2*2] = { 1, 2, 3, 4 };
	double b[2*2] = { 1, 2, 3, 4 };
	double c[2*2] = { };

	func(a, b, c);

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%2.1f ", c[i * 2 + j]);
		}
		printf("\n");
	}
		
	func_terminate();
	getchar();
	return 0;
}