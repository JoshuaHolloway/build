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
#include "visionRecovertformCodeGeneration_kernel.h"
#include "mrdivide_helper.h"
#include "warning.h"
#include "xgeqp3.h"
#include "visionRecovertformCodeGeneration_kernel_mexutil.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo nl_emlrtRSI = { 35, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 40, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 33, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 29, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 123,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 124,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 73, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 80, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 90, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 34, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

/* Function Definitions */
void mrdivide_helper(const emlrtStack *sp, const real_T A[9], const real32_T
                     B_data[], const int32_T B_size[2], real32_T y_data[],
                     int32_T y_size[2])
{
  int32_T n;
  real32_T Y_data[9];
  int32_T A_size[2];
  real_T B[9];
  int32_T r1;
  int32_T r2;
  int32_T loop_ub;
  int32_T r3;
  real32_T tol;
  real32_T a21;
  real32_T A_data[9];
  real32_T tau_data[3];
  int32_T tau_size[1];
  int32_T jpvt_data[3];
  int32_T jpvt_size[2];
  int32_T rankR;
  const mxArray *y;
  const mxArray *m9;
  static const int32_T iv19[2] = { 1, 6 };

  int32_T Y_size_idx_0;
  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  char_T cv3[14];
  real32_T X_tmp;
  real32_T b_X_tmp;
  int32_T i;
  int32_T Y_data_tmp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (B_size[1] != 3) {
    emlrtErrorWithMessageIdR2018a(sp, &qi_emlrtRTEI, "Coder:MATLAB:dimagree",
      "Coder:MATLAB:dimagree", 0);
  }

  if (B_size[0] == 0) {
    y_size[0] = 3;
    y_size[1] = 0;
  } else if (B_size[0] == 3) {
    st.site = &hi_emlrtRSI;
    memcpy(&Y_data[0], &B_data[0], (uint32_T)(9 * (int32_T)sizeof(real32_T)));
    b_st.site = &ii_emlrtRSI;
    r1 = 0;
    r2 = 1;
    r3 = 2;
    tol = muSingleScalarAbs(B_data[0]);
    a21 = muSingleScalarAbs(B_data[1]);
    if (a21 > tol) {
      tol = a21;
      r1 = 1;
      r2 = 0;
    }

    if (muSingleScalarAbs(B_data[2]) > tol) {
      r1 = 2;
      r2 = 1;
      r3 = 0;
    }

    Y_data[r2] = B_data[r2] / B_data[r1];
    Y_data[r3] /= Y_data[r1];
    Y_data[r2 + 3] -= Y_data[r2] * Y_data[r1 + 3];
    Y_data[r3 + 3] -= Y_data[r3] * Y_data[r1 + 3];
    Y_data[r2 + 6] -= Y_data[r2] * Y_data[r1 + 6];
    Y_data[r3 + 6] -= Y_data[r3] * Y_data[r1 + 6];
    if (muSingleScalarAbs(Y_data[r3 + 3]) > muSingleScalarAbs(Y_data[r2 + 3])) {
      n = r2;
      r2 = r3;
      r3 = n;
    }

    Y_data[r3 + 3] /= Y_data[r2 + 3];
    Y_data[r3 + 6] -= Y_data[r3 + 3] * Y_data[r2 + 6];
    if ((Y_data[r1] == 0.0F) || (Y_data[r2 + 3] == 0.0F) || (Y_data[r3 + 6] ==
         0.0F)) {
      c_st.site = &ji_emlrtRSI;
      d_st.site = &ki_emlrtRSI;
      warning(&d_st);
    }

    A_data[3 * r1] = (real32_T)A[0] / Y_data[r1];
    tol = Y_data[r1 + 3];
    A_data[3 * r2] = (real32_T)A[3] - A_data[3 * r1] * tol;
    a21 = Y_data[r1 + 6];
    A_data[3 * r3] = (real32_T)A[6] - A_data[3 * r1] * a21;
    A_data[3 * r2] /= Y_data[r2 + 3];
    X_tmp = Y_data[r2 + 6];
    A_data[3 * r3] -= A_data[3 * r2] * X_tmp;
    A_data[3 * r3] /= Y_data[r3 + 6];
    b_X_tmp = Y_data[r3 + 3];
    A_data[3 * r2] -= A_data[3 * r3] * b_X_tmp;
    A_data[3 * r1] -= A_data[3 * r3] * Y_data[r3];
    A_data[3 * r1] -= A_data[3 * r2] * Y_data[r2];
    loop_ub = 1 + 3 * r1;
    A_data[loop_ub] = (real32_T)A[1] / Y_data[r1];
    n = 1 + 3 * r2;
    A_data[n] = (real32_T)A[4] - A_data[loop_ub] * tol;
    Y_data_tmp = 1 + 3 * r3;
    A_data[Y_data_tmp] = (real32_T)A[7] - A_data[loop_ub] * a21;
    A_data[n] /= Y_data[r2 + 3];
    A_data[Y_data_tmp] -= A_data[n] * X_tmp;
    A_data[Y_data_tmp] /= Y_data[r3 + 6];
    A_data[n] -= A_data[Y_data_tmp] * b_X_tmp;
    A_data[loop_ub] -= A_data[Y_data_tmp] * Y_data[r3];
    A_data[loop_ub] -= A_data[n] * Y_data[r2];
    loop_ub = 2 + 3 * r1;
    A_data[loop_ub] = (real32_T)A[2] / Y_data[r1];
    n = 2 + 3 * r2;
    A_data[n] = (real32_T)A[5] - A_data[loop_ub] * tol;
    Y_data_tmp = 2 + 3 * r3;
    A_data[Y_data_tmp] = (real32_T)A[8] - A_data[loop_ub] * a21;
    A_data[n] /= Y_data[r2 + 3];
    A_data[Y_data_tmp] -= A_data[n] * X_tmp;
    A_data[Y_data_tmp] /= Y_data[r3 + 6];
    A_data[n] -= A_data[Y_data_tmp] * b_X_tmp;
    A_data[loop_ub] -= A_data[Y_data_tmp] * Y_data[r3];
    A_data[loop_ub] -= A_data[n] * Y_data[r2];
    y_size[0] = 3;
    y_size[1] = 3;
    for (n = 0; n < 9; n++) {
      y_data[n] = A_data[n];
    }
  } else {
    st.site = &nl_emlrtRSI;
    for (n = 0; n < 3; n++) {
      B[3 * n] = A[n];
      B[1 + 3 * n] = A[n + 3];
      B[2 + 3 * n] = A[n + 6];
    }

    A_size[0] = 3;
    A_size[1] = B_size[0];
    loop_ub = B_size[0];
    for (n = 0; n < loop_ub; n++) {
      A_data[3 * n] = B_data[n];
      A_data[1 + 3 * n] = B_data[n + B_size[0]];
      A_data[2 + 3 * n] = B_data[n + (B_size[0] << 1)];
    }

    b_st.site = &ql_emlrtRSI;
    xgeqp3(&b_st, A_data, A_size, tau_data, tau_size, jpvt_data, jpvt_size);
    b_st.site = &pl_emlrtRSI;
    rankR = 0;
    tol = 0.0F;
    if (A_size[1] > 0) {
      tol = 3.57627869E-6F * muSingleScalarAbs(A_data[0]);
      while ((rankR < A_size[1]) && (!(muSingleScalarAbs(A_data[rankR + 3 *
                rankR]) <= tol))) {
        rankR++;
      }
    }

    if (rankR < A_size[1]) {
      c_st.site = &cm_emlrtRSI;
      y = NULL;
      m9 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(&c_st, 6, m9, &rfmt[0]);
      emlrtAssign(&y, m9);
      d_st.site = &pm_emlrtRSI;
      emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, d_emlrt_marshallOut(tol),
        &e_emlrtMCI), "sprintf", cv3);
      c_st.site = &bm_emlrtRSI;
      c_warning(&c_st, rankR, cv3);
    }

    b_st.site = &ol_emlrtRSI;
    Y_size_idx_0 = (int8_T)A_size[1];
    loop_ub = (int8_T)A_size[1] * 3;
    if (0 <= loop_ub - 1) {
      memset(&Y_data[0], 0, (uint32_T)(loop_ub * (int32_T)sizeof(real32_T)));
    }

    c_st.site = &dm_emlrtRSI;
    d_st.site = &gm_emlrtRSI;
    n = A_size[1];
    for (r2 = 0; r2 < n; r2++) {
      if (tau_data[r2] != 0.0F) {
        for (r3 = 0; r3 < 3; r3++) {
          loop_ub = r2 + 3 * r3;
          tol = (real32_T)B[loop_ub];
          for (i = r2 + 2; i < 4; i++) {
            tol += A_data[(i + 3 * r2) - 1] * (real32_T)B[(i + 3 * r3) - 1];
          }

          tol *= tau_data[r2];
          if (tol != 0.0F) {
            B[loop_ub] = (real32_T)B[loop_ub] - tol;
            for (i = r2 + 2; i < 4; i++) {
              loop_ub = (i + 3 * r3) - 1;
              B[loop_ub] = (real32_T)B[loop_ub] - A_data[(i + 3 * r2) - 1] * tol;
            }
          }
        }
      }
    }

    for (r3 = 0; r3 < 3; r3++) {
      c_st.site = &em_emlrtRSI;
      for (i = 0; i < rankR; i++) {
        Y_data[(jpvt_data[i] + Y_size_idx_0 * r3) - 1] = (real32_T)B[i + 3 * r3];
      }

      for (r2 = rankR; r2 >= 1; r2--) {
        loop_ub = (jpvt_data[r2 - 1] + Y_size_idx_0 * r3) - 1;
        Y_data_tmp = 3 * (r2 - 1);
        Y_data[loop_ub] /= A_data[(r2 + Y_data_tmp) - 1];
        c_st.site = &fm_emlrtRSI;
        for (i = 0; i <= r2 - 2; i++) {
          r1 = (jpvt_data[i] + Y_size_idx_0 * r3) - 1;
          Y_data[r1] -= Y_data[loop_ub] * A_data[i + Y_data_tmp];
        }
      }
    }

    y_size[0] = 3;
    y_size[1] = (int8_T)A_size[1];
    loop_ub = (int8_T)A_size[1];
    for (n = 0; n < loop_ub; n++) {
      y_data[3 * n] = Y_data[n];
      y_data[1 + 3 * n] = Y_data[n + Y_size_idx_0];
      y_data[2 + 3 * n] = Y_data[n + (Y_size_idx_0 << 1)];
    }
  }
}

/* End of code generation (mrdivide_helper.c) */
