/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: conv2.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 21:04:51
 */

/* Include Files */
#include "sobel.h"
#include "conv2.h"
#include "conv2AXPY.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *a
 *                emxArray_real_T *c
 * Return Type  : void
 */
void b_conv2(const emxArray_real_T *a, emxArray_real_T *c)
{
  b_conv2AXPYSameCMP(a, c);
}

/*
 * Arguments    : const emxArray_real_T *a
 *                emxArray_real_T *c
 * Return Type  : void
 */
void conv2(const emxArray_real_T *a, emxArray_real_T *c)
{
  conv2AXPYSameCMP(a, c);
}

/*
 * File trailer for conv2.c
 *
 * [EOF]
 */
