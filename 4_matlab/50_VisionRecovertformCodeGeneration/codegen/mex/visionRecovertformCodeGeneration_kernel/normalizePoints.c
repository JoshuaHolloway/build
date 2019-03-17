/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normalizePoints.c
 *
 * Code generation for function 'normalizePoints'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "normalizePoints.h"
#include "eml_int_forloop_overflow_check.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "sqrt.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo vg_emlrtRSI = { 25, /* lineNo */
  "normalizePoints",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\normalizePoints.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 19, /* lineNo */
  "normalizePoints",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\normalizePoints.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 38, /* lineNo */
  "mean",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 22,/* lineNo */
  20,                                  /* colNo */
  "normalizePoints",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\normalizePoints.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "normalizePoints",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\normalizePoints.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 25,/* lineNo */
  36,                                  /* colNo */
  "normalizePoints",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\normalizePoints.m"/* pName */
};

/* Function Definitions */
void b_normalizePoints(const emlrtStack *sp, const emxArray_real32_T *p,
  emxArray_real32_T *normPoints, real32_T T[9])
{
  int32_T i17;
  boolean_T guard1 = false;
  real32_T cent_idx_0;
  real32_T cent_idx_1;
  int32_T firstBlockLength;
  int32_T lastBlockLength;
  int32_T nblocks;
  int32_T k;
  int32_T xoffset;
  emxArray_real32_T *z1;
  int32_T acoef;
  real32_T bsum_idx_0;
  real32_T bsum_idx_1;
  int32_T hi;
  emxArray_real32_T *x;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &wg_emlrtRSI;
  b_st.site = &xg_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  i17 = p->size[1];
  guard1 = false;
  if (i17 == 0) {
    guard1 = true;
  } else {
    i17 = p->size[1];
    if (i17 == 0) {
      guard1 = true;
    } else {
      d_st.site = &xc_emlrtRSI;
      i17 = p->size[1];
      if (i17 <= 1024) {
        firstBlockLength = p->size[1];
        lastBlockLength = 0;
        nblocks = 1;
      } else {
        firstBlockLength = 1024;
        i17 = p->size[1];
        nblocks = i17 / 1024;
        i17 = p->size[1];
        lastBlockLength = i17 - (nblocks << 10);
        if (lastBlockLength > 0) {
          nblocks++;
        } else {
          lastBlockLength = 1024;
        }
      }

      cent_idx_0 = p->data[0];
      cent_idx_1 = p->data[1];
      e_st.site = &ad_emlrtRSI;
      if ((2 <= firstBlockLength) && (firstBlockLength > 2147483646)) {
        f_st.site = &mb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (k = 2; k <= firstBlockLength; k++) {
        xoffset = (k - 1) << 1;
        cent_idx_0 += p->data[xoffset % 2 + ((xoffset / 2) << 1)];
        i17 = xoffset + 1;
        cent_idx_1 += p->data[i17 % 2 + ((i17 / 2) << 1)];
      }

      e_st.site = &yc_emlrtRSI;
      for (acoef = 2; acoef <= nblocks; acoef++) {
        firstBlockLength = (acoef - 1) << 11;
        bsum_idx_0 = p->data[firstBlockLength % 2 + ((firstBlockLength / 2) << 1)];
        i17 = firstBlockLength + 1;
        bsum_idx_1 = p->data[i17 % 2 + ((i17 / 2) << 1)];
        if (acoef == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }

        e_st.site = &yg_emlrtRSI;
        if ((2 <= hi) && (hi > 2147483646)) {
          f_st.site = &mb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (k = 2; k <= hi; k++) {
          xoffset = firstBlockLength + ((k - 1) << 1);
          bsum_idx_0 += p->data[xoffset % 2 + ((xoffset / 2) << 1)];
          i17 = xoffset + 1;
          bsum_idx_1 += p->data[i17 % 2 + ((i17 / 2) << 1)];
        }

        cent_idx_0 += bsum_idx_0;
        cent_idx_1 += bsum_idx_1;
      }
    }
  }

  if (guard1) {
    cent_idx_0 = 0.0F;
    cent_idx_1 = 0.0F;
  }

  i17 = p->size[1];
  cent_idx_0 /= (real32_T)i17;
  cent_idx_1 /= (real32_T)i17;
  i17 = p->size[1];
  firstBlockLength = normPoints->size[0] * normPoints->size[1];
  normPoints->size[0] = 2;
  normPoints->size[1] = i17;
  emxEnsureCapacity_real32_T(sp, normPoints, firstBlockLength, &kf_emlrtRTEI);
  if (normPoints->size[1] != 0) {
    i17 = p->size[1];
    acoef = (i17 != 1);
    i17 = normPoints->size[1] - 1;
    for (k = 0; k <= i17; k++) {
      xoffset = acoef * k;
      firstBlockLength = k << 1;
      normPoints->data[firstBlockLength] = p->data[xoffset << 1] - cent_idx_0;
      normPoints->data[1 + firstBlockLength] = p->data[1 + (xoffset << 1)] -
        cent_idx_1;
    }
  }

  emxInit_real32_T(sp, &z1, 2, &of_emlrtRTEI, true);
  st.site = &vg_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  i17 = z1->size[0] * z1->size[1];
  z1->size[0] = 2;
  z1->size[1] = normPoints->size[1];
  emxEnsureCapacity_real32_T(&c_st, z1, i17, &lf_emlrtRTEI);
  d_st.site = &sc_emlrtRSI;
  firstBlockLength = normPoints->size[1] << 1;
  e_st.site = &tc_emlrtRSI;
  if ((1 <= firstBlockLength) && (firstBlockLength > 2147483646)) {
    f_st.site = &mb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (k = 0; k < firstBlockLength; k++) {
    z1->data[k] = normPoints->data[k] * normPoints->data[k];
  }

  st.site = &vg_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  c_st.site = &vc_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  emxInit_real32_T(&d_st, &x, 2, &pf_emlrtRTEI, true);
  if (z1->size[1] == 0) {
    x->size[0] = 1;
    x->size[1] = 0;
  } else {
    e_st.site = &xc_emlrtRSI;
    xoffset = z1->size[1];
    i17 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = z1->size[1];
    emxEnsureCapacity_real32_T(&e_st, x, i17, &mf_emlrtRTEI);
    f_st.site = &bd_emlrtRSI;
    overflow = (z1->size[1] > 2147483646);
    if (overflow) {
      g_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (firstBlockLength = 0; firstBlockLength < xoffset; firstBlockLength++) {
      acoef = firstBlockLength << 1;
      x->data[firstBlockLength] = z1->data[acoef];
      x->data[firstBlockLength] += z1->data[acoef + 1];
    }
  }

  emxFree_real32_T(&z1);
  st.site = &vg_emlrtRSI;
  b_sqrt(&st, x);
  st.site = &vg_emlrtRSI;
  b_st.site = &xg_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if (x->size[1] == 0) {
    bsum_idx_0 = 0.0F;
  } else {
    d_st.site = &xc_emlrtRSI;
    if (x->size[1] <= 1024) {
      firstBlockLength = x->size[1];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[1] / 1024;
      lastBlockLength = x->size[1] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }

    bsum_idx_0 = x->data[0];
    e_st.site = &ad_emlrtRSI;
    for (k = 2; k <= firstBlockLength; k++) {
      bsum_idx_0 += x->data[k - 1];
    }

    e_st.site = &yc_emlrtRSI;
    for (acoef = 2; acoef <= nblocks; acoef++) {
      firstBlockLength = (acoef - 1) << 10;
      bsum_idx_1 = x->data[firstBlockLength];
      if (acoef == nblocks) {
        hi = lastBlockLength;
      } else {
        hi = 1024;
      }

      e_st.site = &yg_emlrtRSI;
      if ((2 <= hi) && (hi > 2147483646)) {
        f_st.site = &mb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (k = 2; k <= hi; k++) {
        bsum_idx_1 += x->data[(firstBlockLength + k) - 1];
      }

      bsum_idx_0 += bsum_idx_1;
    }
  }

  bsum_idx_0 /= (real32_T)x->size[1];
  emxFree_real32_T(&x);
  if (bsum_idx_0 > 0.0F) {
    bsum_idx_0 = 1.41421354F / bsum_idx_0;
  } else {
    bsum_idx_0 = 1.0F;
  }

  for (i17 = 0; i17 < 9; i17++) {
    T[i17] = 0.0F;
  }

  T[0] = bsum_idx_0;
  T[4] = bsum_idx_0;
  T[8] = bsum_idx_0;
  T[6] = -bsum_idx_0 * cent_idx_0;
  T[7] = -bsum_idx_0 * cent_idx_1;
  T[8] = 1.0F;
  i17 = normPoints->size[0] * normPoints->size[1];
  firstBlockLength = normPoints->size[0] * normPoints->size[1];
  normPoints->size[0] = 2;
  emxEnsureCapacity_real32_T(sp, normPoints, firstBlockLength, &nf_emlrtRTEI);
  firstBlockLength = i17 - 1;
  for (i17 = 0; i17 <= firstBlockLength; i17++) {
    normPoints->data[i17] *= bsum_idx_0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (normalizePoints.c) */
