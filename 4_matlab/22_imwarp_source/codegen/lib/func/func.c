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
#include "imwarp.h"

/* Function Definitions */
void func(const double x[262144], emxArray_real_T *y)
{
  static const double t[9] = { 1.0, 0.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  imwarp(x, t, y);
}

/* End of code generation (func.c) */
