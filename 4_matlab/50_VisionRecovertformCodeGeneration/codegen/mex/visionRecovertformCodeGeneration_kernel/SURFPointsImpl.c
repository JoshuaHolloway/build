/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SURFPointsImpl.c
 *
 * Code generation for function 'SURFPointsImpl'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "SURFPointsImpl.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "xgetrf.h"
#include "eml_int_forloop_overflow_check.h"
#include "all.h"
#include "visionRecovertformCodeGeneration_kernel_mexutil.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 229,/* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 181,/* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 190,/* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 193,/* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 196,/* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 283,/* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 343,/* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 68, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 70, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRTEInfo q_emlrtRTEI = { 179,/* lineNo */
  25,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 278,/* lineNo */
  13,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 181,/* lineNo */
  20,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 283,/* lineNo */
  70,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 181,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 190,/* lineNo */
  70,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 343,/* lineNo */
  21,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 189,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 192,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 196,/* lineNo */
  63,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 195,/* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 193,/* lineNo */
  70,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 27,/* lineNo */
  27,                                  /* colNo */
  "validatege",                        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatege.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  189,                                 /* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  192,                                 /* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  195,                                 /* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  282,                                 /* lineNo */
  13,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

/* Function Definitions */
void SURFPointsImpl_checkScale(const emlrtStack *sp, const emxArray_real32_T
  *scale)
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &q_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= scale->size[0] - 1)) {
    if (!muSingleScalarIsNaN(scale->data[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &th_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonNaN",
      "MATLAB:vision:internal:SURFPoints_cg:expectedNonNaN", 3, 4, 5, "Scale");
  }

  b_st.site = &q_emlrtRSI;
  p = b_all(scale);
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &uh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedFinite",
      "MATLAB:vision:internal:SURFPoints_cg:expectedFinite", 3, 4, 5, "Scale");
  }

  b_st.site = &q_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= scale->size[0] - 1)) {
    if (scale->data[k] >= 1.6) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &wh_emlrtRTEI,
      "MATLAB:validateattributes:expectedArray",
      "MATLAB:vision:internal:SURFPoints_cg:notGreaterEqual", 9, 4, 5, "Scale",
      4, 2, ">=", 4, 3, "1.6");
  }
}

void SURFPointsImpl_configure(const emlrtStack *sp,
  vision_internal_SURFPoints_cg *this, const emxArray_real32_T *inputs_Location,
  const emxArray_real32_T *inputs_Metric, const emxArray_real32_T *inputs_Scale,
  const emxArray_int8_T *inputs_SignOfLaplacian)
{
  int32_T itilerow;
  int32_T outsize_idx_0;
  emxArray_real32_T *x;
  const mxArray *y;
  const mxArray *m25;
  static const int32_T iv27[2] = { 1, 15 };

  boolean_T overflow;
  const mxArray *m26;
  static const int32_T iv28[2] = { 1, 15 };

  const mxArray *m27;
  static const int32_T iv29[2] = { 1, 15 };

  emxArray_int8_T *r19;
  int8_T a_data_idx_0;
  const mxArray *m28;
  static const int32_T iv30[2] = { 1, 15 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &nb_emlrtRSI;
  itilerow = this->pLocation->size[0] * this->pLocation->size[1];
  this->pLocation->size[0] = inputs_Location->size[0];
  this->pLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(&st, this->pLocation, itilerow, &og_emlrtRTEI);
  outsize_idx_0 = inputs_Location->size[0] * inputs_Location->size[1];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pLocation->data[itilerow] = inputs_Location->data[itilerow];
  }

  emxInit_real32_T(&st, &x, 1, &qg_emlrtRTEI, true);
  itilerow = this->pMetric->size[0];
  this->pMetric->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_real32_T(&st, this->pMetric, itilerow, &pg_emlrtRTEI);
  b_st.site = &rb_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_Metric->size[0];
  emxEnsureCapacity_real32_T(&b_st, x, itilerow, &qg_emlrtRTEI);
  outsize_idx_0 = inputs_Metric->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_Metric->data[itilerow];
  }

  if (inputs_Metric->size[0] == 1) {
    c_st.site = &sb_emlrtRSI;
    d_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m25 = emlrtCreateCharArray(2, iv27);
      emlrtInitCharArrayR2013a(&c_st, 15, m25, &cv0[0]);
      emlrtAssign(&y, m25);
      d_st.site = &nm_emlrtRSI;
      i_error(&d_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&c_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    d_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      e_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      d_st.site = &vb_emlrtRSI;
      x->data[itilerow] = inputs_Metric->data[0];
    }
  }

  itilerow = this->pMetric->size[0];
  outsize_idx_0 = x->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &n_emlrtECI, &st);
  }

  itilerow = this->pMetric->size[0];
  this->pMetric->size[0] = x->size[0];
  emxEnsureCapacity_real32_T(&st, this->pMetric, itilerow, &rg_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pMetric->data[itilerow] = x->data[itilerow];
  }

  itilerow = this->pScale->size[0];
  this->pScale->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_real32_T(sp, this->pScale, itilerow, &q_emlrtRTEI);
  itilerow = this->pOrientation->size[0];
  this->pOrientation->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_real32_T(sp, this->pOrientation, itilerow, &q_emlrtRTEI);
  itilerow = this->pSignOfLaplacian->size[0];
  this->pSignOfLaplacian->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_int8_T(sp, this->pSignOfLaplacian, itilerow, &q_emlrtRTEI);
  st.site = &ob_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_Scale->size[0];
  emxEnsureCapacity_real32_T(&st, x, itilerow, &sg_emlrtRTEI);
  outsize_idx_0 = inputs_Scale->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_Scale->data[itilerow];
  }

  if (inputs_Scale->size[0] == 1) {
    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m26 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(&b_st, 15, m26, &cv0[0]);
      emlrtAssign(&y, m26);
      c_st.site = &nm_emlrtRSI;
      i_error(&c_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&b_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    c_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      d_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      c_st.site = &vb_emlrtRSI;
      x->data[itilerow] = inputs_Scale->data[0];
    }
  }

  itilerow = this->pScale->size[0];
  outsize_idx_0 = x->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &k_emlrtECI, sp);
  }

  itilerow = this->pScale->size[0];
  this->pScale->size[0] = x->size[0];
  emxEnsureCapacity_real32_T(sp, this->pScale, itilerow, &ug_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pScale->data[itilerow] = x->data[itilerow];
  }

  st.site = &pb_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &tb_emlrtRSI;
  outsize_idx_0 = inputs_Location->size[0];
  if (outsize_idx_0 != inputs_Location->size[0]) {
    y = NULL;
    m27 = emlrtCreateCharArray(2, iv29);
    emlrtInitCharArrayR2013a(&b_st, 15, m27, &cv0[0]);
    emlrtAssign(&y, m27);
    c_st.site = &nm_emlrtRSI;
    i_error(&c_st, y, &b_emlrtMCI);
  }

  itilerow = this->pOrientation->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &l_emlrtECI, sp);
  }

  itilerow = this->pOrientation->size[0];
  this->pOrientation->size[0] = outsize_idx_0;
  emxEnsureCapacity_real32_T(sp, this->pOrientation, itilerow, &vg_emlrtRTEI);
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pOrientation->data[itilerow] = 0.0F;
  }

  st.site = &qb_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_SignOfLaplacian->size[0];
  emxEnsureCapacity_real32_T(&st, x, itilerow, &wg_emlrtRTEI);
  outsize_idx_0 = inputs_SignOfLaplacian->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_SignOfLaplacian->data[itilerow];
  }

  if (x->size[0] == 1) {
    b_st.site = &sb_emlrtRSI;
    a_data_idx_0 = (int8_T)x->data[0];
    c_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m28 = emlrtCreateCharArray(2, iv30);
      emlrtInitCharArrayR2013a(&b_st, 15, m28, &cv0[0]);
      emlrtAssign(&y, m28);
      c_st.site = &nm_emlrtRSI;
      i_error(&c_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&b_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    c_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      d_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      c_st.site = &vb_emlrtRSI;
      x->data[itilerow] = a_data_idx_0;
    }
  }

  emxInit_int8_T(&st, &r19, 1, &q_emlrtRTEI, true);
  itilerow = r19->size[0];
  r19->size[0] = x->size[0];
  emxEnsureCapacity_int8_T(sp, r19, itilerow, &xg_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    r19->data[itilerow] = (int8_T)x->data[itilerow];
  }

  emxFree_real32_T(&x);
  itilerow = this->pSignOfLaplacian->size[0];
  outsize_idx_0 = r19->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &m_emlrtECI, sp);
  }

  itilerow = this->pSignOfLaplacian->size[0];
  this->pSignOfLaplacian->size[0] = r19->size[0];
  emxEnsureCapacity_int8_T(sp, this->pSignOfLaplacian, itilerow, &xg_emlrtRTEI);
  outsize_idx_0 = r19->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pSignOfLaplacian->data[itilerow] = r19->data[itilerow];
  }

  emxFree_int8_T(&r19);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_SURFPointsImpl_configure(const emlrtStack *sp,
  vision_internal_SURFPoints_cg *this, const emxArray_real32_T *inputs_Location,
  const emxArray_real32_T *inputs_Metric, const emxArray_real32_T *inputs_Scale,
  const emxArray_int8_T *inputs_SignOfLaplacian, const emxArray_real32_T
  *inputs_Orientation)
{
  int32_T itilerow;
  int32_T outsize_idx_0;
  emxArray_real32_T *x;
  const mxArray *y;
  const mxArray *m29;
  static const int32_T iv31[2] = { 1, 15 };

  boolean_T overflow;
  const mxArray *m30;
  static const int32_T iv32[2] = { 1, 15 };

  const mxArray *m31;
  static const int32_T iv33[2] = { 1, 15 };

  emxArray_int8_T *r20;
  int8_T a_data_idx_0;
  const mxArray *m32;
  static const int32_T iv34[2] = { 1, 15 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &nb_emlrtRSI;
  itilerow = this->pLocation->size[0] * this->pLocation->size[1];
  this->pLocation->size[0] = inputs_Location->size[0];
  this->pLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(&st, this->pLocation, itilerow, &og_emlrtRTEI);
  outsize_idx_0 = inputs_Location->size[0] * inputs_Location->size[1];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pLocation->data[itilerow] = inputs_Location->data[itilerow];
  }

  emxInit_real32_T(&st, &x, 1, &qg_emlrtRTEI, true);
  itilerow = this->pMetric->size[0];
  this->pMetric->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_real32_T(&st, this->pMetric, itilerow, &pg_emlrtRTEI);
  b_st.site = &rb_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_Metric->size[0];
  emxEnsureCapacity_real32_T(&b_st, x, itilerow, &qg_emlrtRTEI);
  outsize_idx_0 = inputs_Metric->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_Metric->data[itilerow];
  }

  if (inputs_Metric->size[0] == 1) {
    c_st.site = &sb_emlrtRSI;
    d_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m29 = emlrtCreateCharArray(2, iv31);
      emlrtInitCharArrayR2013a(&c_st, 15, m29, &cv0[0]);
      emlrtAssign(&y, m29);
      d_st.site = &nm_emlrtRSI;
      i_error(&d_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&c_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    d_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      e_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      d_st.site = &vb_emlrtRSI;
      x->data[itilerow] = inputs_Metric->data[0];
    }
  }

  itilerow = this->pMetric->size[0];
  outsize_idx_0 = x->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &n_emlrtECI, &st);
  }

  itilerow = this->pMetric->size[0];
  this->pMetric->size[0] = x->size[0];
  emxEnsureCapacity_real32_T(&st, this->pMetric, itilerow, &rg_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pMetric->data[itilerow] = x->data[itilerow];
  }

  itilerow = this->pScale->size[0];
  this->pScale->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_real32_T(sp, this->pScale, itilerow, &q_emlrtRTEI);
  itilerow = this->pOrientation->size[0];
  this->pOrientation->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_real32_T(sp, this->pOrientation, itilerow, &q_emlrtRTEI);
  itilerow = this->pSignOfLaplacian->size[0];
  this->pSignOfLaplacian->size[0] = inputs_Location->size[0];
  emxEnsureCapacity_int8_T(sp, this->pSignOfLaplacian, itilerow, &q_emlrtRTEI);
  st.site = &ob_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_Scale->size[0];
  emxEnsureCapacity_real32_T(&st, x, itilerow, &sg_emlrtRTEI);
  outsize_idx_0 = inputs_Scale->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_Scale->data[itilerow];
  }

  if (inputs_Scale->size[0] == 1) {
    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m30 = emlrtCreateCharArray(2, iv32);
      emlrtInitCharArrayR2013a(&b_st, 15, m30, &cv0[0]);
      emlrtAssign(&y, m30);
      c_st.site = &nm_emlrtRSI;
      i_error(&c_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&b_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    c_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      d_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      c_st.site = &vb_emlrtRSI;
      x->data[itilerow] = inputs_Scale->data[0];
    }
  }

  itilerow = this->pScale->size[0];
  outsize_idx_0 = x->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &k_emlrtECI, sp);
  }

  itilerow = this->pScale->size[0];
  this->pScale->size[0] = x->size[0];
  emxEnsureCapacity_real32_T(sp, this->pScale, itilerow, &ug_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pScale->data[itilerow] = x->data[itilerow];
  }

  st.site = &pb_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_Orientation->size[0];
  emxEnsureCapacity_real32_T(&st, x, itilerow, &yg_emlrtRTEI);
  outsize_idx_0 = inputs_Orientation->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_Orientation->data[itilerow];
  }

  if (inputs_Orientation->size[0] == 1) {
    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m31 = emlrtCreateCharArray(2, iv33);
      emlrtInitCharArrayR2013a(&b_st, 15, m31, &cv0[0]);
      emlrtAssign(&y, m31);
      c_st.site = &nm_emlrtRSI;
      i_error(&c_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&b_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    c_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      d_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      c_st.site = &vb_emlrtRSI;
      x->data[itilerow] = inputs_Orientation->data[0];
    }
  }

  itilerow = this->pOrientation->size[0];
  outsize_idx_0 = x->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &l_emlrtECI, sp);
  }

  itilerow = this->pOrientation->size[0];
  this->pOrientation->size[0] = x->size[0];
  emxEnsureCapacity_real32_T(sp, this->pOrientation, itilerow, &vg_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pOrientation->data[itilerow] = x->data[itilerow];
  }

  st.site = &qb_emlrtRSI;
  itilerow = x->size[0];
  x->size[0] = inputs_SignOfLaplacian->size[0];
  emxEnsureCapacity_real32_T(&st, x, itilerow, &wg_emlrtRTEI);
  outsize_idx_0 = inputs_SignOfLaplacian->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    x->data[itilerow] = inputs_SignOfLaplacian->data[itilerow];
  }

  if (x->size[0] == 1) {
    b_st.site = &sb_emlrtRSI;
    a_data_idx_0 = (int8_T)x->data[0];
    c_st.site = &tb_emlrtRSI;
    outsize_idx_0 = inputs_Location->size[0];
    if (outsize_idx_0 != inputs_Location->size[0]) {
      y = NULL;
      m32 = emlrtCreateCharArray(2, iv34);
      emlrtInitCharArrayR2013a(&b_st, 15, m32, &cv0[0]);
      emlrtAssign(&y, m32);
      c_st.site = &nm_emlrtRSI;
      i_error(&c_st, y, &b_emlrtMCI);
    }

    itilerow = x->size[0];
    x->size[0] = outsize_idx_0;
    emxEnsureCapacity_real32_T(&b_st, x, itilerow, &tg_emlrtRTEI);
    outsize_idx_0 = inputs_Location->size[0];
    c_st.site = &ub_emlrtRSI;
    overflow = ((1 <= inputs_Location->size[0]) && (inputs_Location->size[0] >
      2147483646));
    if (overflow) {
      d_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
      c_st.site = &vb_emlrtRSI;
      x->data[itilerow] = a_data_idx_0;
    }
  }

  emxInit_int8_T(&st, &r20, 1, &q_emlrtRTEI, true);
  itilerow = r20->size[0];
  r20->size[0] = x->size[0];
  emxEnsureCapacity_int8_T(sp, r20, itilerow, &xg_emlrtRTEI);
  outsize_idx_0 = x->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    r20->data[itilerow] = (int8_T)x->data[itilerow];
  }

  emxFree_real32_T(&x);
  itilerow = this->pSignOfLaplacian->size[0];
  outsize_idx_0 = r20->size[0];
  if (itilerow != outsize_idx_0) {
    emlrtSubAssignSizeCheck1dR2017a(itilerow, outsize_idx_0, &m_emlrtECI, sp);
  }

  itilerow = this->pSignOfLaplacian->size[0];
  this->pSignOfLaplacian->size[0] = r20->size[0];
  emxEnsureCapacity_int8_T(sp, this->pSignOfLaplacian, itilerow, &xg_emlrtRTEI);
  outsize_idx_0 = r20->size[0];
  for (itilerow = 0; itilerow < outsize_idx_0; itilerow++) {
    this->pSignOfLaplacian->data[itilerow] = r20->data[itilerow];
  }

  emxFree_int8_T(&r20);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SURFPointsImpl.c) */
