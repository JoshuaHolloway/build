#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	func_initialize();

	// [1 2] [1; 2] = (1)(1) + (2)(2) = 1 + 4 = 5
	// [a[0]  a[1]] * [b[0]  b[1]]  = a[0] * b[0]  +  a[1] * b[1]

	// a is row-vector
	// b is col-vector

	double a[2] = {1, 2};   
	double b[2] = {1, 2};
	double c[2] = {0};

	*c = func(a, b);

	printf("%f\n", *c);
	func_terminate();
	getchar();
	return 0;
}