/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.h
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

#ifndef MRDIVIDE_HELPER_H
#define MRDIVIDE_HELPER_H

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
extern void mrdivide_helper(const emlrtStack *sp, const real_T A[9], const
  real32_T B_data[], const int32_T B_size[2], real32_T y_data[], int32_T y_size
  [2]);

#endif

/* End of code generation (mrdivide_helper.h) */
