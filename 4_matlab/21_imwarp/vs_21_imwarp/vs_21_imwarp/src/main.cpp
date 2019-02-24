#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>
#include <iostream>
// - - - - - - - - - - - - - - - - - - - -
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
// - - - - - - - - - - - - - - - - - - - -
int main()
{
	cv::Mat x = cv::imread("lena_512.png", CV_LOAD_IMAGE_GRAYSCALE);
	const size_t N = x.rows;

	func_initialize();

	double* x_ = new double[N * N];
	for (size_t i = 0; i < N * N; i++)
		x_[i] = static_cast<double>(*(x.data + i));




	//extern void func(const double x[262144], emxArray_real_T *y);
	emxArray_real_T* y_ = (emxArray_real_T*)malloc(sizeof(emxArray_real_T) + (N*N*sizeof(double)));
	//y_->data = (emxArray_real_T*)malloc(sizeof(emxArray_real_T) * N * N);

	func(x_, y_);
	//struct emxArray_real_T
	//{
	//	double *data;
	//	int *size;
	//	int allocatedSize;
	//	int numDimensions;
	//	boolean_T canFreeData;
	//};

	cv::Mat y(N, N, CV_8UC1);
	for (size_t i = 0; i < N * N; i++)
		y.data[i] = static_cast<unsigned int>(y_->data[i]);
	cv::imshow("filtered image", y);
	cv::waitKey(0);

	func_terminate();
	getchar();

	//delete[] x_, y_;
	return 0;
}