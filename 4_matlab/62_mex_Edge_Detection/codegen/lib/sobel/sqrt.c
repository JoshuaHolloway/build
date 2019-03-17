/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sqrt.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 21:04:51
 */

/* Include Files */
#include <math.h>
#include "sobel.h"
#include "sqrt.h"

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void b_sqrt(emxArray_real_T *x)
{
  int nx;
  int k;
  nx = x->size[0] * x->size[1];
  for (k = 0; k < nx; k++) {
    x->data[k] = sqrt(x->data[k]);
  }
}

/*
 * File trailer for sqrt.c
 *
 * [EOF]
 */
