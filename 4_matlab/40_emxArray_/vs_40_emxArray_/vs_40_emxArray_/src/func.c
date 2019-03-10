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
#include <math.h>
#include "func.h"
#include "sort1.h"

/* Function Definitions */
void func(double A[2], double tol, double B_data[], int B_size[2])
{
  sort(A);

  /* coder.varsize('B', [1 100], [0 1]); */
  B_size[0] = 1;
  B_size[1] = 1;
  B_data[0] = A[0];
  if (fabs(A[0] - A[1]) > tol) {
    B_size[0] = 1;
    B_size[1] = 2;
    B_data[0] = A[0];
    B_data[1] = A[1];
  }
}

/* End of code generation (func.c) */
