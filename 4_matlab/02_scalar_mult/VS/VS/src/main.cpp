#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	func_initialize();
	printf("%f\n", func(1,2));
	func_terminate();
	getchar();
	return 0;
}