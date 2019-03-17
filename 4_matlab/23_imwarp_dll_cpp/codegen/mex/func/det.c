/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.c
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "func.h"
#include "det.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRSInfo b_emlrtRSI = { 50,  /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 58,  /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 45,  /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 45,  /* lineNo */
  "xger",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 15,  /* lineNo */
  "xger",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 54,  /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 21, /* lineNo */
  "det",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

/* Function Definitions */
real_T det(const emlrtStack *sp, const real_T x[9])
{
  real_T y;
  real_T b_x[9];
  int8_T ipiv[3];
  int32_T j;
  int32_T b_tmp;
  int32_T jp1j;
  boolean_T overflow;
  int32_T n;
  int32_T iy;
  int32_T ix;
  real_T smax;
  int32_T jA;
  real_T s;
  int32_T b;
  int32_T ijA;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  b_st.site = &kb_emlrtRSI;
  ipiv[0] = 1;
  ipiv[1] = 2;
  for (j = 0; j < 2; j++) {
    b_tmp = j << 2;
    jp1j = b_tmp + 2;
    n = 3 - j;
    iy = 0;
    ix = b_tmp;
    smax = muDoubleScalarAbs(b_x[b_tmp]);
    for (jA = 2; jA <= n; jA++) {
      ix++;
      s = muDoubleScalarAbs(b_x[ix]);
      if (s > smax) {
        iy = jA - 1;
        smax = s;
      }
    }

    if (b_x[b_tmp + iy] != 0.0) {
      if (iy != 0) {
        iy += j;
        ipiv[j] = (int8_T)(iy + 1);
        smax = b_x[j];
        b_x[j] = b_x[iy];
        b_x[iy] = smax;
        ix = j + 3;
        iy += 3;
        smax = b_x[ix];
        b_x[ix] = b_x[iy];
        b_x[iy] = smax;
        ix += 3;
        iy += 3;
        smax = b_x[ix];
        b_x[ix] = b_x[iy];
        b_x[iy] = smax;
      }

      b = (b_tmp - j) + 3;
      c_st.site = &b_emlrtRSI;
      for (iy = jp1j; iy <= b; iy++) {
        b_x[iy - 1] /= b_x[b_tmp];
      }
    }

    n = 1 - j;
    iy = b_tmp + 3;
    c_st.site = &c_emlrtRSI;
    d_st.site = &e_emlrtRSI;
    e_st.site = &f_emlrtRSI;
    f_st.site = &g_emlrtRSI;
    jA = b_tmp + 5;
    for (jp1j = 0; jp1j <= n; jp1j++) {
      smax = b_x[iy];
      if (b_x[iy] != 0.0) {
        ix = b_tmp + 1;
        b = (jA - j) + 1;
        g_st.site = &h_emlrtRSI;
        overflow = ((jA <= b) && (b > 2147483646));
        if (overflow) {
          h_st.site = &d_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }

        for (ijA = jA; ijA <= b; ijA++) {
          b_x[ijA - 1] += b_x[ix] * -smax;
          ix++;
        }
      }

      iy += 3;
      jA += 3;
    }
  }

  overflow = false;
  if (ipiv[0] > 1) {
    overflow = true;
  }

  y = b_x[0] * b_x[4] * b_x[8];
  if (ipiv[1] > 2) {
    overflow = !overflow;
  }

  if (overflow) {
    y = -y;
  }

  return y;
}

/* End of code generation (det.c) */
