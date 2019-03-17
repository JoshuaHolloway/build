/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * validateattributes.h
 *
 * Code generation for function 'validateattributes'
 *
 */

#ifndef VALIDATEATTRIBUTES_H
#define VALIDATEATTRIBUTES_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "visionRecovertformCodeGeneration_kernel_types.h"

/* Function Declarations */
extern void b_validateattributes(const emlrtStack *sp, const real32_T a[9]);
extern void validateattributes(const emlrtStack *sp, const real32_T a_data[],
  const int32_T a_size[2]);

#endif

/* End of code generation (validateattributes.h) */
