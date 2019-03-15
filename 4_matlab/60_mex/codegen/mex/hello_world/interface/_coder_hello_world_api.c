/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hello_world_api.c
 *
 * Code generation for function '_coder_hello_world_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hello_world.h"
#include "_coder_hello_world_api.h"
#include "hello_world_data.h"

/* Function Declarations */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[12]);

/* Function Definitions */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[12])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 12 };

  y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 12, m1, &u[0]);
  emlrtAssign(&y, m1);
  return y;
}

void hello_world_api(int32_T nlhs, const mxArray *plhs[1])
{
  char_T cv1[12];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  /* Marshall function outputs */
  hello_world(cv1);
  plhs[0] = emlrt_marshallOut(&st, cv1);
}

/* End of code generation (_coder_hello_world_api.c) */
