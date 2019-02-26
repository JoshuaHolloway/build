#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	func_initialize();
	func(1, 1);
	printf("%f\n", func(1, 1));
	func_terminate();
	getchar();
	return 0;
}