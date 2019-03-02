#include "func_01.h"
#include "func_01_initialize.h"
#include "func_01_terminate.h"
#include <stdio.h>

int main()
{
	func_01_initialize();
	printf("%f\n", func_01(26));
	func_01_terminate();
	getchar();
	return 0;
}