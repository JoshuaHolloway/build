/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func.c
 *
 * Code generation for function 'func'
 *
 */

/* Include files */
#include "func.h"
#include "conv2AXPY.h"

/* Function Definitions */
void func(const double x[262144], const double h[9], double y[262144])
{
  /*  func performs 2D-'same'-convolution */
  /*  x is the NxN signal */
  /*  h is the KxK kernel */
  /*  y is the NxN filtered signal */
  conv2AXPYSameCMP(x, h, y);
}

/* End of code generation (func.c) */
