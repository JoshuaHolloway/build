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
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "det.h"
#include "eml_int_forloop_overflow_check.h"
#include "xgetrf.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo hj_emlrtRSI = { 21, /* lineNo */
  "det",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 36, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 23, /* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\ixamax.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 24, /* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\ixamax.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 41, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 12,/* lineNo */
  15,                                  /* colNo */
  "det",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\det.m"/* pName */
};

/* Function Definitions */
real32_T b_det(const emlrtStack *sp, const real32_T x[9])
{
  real32_T y;
  int32_T iy;
  real32_T b_x[9];
  int8_T ipiv[3];
  int32_T j;
  int32_T b_tmp;
  int32_T jp1j;
  boolean_T isodd;
  int32_T n;
  int32_T ix;
  real32_T smax;
  int32_T jA;
  real32_T s;
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
  st.site = &hj_emlrtRSI;
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
  for (iy = 0; iy < 9; iy++) {
    b_x[iy] = x[iy];
  }

  b_st.site = &jj_emlrtRSI;
  ipiv[0] = 1;
  ipiv[1] = 2;
  for (j = 0; j < 2; j++) {
    b_tmp = j << 2;
    jp1j = b_tmp + 2;
    n = 3 - j;
    c_st.site = &qj_emlrtRSI;
    d_st.site = &xj_emlrtRSI;
    iy = 0;
    ix = b_tmp;
    smax = muSingleScalarAbs(b_x[b_tmp]);
    e_st.site = &yj_emlrtRSI;
    for (jA = 2; jA <= n; jA++) {
      ix++;
      s = muSingleScalarAbs(b_x[ix]);
      if (s > smax) {
        iy = jA - 1;
        smax = s;
      }
    }

    if (b_x[b_tmp + iy] != 0.0F) {
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
      c_st.site = &rj_emlrtRSI;
      for (iy = jp1j; iy <= b; iy++) {
        b_x[iy - 1] /= b_x[b_tmp];
      }
    }

    n = 1 - j;
    iy = b_tmp + 3;
    c_st.site = &sj_emlrtRSI;
    d_st.site = &ak_emlrtRSI;
    e_st.site = &bk_emlrtRSI;
    f_st.site = &ck_emlrtRSI;
    jA = b_tmp + 5;
    g_st.site = &ek_emlrtRSI;
    for (jp1j = 0; jp1j <= n; jp1j++) {
      smax = b_x[iy];
      if (b_x[iy] != 0.0F) {
        ix = b_tmp + 1;
        b = (jA - j) + 1;
        g_st.site = &dk_emlrtRSI;
        if ((jA <= b) && (b > 2147483646)) {
          h_st.site = &mb_emlrtRSI;
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

  isodd = false;
  if (ipiv[0] > 1) {
    isodd = true;
  }

  y = b_x[0] * b_x[4] * b_x[8];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }

  if (isodd) {
    y = -y;
  }

  return y;
}

real32_T det(const emlrtStack *sp, const real32_T x_data[], const int32_T
             x_size[2])
{
  real32_T y;
  int32_T b_x_size[2];
  int32_T loop_ub;
  real32_T b_x_data[12];
  int32_T ipiv_data[3];
  int32_T ipiv_size[2];
  int32_T k;
  boolean_T isodd;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (x_size[0] != x_size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &oi_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if ((x_size[0] == 0) || (x_size[1] == 0)) {
    y = 1.0F;
  } else {
    b_x_size[0] = x_size[0];
    b_x_size[1] = x_size[1];
    loop_ub = x_size[0] * x_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&b_x_data[0], &x_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real32_T)));
    }

    st.site = &hj_emlrtRSI;
    xgetrf(&st, x_size[0], x_size[1], b_x_data, b_x_size, x_size[0], ipiv_data,
           ipiv_size);
    y = b_x_data[0];
    loop_ub = b_x_size[0];
    for (k = 0; k <= loop_ub - 2; k++) {
      y *= b_x_data[(k + b_x_size[0] * (k + 1)) + 1];
    }

    isodd = false;
    loop_ub = ipiv_size[1];
    for (k = 0; k <= loop_ub - 2; k++) {
      if (ipiv_data[k] > 1 + k) {
        isodd = !isodd;
      }
    }

    if (isodd) {
      y = -y;
    }
  }

  return y;
}

/* End of code generation (det.c) */
