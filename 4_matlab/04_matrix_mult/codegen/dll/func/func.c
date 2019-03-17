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
void func(const double a[4], const double b[4], double y[4])
{
  int i0;
  double d0;
  for (i0 = 0; i0 < 2; i0++) {
    y[i0] = 0.0;
    d0 = a[i0 + 2];
    y[i0] = a[i0] * b[0] + d0 * b[1];
    y[i0 + 2] = 0.0;
    y[i0 + 2] = a[i0] * b[2] + d0 * b[3];
  }
}

/* End of code generation (func.c) */
