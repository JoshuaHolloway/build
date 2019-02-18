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

/* Function Definitions */
void func(const double x[4], const double h[3], double y[4])
{
  int k;

  /*  func performs 1D-'same'-convolution */
  /*  x is the Nx1 signal */
  /*  h is the Kx1 kernel */
  /*  y is the Nx1 filtered signal */
  y[3] = 0.0;
  y[0] = h[0] * x[1];
  y[1] = h[0] * x[2];
  y[2] = h[0] * x[3];
  for (k = 0; k < 4; k++) {
    y[k] += h[1] * x[k];
  }

  for (k = 0; k < 3; k++) {
    y[1 + k] += h[2] * x[k];
  }
}

/* End of code generation (func.c) */
