/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scalexpAlloc.c
 *
 * Code generation for function 'scalexpAlloc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "scalexpAlloc.h"

/* Function Definitions */
boolean_T dimagree(const emxArray_real32_T *z, const emxArray_real32_T
                   *varargin_1, const emxArray_real32_T *varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T i20;
  int32_T i21;
  p = true;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (k + 1 <= 1) {
      i20 = z->size[0];
      i21 = varargin_1->size[0];
    } else {
      i20 = 1;
      i21 = 1;
    }

    if (i20 != i21) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    b_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (k + 1 <= 1) {
        i20 = z->size[0];
        i21 = varargin_2->size[0];
      } else {
        i20 = 1;
        i21 = 1;
      }

      if (i20 != i21) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (b_p) {
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  return p;
}

/* End of code generation (scalexpAlloc.c) */
