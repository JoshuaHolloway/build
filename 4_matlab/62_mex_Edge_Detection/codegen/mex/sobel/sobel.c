/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sobel.c
 *
 * Code generation for function 'sobel'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sobel.h"
#include "sobel_emxutil.h"
#include "sqrt.h"
#include "conv2.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 10,    /* lineNo */
  "sobel",                             /* fcnName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 11,  /* lineNo */
  "sobel",                             /* fcnName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 12,  /* lineNo */
  "sobel",                             /* fcnName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 12,  /* lineNo */
  10,                                  /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 12,/* lineNo */
  17,                                  /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  12,                                  /* lineNo */
  10,                                  /* colNo */
  "sobel",                             /* fName */
  "C:\\dev\\build\\4_matlab\\62_mex_Edge_Detection\\sobel.m"/* pName */
};

/* Function Definitions */
void sobel(const emlrtStack *sp, const emxArray_real_T *originalImage, real_T
           threshold, emxArray_uint8_T *edgeImage)
{
  emxArray_real_T *H;
  emxArray_real_T *V;
  int32_T i0;
  int32_T loop_ub;
  int32_T b_H[2];
  int32_T b_V[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &H, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &V, 2, &f_emlrtRTEI, true);

  /*  edgeImage = sobel(originalImage, threshold) */
  /*  Sobel edge detection. Given a normalized image (with double values) */
  /*  return an image where the edges are detected w.r.t. threshold value. */
  st.site = &emlrtRSI;
  conv2(&st, originalImage, H);
  st.site = &b_emlrtRSI;
  b_conv2(&st, originalImage, V);
  i0 = H->size[0] * H->size[1];
  loop_ub = H->size[0] * H->size[1];
  emxEnsureCapacity_real_T(sp, H, loop_ub, &emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    H->data[i0] *= H->data[i0];
  }

  i0 = V->size[0] * V->size[1];
  loop_ub = V->size[0] * V->size[1];
  emxEnsureCapacity_real_T(sp, V, loop_ub, &b_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    V->data[i0] *= V->data[i0];
  }

  b_H[0] = H->size[0];
  b_H[1] = H->size[1];
  b_V[0] = V->size[0];
  b_V[1] = V->size[1];
  if ((b_H[0] != b_V[0]) || (b_H[1] != b_V[1])) {
    emlrtSizeEqCheckNDR2012b(&b_H[0], &b_V[0], &emlrtECI, sp);
  }

  i0 = H->size[0] * H->size[1];
  loop_ub = H->size[0] * H->size[1];
  emxEnsureCapacity_real_T(sp, H, loop_ub, &c_emlrtRTEI);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    H->data[i0] += V->data[i0];
  }

  emxFree_real_T(&V);
  st.site = &c_emlrtRSI;
  b_sqrt(&st, H);
  i0 = edgeImage->size[0] * edgeImage->size[1];
  edgeImage->size[0] = H->size[0];
  edgeImage->size[1] = H->size[1];
  emxEnsureCapacity_uint8_T(sp, edgeImage, i0, &d_emlrtRTEI);
  loop_ub = H->size[0] * H->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    edgeImage->data[i0] = (uint8_T)((H->data[i0] > threshold) * 255U);
  }

  emxFree_real_T(&H);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sobel.c) */
