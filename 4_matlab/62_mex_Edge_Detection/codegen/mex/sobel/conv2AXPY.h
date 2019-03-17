/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * conv2AXPY.h
 *
 * Code generation for function 'conv2AXPY'
 *
 */

#ifndef CONV2AXPY_H
#define CONV2AXPY_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "omp.h"
#include "sobel_types.h"

/* Function Declarations */
extern void b_conv2AXPYSameCMP(const emlrtStack *sp, const emxArray_real_T *a,
  boolean_T prefBLAS, emxArray_real_T *c);
extern void conv2AXPYSameCMP(const emlrtStack *sp, const emxArray_real_T *a,
  boolean_T prefBLAS, emxArray_real_T *c);

#endif

/* End of code generation (conv2AXPY.h) */
