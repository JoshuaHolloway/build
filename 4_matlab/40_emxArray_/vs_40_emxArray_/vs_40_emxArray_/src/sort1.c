/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "func.h"
#include "sort1.h"

/* Function Definitions */
void sort(double x[2])
{
  double tmp;
  if (x[0] > x[1]) {
    tmp = x[0];
    x[0] = x[1];
    x[1] = tmp;
  }
}

/* End of code generation (sort1.c) */
