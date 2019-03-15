/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * extractFeatures.c
 *
 * Code generation for function 'extractFeatures'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "extractFeatures.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "SURFPointsImpl.h"
#include "all1.h"
#include "all.h"
#include "FeaturePointsImpl.h"
#include "validatesize.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"
#include "extractSurfCore_api.hpp"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = { 173,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 179,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 212,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 243,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 18, /* lineNo */
  "checkPoints",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 42, /* lineNo */
  "checkPoints",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 672,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 688,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 713,/* lineNo */
  "extractFeatures",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 214,/* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

static emlrtRTEInfo r_emlrtRTEI = { 672,/* lineNo */
  1,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 449,/* lineNo */
  17,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 450,/* lineNo */
  14,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 451,/* lineNo */
  15,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 452,/* lineNo */
  24,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 682,/* lineNo */
  9,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 690,/* lineNo */
  9,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 688,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 688,/* lineNo */
  76,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 702,/* lineNo */
  1,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 678,/* lineNo */
  6,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 1,/* lineNo */
  37,                                  /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 444,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 445,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 446,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 447,/* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  449,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  449,                                 /* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  450,                                 /* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  451,                                 /* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  452,                                 /* lineNo */
  5,                                   /* colNo */
  "extractFeatures",                   /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\extractFeatures.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 90,  /* lineNo */
  48,                                  /* colNo */
  "extractSurfBuildable",              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\extractSurfBuildable.m",/* pName */
  4                                    /* checkKind */
};

/* Function Definitions */
void extractFeatures(const emlrtStack *sp, const emxArray_uint8_T *b_I, const
                     emxArray_real32_T *points_pLocation, const
                     emxArray_real32_T *points_pMetric, const emxArray_real32_T *
                     points_pScale, const emxArray_int8_T
                     *points_pSignOfLaplacian, emxArray_real32_T *features,
                     vision_internal_SURFPoints_cg *valid_points)
{
  emxArray_real32_T *valLocation;
  emxArray_real32_T *valScale;
  emxArray_real32_T *valMetric;
  emxArray_int8_T *valSignOfLaplacian;
  int32_T i4;
  int32_T out_numel;
  emxArray_int32_T *r0;
  int32_T iv4[2];
  int32_T iv5[1];
  emxArray_uint8_T *Iu8T;
  emxArray_real32_T *inLocation;
  int32_T loop_ub;
  int32_T i5;
  emxArray_real32_T *outOrientation;
  emxArray_real32_T *b_features;
  void * ptrKeypoints;
  void * ptrDescriptors;
  emxArray_real32_T *inputs_Location;
  boolean_T p;
  boolean_T exitg1;
  emxArray_boolean_T *b_valSignOfLaplacian;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &wb_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  e_st.site = &p_emlrtRSI;
  f_st.site = &q_emlrtRSI;
  if ((b_I->size[0] == 0) || (b_I->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &sh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonempty",
      "MATLAB:validateImage:expectedNonempty", 3, 4, 1, "I");
  }

  b_st.site = &ac_emlrtRSI;
  c_st.site = &bc_emlrtRSI;
  d_st.site = &cc_emlrtRSI;
  e_st.site = &dc_emlrtRSI;
  f_st.site = &q_emlrtRSI;
  if (!size_check(points_pLocation)) {
    emlrtErrorWithMessageIdR2018a(&f_st, &vh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesincorrectSize",
      "MATLAB:extractFeatures:incorrectSize", 3, 4, 6, "POINTS");
  }

  emxInit_real32_T(&f_st, &valLocation, 2, &eb_emlrtRTEI, true);
  emxInit_real32_T(&f_st, &valScale, 1, &fb_emlrtRTEI, true);
  emxInit_real32_T(&f_st, &valMetric, 1, &gb_emlrtRTEI, true);
  emxInit_int8_T(&f_st, &valSignOfLaplacian, 1, &hb_emlrtRTEI, true);
  st.site = &xb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  i4 = valLocation->size[0] * valLocation->size[1];
  valLocation->size[0] = points_pLocation->size[0];
  valLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(&b_st, valLocation, i4, &r_emlrtRTEI);
  i4 = valScale->size[0];
  valScale->size[0] = points_pLocation->size[0];
  emxEnsureCapacity_real32_T(&b_st, valScale, i4, &r_emlrtRTEI);
  i4 = valMetric->size[0];
  valMetric->size[0] = points_pLocation->size[0];
  emxEnsureCapacity_real32_T(&b_st, valMetric, i4, &r_emlrtRTEI);
  i4 = valSignOfLaplacian->size[0];
  valSignOfLaplacian->size[0] = points_pLocation->size[0];
  emxEnsureCapacity_int8_T(&b_st, valSignOfLaplacian, i4, &r_emlrtRTEI);
  if (1 > points_pLocation->size[0]) {
    out_numel = 0;
  } else {
    i4 = points_pLocation->size[0];
    out_numel = points_pLocation->size[0];
    if ((out_numel < 1) || (out_numel > i4)) {
      emlrtDynamicBoundsCheckR2012b(out_numel, 1, i4, &f_emlrtBCI, &b_st);
    }
  }

  emxInit_int32_T(&b_st, &r0, 1, &db_emlrtRTEI, true);
  i4 = r0->size[0];
  r0->size[0] = out_numel;
  emxEnsureCapacity_int32_T(&b_st, r0, i4, &s_emlrtRTEI);
  for (i4 = 0; i4 < out_numel; i4++) {
    r0->data[i4] = i4;
  }

  iv4[0] = r0->size[0];
  iv4[1] = 2;
  emlrtSubAssignSizeCheckR2012b(&iv4[0], 2, &(*(int32_T (*)[2])
    points_pLocation->size)[0], 2, &b_emlrtECI, &b_st);
  out_numel = points_pLocation->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    valLocation->data[r0->data[i4]] = points_pLocation->data[i4];
  }

  out_numel = points_pLocation->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    valLocation->data[r0->data[i4] + valLocation->size[0]] =
      points_pLocation->data[i4 + points_pLocation->size[0]];
  }

  if (1 > points_pLocation->size[0]) {
    out_numel = 0;
  } else {
    i4 = valScale->size[0];
    if (1 > i4) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &g_emlrtBCI, &b_st);
    }

    i4 = valScale->size[0];
    out_numel = points_pLocation->size[0];
    if ((out_numel < 1) || (out_numel > i4)) {
      emlrtDynamicBoundsCheckR2012b(out_numel, 1, i4, &h_emlrtBCI, &b_st);
    }
  }

  i4 = r0->size[0];
  r0->size[0] = out_numel;
  emxEnsureCapacity_int32_T(&b_st, r0, i4, &t_emlrtRTEI);
  for (i4 = 0; i4 < out_numel; i4++) {
    r0->data[i4] = i4;
  }

  iv5[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv5[0], 1, &(*(int32_T (*)[1])
    points_pScale->size)[0], 1, &c_emlrtECI, &b_st);
  out_numel = points_pScale->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    valScale->data[r0->data[i4]] = points_pScale->data[i4];
  }

  if (1 > points_pLocation->size[0]) {
    out_numel = 0;
  } else {
    i4 = valMetric->size[0];
    if (1 > i4) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &i_emlrtBCI, &b_st);
    }

    i4 = valMetric->size[0];
    out_numel = points_pLocation->size[0];
    if ((out_numel < 1) || (out_numel > i4)) {
      emlrtDynamicBoundsCheckR2012b(out_numel, 1, i4, &j_emlrtBCI, &b_st);
    }
  }

  i4 = r0->size[0];
  r0->size[0] = out_numel;
  emxEnsureCapacity_int32_T(&b_st, r0, i4, &u_emlrtRTEI);
  for (i4 = 0; i4 < out_numel; i4++) {
    r0->data[i4] = i4;
  }

  iv5[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv5[0], 1, &(*(int32_T (*)[1])
    points_pMetric->size)[0], 1, &d_emlrtECI, &b_st);
  out_numel = points_pMetric->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    valMetric->data[r0->data[i4]] = points_pMetric->data[i4];
  }

  if (1 > points_pLocation->size[0]) {
    out_numel = 0;
  } else {
    i4 = valSignOfLaplacian->size[0];
    if (1 > i4) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &k_emlrtBCI, &b_st);
    }

    i4 = valSignOfLaplacian->size[0];
    out_numel = points_pLocation->size[0];
    if ((out_numel < 1) || (out_numel > i4)) {
      emlrtDynamicBoundsCheckR2012b(out_numel, 1, i4, &l_emlrtBCI, &b_st);
    }
  }

  i4 = r0->size[0];
  r0->size[0] = out_numel;
  emxEnsureCapacity_int32_T(&b_st, r0, i4, &v_emlrtRTEI);
  for (i4 = 0; i4 < out_numel; i4++) {
    r0->data[i4] = i4;
  }

  iv5[0] = r0->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv5[0], 1, &(*(int32_T (*)[1])
    points_pSignOfLaplacian->size)[0], 1, &e_emlrtECI, &b_st);
  out_numel = points_pSignOfLaplacian->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    valSignOfLaplacian->data[r0->data[i4]] = points_pSignOfLaplacian->data[i4];
  }

  emxFree_int32_T(&r0);
  emxInit_uint8_T(&b_st, &Iu8T, 2, &w_emlrtRTEI, true);
  i4 = Iu8T->size[0] * Iu8T->size[1];
  Iu8T->size[0] = b_I->size[1];
  Iu8T->size[1] = b_I->size[0];
  emxEnsureCapacity_uint8_T(&st, Iu8T, i4, &w_emlrtRTEI);
  out_numel = b_I->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    loop_ub = b_I->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      Iu8T->data[i5 + Iu8T->size[0] * i4] = b_I->data[i4 + b_I->size[0] * i5];
    }
  }

  emxInit_real32_T(&st, &inLocation, 2, &x_emlrtRTEI, true);
  b_st.site = &fc_emlrtRSI;
  i4 = inLocation->size[0] * inLocation->size[1];
  inLocation->size[0] = valLocation->size[0];
  inLocation->size[1] = valLocation->size[1];
  emxEnsureCapacity_real32_T(&b_st, inLocation, i4, &x_emlrtRTEI);
  out_numel = valLocation->size[0] * valLocation->size[1];
  for (i4 = 0; i4 < out_numel; i4++) {
    inLocation->data[i4] = valLocation->data[i4];
  }

  emxInit_real32_T(&b_st, &outOrientation, 1, &cb_emlrtRTEI, true);
  emxInit_real32_T(&b_st, &b_features, 2, &db_emlrtRTEI, true);
  ptrKeypoints = NULL;
  ptrDescriptors = NULL;
  out_numel = extractSurf_compute(&Iu8T->data[0], Iu8T->size[1], Iu8T->size[0],
    2, &inLocation->data[0], &valScale->data[0], &valMetric->data[0],
    &valSignOfLaplacian->data[0], valLocation->size[0], false, false,
    &ptrKeypoints, &ptrDescriptors);
  i4 = valLocation->size[0] * valLocation->size[1];
  if (out_numel < 0) {
    emlrtNonNegativeCheckR2012b(out_numel, &e_emlrtDCI, &b_st);
  }

  valLocation->size[0] = out_numel;
  valLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(&b_st, valLocation, i4, &y_emlrtRTEI);
  i4 = valScale->size[0];
  valScale->size[0] = out_numel;
  emxEnsureCapacity_real32_T(&b_st, valScale, i4, &y_emlrtRTEI);
  i4 = valMetric->size[0];
  valMetric->size[0] = out_numel;
  emxEnsureCapacity_real32_T(&b_st, valMetric, i4, &y_emlrtRTEI);
  i4 = valSignOfLaplacian->size[0];
  valSignOfLaplacian->size[0] = out_numel;
  emxEnsureCapacity_int8_T(&b_st, valSignOfLaplacian, i4, &y_emlrtRTEI);
  i4 = outOrientation->size[0];
  outOrientation->size[0] = out_numel;
  emxEnsureCapacity_real32_T(&b_st, outOrientation, i4, &y_emlrtRTEI);
  i4 = b_features->size[0] * b_features->size[1];
  b_features->size[0] = out_numel;
  b_features->size[1] = 64;
  emxEnsureCapacity_real32_T(&b_st, b_features, i4, &y_emlrtRTEI);
  extractSurf_assignOutput(ptrKeypoints, ptrDescriptors, &valLocation->data[0],
    &valScale->data[0], &valMetric->data[0], &valSignOfLaplacian->data[0],
    &outOrientation->data[0], &b_features->data[0]);
  i4 = features->size[0] * features->size[1];
  features->size[0] = b_features->size[0];
  features->size[1] = b_features->size[1];
  emxEnsureCapacity_real32_T(&st, features, i4, &ab_emlrtRTEI);
  out_numel = b_features->size[0] * b_features->size[1];
  emxFree_real32_T(&inLocation);
  emxFree_uint8_T(&Iu8T);
  for (i4 = 0; i4 < out_numel; i4++) {
    features->data[i4] = b_features->data[i4];
  }

  emxFree_real32_T(&b_features);
  i4 = outOrientation->size[0];
  emxEnsureCapacity_real32_T(&st, outOrientation, i4, &bb_emlrtRTEI);
  out_numel = outOrientation->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    outOrientation->data[i4] = 6.28318548F - outOrientation->data[i4];
  }

  emxInit_real32_T(&st, &inputs_Location, 2, &l_emlrtRTEI, true);
  b_st.site = &gc_emlrtRSI;
  i4 = inputs_Location->size[0] * inputs_Location->size[1];
  inputs_Location->size[0] = valLocation->size[0];
  inputs_Location->size[1] = valLocation->size[1];
  emxEnsureCapacity_real32_T(&b_st, inputs_Location, i4, &l_emlrtRTEI);
  out_numel = valLocation->size[0] * valLocation->size[1];
  for (i4 = 0; i4 < out_numel; i4++) {
    inputs_Location->data[i4] = valLocation->data[i4];
  }

  valid_points->pLocation->size[0] = 0;
  valid_points->pLocation->size[1] = 2;
  valid_points->pMetric->size[0] = 0;
  valid_points->pScale->size[0] = 0;
  valid_points->pSignOfLaplacian->size[0] = 0;
  valid_points->pOrientation->size[0] = 0;
  c_st.site = &r_emlrtRSI;
  d_st.site = &s_emlrtRSI;
  e_st.site = &u_emlrtRSI;
  f_st.site = &bb_emlrtRSI;
  FeaturePointsImpl_checkLocation(&f_st, valLocation);
  f_st.site = &cb_emlrtRSI;
  FeaturePointsImpl_checkMetric(&f_st, valMetric);
  f_st.site = &db_emlrtRSI;
  if ((valMetric->size[0] == 1) || (valMetric->size[0] == valLocation->size[0]))
  {
  } else {
    emlrtErrorWithMessageIdR2018a(&f_st, &qh_emlrtRTEI,
      "vision:FeaturePoints:invalidParamLength",
      "vision:FeaturePoints:invalidParamLength", 3, 4, 6, "Metric");
  }

  e_st.site = &v_emlrtRSI;
  SURFPointsImpl_checkScale(&e_st, valScale);
  e_st.site = &w_emlrtRSI;
  f_st.site = &ib_emlrtRSI;
  g_st.site = &gb_emlrtRSI;
  h_st.site = &q_emlrtRSI;
  p = true;
  out_numel = 0;
  exitg1 = false;
  while ((!exitg1) && (out_numel <= outOrientation->size[0] - 1)) {
    if (!muSingleScalarIsNaN(outOrientation->data[out_numel])) {
      out_numel++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&h_st, &th_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonNaN",
      "MATLAB:vision:internal:SURFPoints_cg:expectedNonNaN", 3, 4, 11,
      "Orientation");
  }

  h_st.site = &q_emlrtRSI;
  p = b_all(outOrientation);
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&h_st, &uh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedFinite",
      "MATLAB:vision:internal:SURFPoints_cg:expectedFinite", 3, 4, 11,
      "Orientation");
  }

  emxInit_boolean_T(&h_st, &b_valSignOfLaplacian, 1, &m_emlrtRTEI, true);
  e_st.site = &x_emlrtRSI;
  i4 = b_valSignOfLaplacian->size[0];
  b_valSignOfLaplacian->size[0] = valSignOfLaplacian->size[0];
  emxEnsureCapacity_boolean_T(&e_st, b_valSignOfLaplacian, i4, &m_emlrtRTEI);
  out_numel = valSignOfLaplacian->size[0];
  for (i4 = 0; i4 < out_numel; i4++) {
    b_valSignOfLaplacian->data[i4] = (valSignOfLaplacian->data[i4] >= -1);
  }

  f_st.site = &jb_emlrtRSI;
  if (c_all(&f_st, b_valSignOfLaplacian)) {
    i4 = b_valSignOfLaplacian->size[0];
    b_valSignOfLaplacian->size[0] = valSignOfLaplacian->size[0];
    emxEnsureCapacity_boolean_T(&e_st, b_valSignOfLaplacian, i4, &n_emlrtRTEI);
    out_numel = valSignOfLaplacian->size[0];
    for (i4 = 0; i4 < out_numel; i4++) {
      b_valSignOfLaplacian->data[i4] = (valSignOfLaplacian->data[i4] <= 1);
    }

    f_st.site = &jb_emlrtRSI;
    if (c_all(&f_st, b_valSignOfLaplacian)) {
      p = true;
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  emxFree_boolean_T(&b_valSignOfLaplacian);
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&e_st, &rh_emlrtRTEI,
      "vision:SURFPoints:invalidSignOfLaplacian",
      "vision:SURFPoints:invalidSignOfLaplacian", 0);
  }

  e_st.site = &y_emlrtRSI;
  if ((valScale->size[0] == 1) || (valScale->size[0] == valLocation->size[0])) {
  } else {
    emlrtErrorWithMessageIdR2018a(&e_st, &qh_emlrtRTEI,
      "vision:FeaturePoints:invalidParamLength",
      "vision:FeaturePoints:invalidParamLength", 3, 4, 5, "Scale");
  }

  e_st.site = &ab_emlrtRSI;
  if ((valSignOfLaplacian->size[0] == 1) || (valSignOfLaplacian->size[0] ==
       valLocation->size[0])) {
  } else {
    emlrtErrorWithMessageIdR2018a(&e_st, &qh_emlrtRTEI,
      "vision:FeaturePoints:invalidParamLength",
      "vision:FeaturePoints:invalidParamLength", 3, 4, 15, "SignOfLaplacian");
  }

  e_st.site = &hc_emlrtRSI;
  if ((outOrientation->size[0] == 1) || (outOrientation->size[0] ==
       valLocation->size[0])) {
    p = true;
  } else {
    p = false;
  }

  emxFree_real32_T(&valLocation);
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&e_st, &qh_emlrtRTEI,
      "vision:FeaturePoints:invalidParamLength",
      "vision:FeaturePoints:invalidParamLength", 3, 4, 11, "Orientation");
  }

  d_st.site = &t_emlrtRSI;
  b_SURFPointsImpl_configure(&d_st, valid_points, inputs_Location, valMetric,
    valScale, valSignOfLaplacian, outOrientation);
  emxFree_real32_T(&inputs_Location);
  emxFree_int8_T(&valSignOfLaplacian);
  emxFree_real32_T(&valMetric);
  emxFree_real32_T(&valScale);
  emxFree_real32_T(&outOrientation);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (extractFeatures.c) */
