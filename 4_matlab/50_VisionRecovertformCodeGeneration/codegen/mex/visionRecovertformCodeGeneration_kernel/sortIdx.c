/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "sortIdx.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo ne_emlrtRSI = { 105,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 308,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 316,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 317,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 325,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 333,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 392,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 420,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 427,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 587,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 589,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 617,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 499,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 507,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 514,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 561,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 530,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 388,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 308,/* lineNo */
  14,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 308,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

/* Function Declarations */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real32_T
                  *x, int32_T offset, int32_T np, int32_T nq, emxArray_int32_T
                  *iwork, emxArray_real32_T *xwork);
static void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
  emxArray_real32_T *x, int32_T offset, int32_T n, int32_T preSortLevel,
  emxArray_int32_T *iwork, emxArray_real32_T *xwork);

/* Function Definitions */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx, emxArray_real32_T
                  *x, int32_T offset, int32_T np, int32_T nq, emxArray_int32_T
                  *iwork, emxArray_real32_T *xwork)
{
  int32_T n_tmp;
  int32_T iout;
  int32_T p;
  int32_T i30;
  int32_T q;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    n_tmp = np + nq;
    st.site = &ff_emlrtRSI;
    if ((1 <= n_tmp) && (n_tmp > 2147483646)) {
      b_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (iout = 0; iout < n_tmp; iout++) {
      i30 = offset + iout;
      iwork->data[iout] = idx->data[i30];
      xwork->data[iout] = x->data[i30];
    }

    p = 0;
    q = np;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork->data[p] <= xwork->data[q]) {
        idx->data[iout] = iwork->data[p];
        x->data[iout] = xwork->data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx->data[iout] = iwork->data[q];
        x->data[iout] = xwork->data[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &ef_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &mb_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }

          for (iout = p + 1; iout <= np; iout++) {
            i30 = q + iout;
            idx->data[i30] = iwork->data[iout - 1];
            x->data[i30] = xwork->data[iout - 1];
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
  emxArray_real32_T *x, int32_T offset, int32_T n, int32_T preSortLevel,
  emxArray_int32_T *iwork, emxArray_real32_T *xwork)
{
  int32_T nPairs;
  int32_T bLen;
  int32_T tailOffset;
  int32_T nTail;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &af_emlrtRSI;
        merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork, xwork);
      }
    }

    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &cf_emlrtRSI;
      merge(&st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }

    bLen = tailOffset;
  }

  if (n > bLen) {
    st.site = &df_emlrtRSI;
    merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

void sortIdx(const emlrtStack *sp, emxArray_real32_T *x, emxArray_int32_T *idx)
{
  int32_T i1;
  int32_T i29;
  int32_T n;
  int32_T b_n;
  real32_T x4[4];
  int32_T idx4[4];
  emxArray_int32_T *iwork;
  emxArray_real32_T *xwork;
  int32_T nNaNs;
  int32_T ib;
  boolean_T overflow;
  int32_T k;
  int8_T perm[4];
  int32_T quartetOffset;
  int32_T i3;
  int32_T i4;
  int32_T nNonNaN;
  real32_T f0;
  int32_T nBlocks;
  real32_T f1;
  int32_T bLen2;
  int32_T nPairs;
  int32_T b_iwork[256];
  real32_T b_xwork[256];
  int32_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i1 = x->size[0];
  i29 = idx->size[0];
  idx->size[0] = i1;
  emxEnsureCapacity_int32_T(sp, idx, i29, &eh_emlrtRTEI);
  for (i29 = 0; i29 < i1; i29++) {
    idx->data[i29] = 0;
  }

  if (x->size[0] != 0) {
    st.site = &ne_emlrtRSI;
    n = x->size[0];
    b_st.site = &oe_emlrtRSI;
    b_n = x->size[0];
    x4[0] = 0.0F;
    idx4[0] = 0;
    x4[1] = 0.0F;
    idx4[1] = 0;
    x4[2] = 0.0F;
    idx4[2] = 0;
    x4[3] = 0.0F;
    idx4[3] = 0;
    emxInit_int32_T(&b_st, &iwork, 1, &hh_emlrtRTEI, true);
    i29 = iwork->size[0];
    iwork->size[0] = i1;
    emxEnsureCapacity_int32_T(&b_st, iwork, i29, &fh_emlrtRTEI);
    for (i29 = 0; i29 < i1; i29++) {
      iwork->data[i29] = 0;
    }

    emxInit_real32_T(&b_st, &xwork, 1, &ih_emlrtRTEI, true);
    i1 = x->size[0];
    i29 = xwork->size[0];
    xwork->size[0] = i1;
    emxEnsureCapacity_real32_T(&b_st, xwork, i29, &gh_emlrtRTEI);
    for (i29 = 0; i29 < i1; i29++) {
      xwork->data[i29] = 0.0F;
    }

    nNaNs = 0;
    ib = -1;
    c_st.site = &te_emlrtRSI;
    overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
    if (overflow) {
      d_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 0; k < b_n; k++) {
      if (muSingleScalarIsNaN(x->data[k])) {
        i29 = (b_n - nNaNs) - 1;
        idx->data[i29] = k + 1;
        xwork->data[i29] = x->data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib] = k + 1;
        x4[ib] = x->data[k];
        if (ib + 1 == 4) {
          quartetOffset = k - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            ib = 2;
          } else {
            i1 = 2;
            ib = 1;
          }

          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }

          f0 = x4[i1 - 1];
          f1 = x4[i3 - 1];
          if (f0 <= f1) {
            if (x4[ib - 1] <= f1) {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)ib;
              perm[2] = (int8_T)i3;
              perm[3] = (int8_T)i4;
            } else if (x4[ib - 1] <= x4[i4 - 1]) {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)i3;
              perm[2] = (int8_T)ib;
              perm[3] = (int8_T)i4;
            } else {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)i3;
              perm[2] = (int8_T)i4;
              perm[3] = (int8_T)ib;
            }
          } else {
            f1 = x4[i4 - 1];
            if (f0 <= f1) {
              if (x4[ib - 1] <= f1) {
                perm[0] = (int8_T)i3;
                perm[1] = (int8_T)i1;
                perm[2] = (int8_T)ib;
                perm[3] = (int8_T)i4;
              } else {
                perm[0] = (int8_T)i3;
                perm[1] = (int8_T)i1;
                perm[2] = (int8_T)i4;
                perm[3] = (int8_T)ib;
              }
            } else {
              perm[0] = (int8_T)i3;
              perm[1] = (int8_T)i4;
              perm[2] = (int8_T)i1;
              perm[3] = (int8_T)ib;
            }
          }

          i29 = perm[0] - 1;
          idx->data[quartetOffset - 3] = idx4[i29];
          i4 = perm[1] - 1;
          idx->data[quartetOffset - 2] = idx4[i4];
          i1 = perm[2] - 1;
          idx->data[quartetOffset - 1] = idx4[i1];
          ib = perm[3] - 1;
          idx->data[quartetOffset] = idx4[ib];
          x->data[quartetOffset - 3] = x4[i29];
          x->data[quartetOffset - 2] = x4[i4];
          x->data[quartetOffset - 1] = x4[i1];
          x->data[quartetOffset] = x4[ib];
          ib = -1;
        }
      }
    }

    i29 = (b_n - nNaNs) - 1;
    if (ib + 1 > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib + 1 == 1) {
        perm[0] = 1;
      } else if (ib + 1 == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }

      c_st.site = &ue_emlrtRSI;
      if (ib + 1 > 2147483646) {
        d_st.site = &mb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (k = 0; k <= ib; k++) {
        i4 = perm[k] - 1;
        i1 = (i29 - ib) + k;
        idx->data[i1] = idx4[i4];
        x->data[i1] = x4[i4];
      }
    }

    ib = (nNaNs >> 1) + 1;
    c_st.site = &ve_emlrtRSI;
    for (k = 0; k <= ib - 2; k++) {
      i1 = (i29 + k) + 1;
      i3 = idx->data[i1];
      i4 = (b_n - k) - 1;
      idx->data[i1] = idx->data[i4];
      idx->data[i4] = i3;
      x->data[i1] = xwork->data[i4];
      x->data[i4] = xwork->data[i1];
    }

    if ((nNaNs & 1) != 0) {
      i29 += ib;
      x->data[i29] = xwork->data[i29];
    }

    nNonNaN = n - nNaNs;
    i1 = 2;
    if (nNonNaN > 1) {
      if (n >= 256) {
        nBlocks = nNonNaN >> 8;
        if (nBlocks > 0) {
          b_st.site = &pe_emlrtRSI;
          for (quartetOffset = 0; quartetOffset < nBlocks; quartetOffset++) {
            b_st.site = &qe_emlrtRSI;
            nNaNs = quartetOffset << 8;
            for (b_n = 0; b_n < 6; b_n++) {
              n = 1 << (b_n + 2);
              bLen2 = n << 1;
              nPairs = 256 >> (b_n + 3);
              c_st.site = &we_emlrtRSI;
              for (k = 0; k < nPairs; k++) {
                i3 = nNaNs + k * bLen2;
                c_st.site = &xe_emlrtRSI;
                for (i1 = 0; i1 < bLen2; i1++) {
                  ib = i3 + i1;
                  b_iwork[i1] = idx->data[ib];
                  b_xwork[i1] = x->data[ib];
                }

                i4 = 0;
                i1 = n;
                ib = i3 - 1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i4] <= b_xwork[i1]) {
                    idx->data[ib] = b_iwork[i4];
                    x->data[ib] = b_xwork[i4];
                    if (i4 + 1 < n) {
                      i4++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx->data[ib] = b_iwork[i1];
                    x->data[ib] = b_xwork[i1];
                    if (i1 + 1 < bLen2) {
                      i1++;
                    } else {
                      ib -= i4;
                      c_st.site = &ye_emlrtRSI;
                      for (i1 = i4 + 1; i1 <= n; i1++) {
                        i29 = ib + i1;
                        idx->data[i29] = b_iwork[i1 - 1];
                        x->data[i29] = b_xwork[i1 - 1];
                      }

                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }

          i1 = nBlocks << 8;
          ib = nNonNaN - i1;
          if (ib > 0) {
            b_st.site = &re_emlrtRSI;
            merge_block(&b_st, idx, x, i1, ib, 2, iwork, xwork);
          }

          i1 = 8;
        }
      }

      b_st.site = &se_emlrtRSI;
      merge_block(&b_st, idx, x, 0, nNonNaN, i1, iwork, xwork);
    }

    emxFree_real32_T(&xwork);
    emxFree_int32_T(&iwork);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sortIdx.c) */
