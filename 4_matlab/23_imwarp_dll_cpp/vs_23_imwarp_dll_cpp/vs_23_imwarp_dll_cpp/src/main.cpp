/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.cpp
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include files */
#include "func.h"
#include "main.h"
#include "func_terminate.h"
#include "func_emxAPI.h"
#include "func_initialize.h"
// - - - - - - - - - - - - - - - - - - - -
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgcodecs/imgcodecs.hpp"
// - - - - - - - - - - - - - - - - - - - -
//===================================================================
/* Function Declarations */
static void argInit_512x512_real_T(double result[262144]);
static double argInit_real_T();
static void main_func();
//===================================================================
/* Function Definitions */
static void argInit_512x512_real_T(double result[262144])
{
  cv::Mat x = cv::imread("lena_512.png", CV_LOAD_IMAGE_GRAYSCALE);
  //cv::imshow("test", x);
  //cv::waitKey(0);

  /* Loop over the array to initialize each element. */
  for (int idx0 = 0; idx0 < 512; idx0++) 
    for (int idx1 = 0; idx1 < 512; idx1++) 
	  result[idx0 + (idx1 << 9)] = static_cast<double>(*(x.data + (idx0 + (idx1 << 9))));
}
//===================================================================
void view_result(emxArray_real_T *x)
{
	cv::Mat y(512, 512, CV_8UC1);
	for (int idx0 = 0; idx0 < 512; idx0++)
		for (int idx1 = 0; idx1 < 512; idx1++)
			y.at<unsigned char>(idx1, idx0) = static_cast<unsigned char>(x->data[idx0 + (idx1 << 9)]);

	cv::imshow("result", y);
	cv::waitKey(0);
}
//===================================================================
static void main_func()
{
  emxArray_real_T *y;
  static double dv0[262144];
  emxInitArray_real_T(&y, 2);
  argInit_512x512_real_T(dv0);
  func(dv0, y);
  view_result(y);
  emxDestroyArray_real_T(y);
}
//===================================================================
int main(int, const char * const [])
{
  /* Initialize the application.
     You do not need to do this more than one time. */
  func_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_func();

  /* Terminate the application.
     You do not need to do this more than one time. */
  func_terminate();
  return 0;
}
/* End of code generation (main.cpp) */