/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "func.h"
#include "mrdivide_helper.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 33,  /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 61,  /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 292,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

/* Function Definitions */
void mrdivide_helper(const emlrtStack *sp, const real_T A[9], const real_T B[9],
                     real_T y[9])
{
  real_T b_A[9];
  int32_T r2;
  int32_T r3;
  real_T y_tmp;
  real_T b_y_tmp;
  int32_T c_y_tmp;
  int32_T d_y_tmp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &x_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &y_emlrtRSI;
  memcpy(&b_A[0], &B[0], 9U * sizeof(real_T));
  r2 = 1;
  r3 = 2;
  b_A[1] = B[1] / B[0];
  b_A[2] = B[2] / B[0];
  b_A[4] = B[4] - b_A[1] * B[3];
  b_A[5] = B[5] - b_A[2] * B[3];
  b_A[7] = 0.0 - b_A[1] * B[6];
  b_A[8] = B[8] - b_A[2] * B[6];
  if (muDoubleScalarAbs(b_A[5]) > muDoubleScalarAbs(b_A[4])) {
    r2 = 2;
    r3 = 1;
  }

  b_A[3 + r3] /= b_A[3 + r2];
  b_A[6 + r3] -= b_A[3 + r3] * b_A[6 + r2];
  if ((b_A[0] == 0.0) || (b_A[3 + r2] == 0.0) || (b_A[6 + r3] == 0.0)) {
    c_st.site = &ab_emlrtRSI;
    d_st.site = &bb_emlrtRSI;
    warning(&d_st);
  }

  y[0] = A[0] / b_A[0];
  y[3 * r2] = A[3] - y[0] * b_A[3];
  y[3 * r3] = A[6] - y[0] * b_A[6];
  y[3 * r2] /= b_A[3 + r2];
  y_tmp = b_A[6 + r2];
  y[3 * r3] -= y[3 * r2] * y_tmp;
  y[3 * r3] /= b_A[6 + r3];
  b_y_tmp = b_A[3 + r3];
  y[3 * r2] -= y[3 * r3] * b_y_tmp;
  y[0] -= y[3 * r3] * b_A[r3];
  y[0] -= y[3 * r2] * b_A[r2];
  y[1] = A[1] / b_A[0];
  c_y_tmp = 1 + 3 * r2;
  y[c_y_tmp] = A[4] - y[1] * b_A[3];
  d_y_tmp = 1 + 3 * r3;
  y[d_y_tmp] = A[7] - y[1] * b_A[6];
  y[c_y_tmp] /= b_A[3 + r2];
  y[d_y_tmp] -= y[c_y_tmp] * y_tmp;
  y[d_y_tmp] /= b_A[6 + r3];
  y[c_y_tmp] -= y[d_y_tmp] * b_y_tmp;
  y[1] -= y[d_y_tmp] * b_A[r3];
  y[1] -= y[c_y_tmp] * b_A[r2];
  y[2] = A[2] / b_A[0];
  c_y_tmp = 2 + 3 * r2;
  y[c_y_tmp] = A[5] - y[2] * b_A[3];
  d_y_tmp = 2 + 3 * r3;
  y[d_y_tmp] = A[8] - y[2] * b_A[6];
  y[c_y_tmp] /= b_A[3 + r2];
  y[d_y_tmp] -= y[c_y_tmp] * y_tmp;
  y[d_y_tmp] /= b_A[6 + r3];
  y[c_y_tmp] -= y[d_y_tmp] * b_y_tmp;
  y[2] -= y[d_y_tmp] * b_A[r3];
  y[2] -= y[c_y_tmp] * b_A[r2];
}

/* End of code generation (mrdivide_helper.c) */
