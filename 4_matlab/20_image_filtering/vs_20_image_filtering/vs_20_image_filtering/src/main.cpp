#include "func.h"
#include "func_initialize.h"
#include "func_terminate.h"
#include <stdio.h>
#include <iostream>
// - - - - - - - - - - - - - - - - - - - -
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
// - - - - - - - - 
int main()
{
	cv::Mat x = cv::imread("lena_512.png", CV_LOAD_IMAGE_GRAYSCALE);
	const size_t N = x.rows;
	
	func_initialize();

	double* x_ = new double[N * N];
	for (size_t i = 0; i < N * N; i++)
		x_[i] = static_cast<double>(*(x.data + i));

	double h[3 * 3] = { };
	for (size_t i = 0; i < 3 * 3; ++i)
		h[i] = 1. / 9.;

	double* y_ = new double[N * N];

	//extern void func(const double x[262144], const double h[9], double y[262144]);
	func(x_, h, y_);

	cv::Mat y(N, N, CV_8UC1);
	for (size_t i = 0; i < N * N; i++)
		y.data[i] = static_cast<unsigned int>(y_[i]);

	// Compare against matlab tesbBench
	cv::Mat y_gold = cv::imread("y_gold.png", CV_64FC1);
	double error = 0.;
	for (size_t i = 0; i < N * N; ++i)
	{
		auto temp = y_gold.data[i] - y_[i];
		error += temp * temp;
	}
	error = sqrt(error) / static_cast<double>(N * N);
	std::cout << "L2-error: " << error << "\n";

	cv::imshow("filtered image", y);
	cv::waitKey(0);

	func_terminate();
	getchar();

	delete[] x_, y_;
	return 0;
}