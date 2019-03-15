/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "norm.h"

/* Function Definitions */
real32_T b_norm(const real32_T x_data[], const int32_T x_size[2])
{
  real32_T y;
  int32_T j;
  int32_T i22;
  boolean_T exitg1;
  real32_T s;
  int32_T i;
  if (x_size[0] == 0) {
    y = 0.0F;
  } else if ((x_size[0] == 1) || (x_size[1] == 1)) {
    y = 0.0F;
    i22 = x_size[0] * x_size[1];
    for (j = 0; j < i22; j++) {
      y += muSingleScalarAbs(x_data[j]);
    }
  } else {
    y = 0.0F;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= x_size[1] - 1)) {
      s = 0.0F;
      i22 = x_size[0];
      for (i = 0; i < i22; i++) {
        s += muSingleScalarAbs(x_data[i + x_size[0] * j]);
      }

      if (muSingleScalarIsNaN(s)) {
        y = rtNaNF;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }

        j++;
      }
    }
  }

  return y;
}

real32_T c_norm(const real32_T x[9])
{
  real32_T y;
  int32_T j;
  boolean_T exitg1;
  real32_T s;
  y = 0.0F;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = (muSingleScalarAbs(x[3 * j]) + muSingleScalarAbs(x[1 + 3 * j])) +
      muSingleScalarAbs(x[2 + 3 * j]);
    if (muSingleScalarIsNaN(s)) {
      y = rtNaNF;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

/* End of code generation (norm.c) */
