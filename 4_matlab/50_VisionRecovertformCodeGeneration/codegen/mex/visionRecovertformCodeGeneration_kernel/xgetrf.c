/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "xgetrf.h"
#include "error.h"
#include "visionRecovertformCodeGeneration_kernel_mexutil.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo ij_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 90, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 82, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 78, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 57, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 50, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

/* Function Definitions */
void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real32_T A_data[],
            int32_T A_size[2], int32_T lda, int32_T ipiv_data[], int32_T
            ipiv_size[2])
{
  int32_T i31;
  int32_T varargin_1;
  const mxArray *y;
  const mxArray *m33;
  static const int32_T iv35[2] = { 1, 15 };

  ptrdiff_t info_t;
  ptrdiff_t ipiv_t_data[3];
  int32_T info;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ij_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &pj_emlrtRSI;
  if ((A_size[0] == 0) || (A_size[1] == 0)) {
    ipiv_size[0] = 1;
    ipiv_size[1] = 0;
  } else {
    b_st.site = &oj_emlrtRSI;
    c_st.site = &uh_emlrtRSI;
    i31 = muIntScalarMin_sint32(m, n);
    varargin_1 = muIntScalarMax_sint32(i31, 1);
    b_st.site = &oj_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    if ((int8_T)varargin_1 != varargin_1) {
      y = NULL;
      m33 = emlrtCreateCharArray(2, iv35);
      emlrtInitCharArrayR2013a(&b_st, 15, m33, &cv0[0]);
      emlrtAssign(&y, m33);
      c_st.site = &nm_emlrtRSI;
      i_error(&c_st, y, &b_emlrtMCI);
    }

    b_st.site = &nj_emlrtRSI;
    c_st.site = &uh_emlrtRSI;
    b_st.site = &mj_emlrtRSI;
    c_st.site = &uh_emlrtRSI;
    b_st.site = &lj_emlrtRSI;
    c_st.site = &vh_emlrtRSI;
    info_t = LAPACKE_sgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A_data[0],
      (ptrdiff_t)lda, &ipiv_t_data[0]);
    info = (int32_T)info_t;
    ipiv_size[0] = 1;
    ipiv_size[1] = (int8_T)varargin_1;
    b_st.site = &kj_emlrtRSI;
    c_st.site = &wh_emlrtRSI;
    if (info < 0) {
      if (info == -1010) {
        c_st.site = &xh_emlrtRSI;
        b_error(&c_st);
      } else {
        c_st.site = &yh_emlrtRSI;
        g_error(&c_st, info);
      }
    }

    varargin_1 = (int8_T)varargin_1 - 1;
    for (info = 0; info <= varargin_1; info++) {
      ipiv_data[info] = (int32_T)ipiv_t_data[info];
    }
  }
}

/* End of code generation (xgetrf.c) */
