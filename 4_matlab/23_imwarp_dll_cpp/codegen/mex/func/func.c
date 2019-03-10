/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func.c
 *
 * Code generation for function 'func'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "func.h"
#include "imwarp.h"
#include "func_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 3,     /* lineNo */
  "func",                              /* fcnName */
  "C:\\dev\\build\\4_matlab\\23_imwarp_dll_cpp\\func.m"/* pathName */
};

/* Function Definitions */
void func(const emlrtStack *sp, const real_T x[262144], emxArray_real_T *y)
{
  static const real_T t[9] = { 1.0, 0.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  st.site = &emlrtRSI;
  imwarp(&st, x, t, y);
}

/* End of code generation (func.c) */
