/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * conv2.c
 *
 * Code generation for function 'conv2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sobel.h"
#include "conv2.h"
#include "conv2AXPY.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 57,  /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 74,  /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 41,  /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\conv2.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 27,  /* lineNo */
  "conv2AXPY",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pathName */
};

/* Function Definitions */
void b_conv2(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *c)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  d_st.site = &g_emlrtRSI;
  b_conv2AXPYSameCMP(&d_st, a, true, c);
}

void conv2(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *c)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  d_st.site = &g_emlrtRSI;
  conv2AXPYSameCMP(&d_st, a, true, c);
}

/* End of code generation (conv2.c) */
