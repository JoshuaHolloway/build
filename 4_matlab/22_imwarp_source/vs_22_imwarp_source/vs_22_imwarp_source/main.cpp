#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>

int main()
{
	constexpr int N = 512;
	double* x = new double[N * N];
	for (size_t i = 0; i < N * N; i++)
		x[i] = (double)(i % 256);
		//x_[i] = static_cast<double>(*(x.data + i));

	func_initialize();
	

	emxArray_real_T *y = (emxArray_real_T*)malloc(sizeof(emxArray_real_T));

	//void func(const double x[262144], emxArray_real_T *y)
	func(x, y);
	
	func_terminate();
	getchar();
	return 0;
}