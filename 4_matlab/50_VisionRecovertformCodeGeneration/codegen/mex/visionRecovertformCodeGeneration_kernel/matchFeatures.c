/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * matchFeatures.c
 *
 * Code generation for function 'matchFeatures'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "matchFeatures.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "cvalgMatchFeatures.h"

/* Variable Definitions */
static emlrtRSInfo ic_emlrtRSI = { 186,/* lineNo */
  "matchFeatures",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 32, /* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 52, /* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 350,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 351,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 184,/* lineNo */
  14,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 184,/* lineNo */
  2,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 185,/* lineNo */
  14,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 185,/* lineNo */
  2,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 350,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 190,/* lineNo */
  2,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 351,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 164,/* lineNo */
  6,                                   /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 164,/* lineNo */
  17,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 187,/* lineNo */
  22,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 187,/* lineNo */
  33,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 1,/* lineNo */
  38,                                  /* colNo */
  "matchFeatures",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\matchFeatures.m"/* pName */
};

/* Function Definitions */
void matchFeatures(const emlrtStack *sp, const emxArray_real32_T *varargin_1,
                   const emxArray_real32_T *varargin_2, emxArray_uint32_T
                   *indexPairs)
{
  emxArray_real32_T *b_varargin_1;
  int32_T i6;
  int32_T loop_ub;
  emxArray_real32_T *features1;
  int32_T i7;
  emxArray_real32_T *features2;
  emxArray_real32_T *features1in;
  emxArray_real32_T *features2in;
  emxArray_uint32_T *b_indexPairs;
  emxArray_real32_T *matchMetric;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T(sp, &b_varargin_1, 2, &ib_emlrtRTEI, true);
  i6 = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = 64;
  b_varargin_1->size[1] = varargin_1->size[0];
  emxEnsureCapacity_real32_T(sp, b_varargin_1, i6, &ib_emlrtRTEI);
  loop_ub = varargin_1->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    for (i7 = 0; i7 < 64; i7++) {
      b_varargin_1->data[i7 + b_varargin_1->size[0] * i6] = varargin_1->data[i6
        + varargin_1->size[0] * i7];
    }
  }

  emxInit_real32_T(sp, &features1, 2, &pb_emlrtRTEI, true);
  loop_ub = varargin_1->size[0];
  i6 = features1->size[0] * features1->size[1];
  features1->size[0] = 64;
  features1->size[1] = loop_ub;
  emxEnsureCapacity_real32_T(sp, features1, i6, &jb_emlrtRTEI);
  loop_ub <<= 6;
  for (i6 = 0; i6 < loop_ub; i6++) {
    features1->data[i6] = b_varargin_1->data[i6];
  }

  i6 = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = 64;
  b_varargin_1->size[1] = varargin_2->size[0];
  emxEnsureCapacity_real32_T(sp, b_varargin_1, i6, &kb_emlrtRTEI);
  loop_ub = varargin_2->size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    for (i7 = 0; i7 < 64; i7++) {
      b_varargin_1->data[i7 + b_varargin_1->size[0] * i6] = varargin_2->data[i6
        + varargin_2->size[0] * i7];
    }
  }

  emxInit_real32_T(sp, &features2, 2, &qb_emlrtRTEI, true);
  loop_ub = varargin_2->size[0];
  i6 = features2->size[0] * features2->size[1];
  features2->size[0] = 64;
  features2->size[1] = loop_ub;
  emxEnsureCapacity_real32_T(sp, features2, i6, &lb_emlrtRTEI);
  loop_ub <<= 6;
  for (i6 = 0; i6 < loop_ub; i6++) {
    features2->data[i6] = b_varargin_1->data[i6];
  }

  emxFree_real32_T(&b_varargin_1);
  st.site = &ic_emlrtRSI;
  emxInit_real32_T(&st, &features1in, 2, &rb_emlrtRTEI, true);
  emxInit_real32_T(&st, &features2in, 2, &sb_emlrtRTEI, true);
  emxInit_uint32_T(&st, &b_indexPairs, 2, &tb_emlrtRTEI, true);
  emxInit_real32_T(&st, &matchMetric, 2, &tb_emlrtRTEI, true);
  if ((features1->size[1] == 0) || (features2->size[1] == 0)) {
    b_indexPairs->size[0] = 2;
    b_indexPairs->size[1] = 0;
  } else {
    b_st.site = &jc_emlrtRSI;
    i6 = features1in->size[0] * features1in->size[1];
    features1in->size[0] = features1->size[0];
    features1in->size[1] = features1->size[1];
    emxEnsureCapacity_real32_T(&b_st, features1in, i6, &mb_emlrtRTEI);
    loop_ub = features1->size[0] * features1->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      features1in->data[i6] = features1->data[i6];
    }

    c_st.site = &lc_emlrtRSI;
    normalizeX(&c_st, features1in);
    i6 = features2in->size[0] * features2in->size[1];
    features2in->size[0] = features2->size[0];
    features2in->size[1] = features2->size[1];
    emxEnsureCapacity_real32_T(&b_st, features2in, i6, &ob_emlrtRTEI);
    loop_ub = features2->size[0] * features2->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      features2in->data[i6] = features2->data[i6];
    }

    c_st.site = &mc_emlrtRSI;
    normalizeX(&c_st, features2in);
    b_st.site = &kc_emlrtRSI;
    findMatchesExhaustive(&b_st, features1in, features2in, 0.04F, b_indexPairs,
                          matchMetric);
  }

  emxFree_real32_T(&matchMetric);
  emxFree_real32_T(&features2in);
  emxFree_real32_T(&features1in);
  emxFree_real32_T(&features2);
  emxFree_real32_T(&features1);
  i6 = indexPairs->size[0] * indexPairs->size[1];
  indexPairs->size[0] = b_indexPairs->size[1];
  indexPairs->size[1] = 2;
  emxEnsureCapacity_uint32_T(sp, indexPairs, i6, &nb_emlrtRTEI);
  loop_ub = b_indexPairs->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    indexPairs->data[i6] = b_indexPairs->data[i6 << 1];
  }

  loop_ub = b_indexPairs->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    indexPairs->data[i6 + indexPairs->size[0]] = b_indexPairs->data[1 + (i6 << 1)];
  }

  emxFree_uint32_T(&b_indexPairs);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (matchFeatures.c) */
