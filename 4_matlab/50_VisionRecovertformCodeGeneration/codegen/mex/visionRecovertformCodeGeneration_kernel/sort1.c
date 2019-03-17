/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "sort1.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "sortIdx.h"
#include "eml_int_forloop_overflow_check.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo je_emlrtRSI = { 81, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 84, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 87, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 90, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 56,/* lineNo */
  1,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

/* Function Definitions */
void sort(const emlrtStack *sp, emxArray_real32_T *x, emxArray_int32_T *idx)
{
  emxArray_real32_T *vwork;
  int32_T vlen;
  int32_T vstride;
  int32_T i28;
  int32_T x_idx_1;
  boolean_T overflow;
  emxArray_int32_T *iidx;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T(sp, &vwork, 1, &dh_emlrtRTEI, true);
  vlen = x->size[1];
  vstride = x->size[1];
  i28 = vwork->size[0];
  vwork->size[0] = vstride;
  emxEnsureCapacity_real32_T(sp, vwork, i28, &ae_emlrtRTEI);
  vstride = x->size[0];
  x_idx_1 = x->size[1];
  i28 = idx->size[0] * idx->size[1];
  idx->size[0] = vstride;
  idx->size[1] = x_idx_1;
  emxEnsureCapacity_int32_T(sp, idx, i28, &ae_emlrtRTEI);
  vstride = x->size[0];
  st.site = &je_emlrtRSI;
  overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
  if (overflow) {
    b_st.site = &mb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  emxInit_int32_T(sp, &iidx, 1, &ae_emlrtRTEI, true);
  for (x_idx_1 = 0; x_idx_1 < vstride; x_idx_1++) {
    st.site = &ke_emlrtRSI;
    if ((1 <= vlen) && (vlen > 2147483646)) {
      b_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k < vlen; k++) {
      vwork->data[k] = x->data[x_idx_1 + k * vstride];
    }

    st.site = &le_emlrtRSI;
    sortIdx(&st, vwork, iidx);
    st.site = &me_emlrtRSI;
    for (k = 0; k < vlen; k++) {
      i28 = x_idx_1 + k * vstride;
      x->data[i28] = vwork->data[k];
      idx->data[i28] = iidx->data[k];
    }
  }

  emxFree_int32_T(&iidx);
  emxFree_real32_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sort1.c) */
