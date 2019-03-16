/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: conv2.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 21:04:51
 */

#ifndef CONV2_H
#define CONV2_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "omp.h"
#include "sobel_types.h"

/* Function Declarations */
extern void b_conv2(const emxArray_real_T *a, emxArray_real_T *c);
extern void conv2(const emxArray_real_T *a, emxArray_real_T *c);

#endif

/*
 * File trailer for conv2.h
 *
 * [EOF]
 */