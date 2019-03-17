/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cvalgMatchFeatures.c
 *
 * Code generation for function 'cvalgMatchFeatures'
 *
 */

/* Include files */
#include <math.h>
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "cvalgMatchFeatures.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "partialSort.h"
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"
#include "cvstCG_ComputeMetric.h"

/* Variable Definitions */
static emlrtRSInfo nc_emlrtRSI = { 609,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 610,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 613,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 157,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 154,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 152,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 150,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 199,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 528,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 179,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 182,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 270,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 423,/* lineNo */
  "cvalgMatchFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pathName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 608,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 526,/* lineNo */
  21,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 526,/* lineNo */
  9,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 527,/* lineNo */
  21,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 527,/* lineNo */
  9,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 150,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 42,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 43,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 179,/* lineNo */
  66,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 182,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 599,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 154,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 602,/* lineNo */
  11,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 602,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 603,/* lineNo */
  15,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 603,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 272,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 266,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 157,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 421,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 275,/* lineNo */
  15,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 270,/* lineNo */
  26,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 275,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 423,/* lineNo */
  10,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 276,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 423,/* lineNo */
  32,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 141,/* lineNo */
  38,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 166,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 270,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 276,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 167,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 152,/* lineNo */
  2,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 199,/* lineNo */
  28,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 199,/* lineNo */
  39,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 152,/* lineNo */
  14,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 182,/* lineNo */
  29,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 597,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 610,/* lineNo */
  22,                                  /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 610,/* lineNo */
  5,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 609,/* lineNo */
  1,                                   /* colNo */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  599,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  423,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  423,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  422,                                 /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  602,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  275,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  166,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  613,                                 /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "cvalgMatchFeatures",                /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\cvalgMatchFeatures.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ri_emlrtRTEI = { 50,/* lineNo */
  15,                                  /* colNo */
  "bsxfun",                            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"/* pName */
};

/* Function Definitions */
void findMatchesExhaustive(const emlrtStack *sp, const emxArray_real32_T
  *features1, const emxArray_real32_T *features2, real32_T matchThreshold,
  emxArray_uint32_T *indexPairs, emxArray_real32_T *matchMetric)
{
  emxArray_real32_T *b_features1;
  uint32_T N1;
  uint32_T N2;
  int32_T i8;
  emxArray_real32_T *c_features1;
  int32_T loop_ub;
  int32_T features1_idx_0;
  int32_T i9;
  emxArray_real32_T *b_features2;
  emxArray_real32_T *scores;
  emxArray_real32_T *r1;
  emxArray_real32_T *r2;
  emxArray_real32_T *topTwoMetrics;
  emxArray_uint32_T *topTwoIndices;
  emxArray_uint32_T *y;
  boolean_T p;
  emxArray_uint32_T *b_indexPairs;
  emxArray_boolean_T *inds;
  int32_T i;
  emxArray_int32_T *r3;
  int32_T i10;
  emxArray_int32_T *r4;
  emxArray_real32_T *b_topTwoMetrics;
  emxArray_real32_T *topTwoScores;
  emxArray_real32_T *b_topTwoScores;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T b_p;
  boolean_T exitg1;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_int32_T *r10;
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
  emxInit_real32_T(sp, &b_features1, 2, &vb_emlrtRTEI, true);
  N1 = (uint32_T)features1->size[1];
  N2 = (uint32_T)features2->size[1];
  st.site = &id_emlrtRSI;
  b_st.site = &jd_emlrtRSI;
  i8 = b_features1->size[0] * b_features1->size[1];
  b_features1->size[0] = features1->size[1];
  b_features1->size[1] = 64;
  emxEnsureCapacity_real32_T(&b_st, b_features1, i8, &vb_emlrtRTEI);
  for (i8 = 0; i8 < 64; i8++) {
    loop_ub = features1->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_features1->data[i9 + b_features1->size[0] * i8] = features1->data[i8 +
        (i9 << 6)];
    }
  }

  emxInit_real32_T(&b_st, &c_features1, 2, &dd_emlrtRTEI, true);
  features1_idx_0 = features1->size[1];
  i8 = c_features1->size[0] * c_features1->size[1];
  c_features1->size[0] = features1_idx_0;
  c_features1->size[1] = 64;
  emxEnsureCapacity_real32_T(&b_st, c_features1, i8, &wb_emlrtRTEI);
  loop_ub = features1_idx_0 << 6;
  for (i8 = 0; i8 < loop_ub; i8++) {
    c_features1->data[i8] = b_features1->data[i8];
  }

  i8 = b_features1->size[0] * b_features1->size[1];
  b_features1->size[0] = features2->size[1];
  b_features1->size[1] = 64;
  emxEnsureCapacity_real32_T(&b_st, b_features1, i8, &xb_emlrtRTEI);
  for (i8 = 0; i8 < 64; i8++) {
    loop_ub = features2->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      b_features1->data[i9 + b_features1->size[0] * i8] = features2->data[i8 +
        (i9 << 6)];
    }
  }

  emxInit_real32_T(&b_st, &b_features2, 2, &ed_emlrtRTEI, true);
  features1_idx_0 = features2->size[1];
  i8 = b_features2->size[0] * b_features2->size[1];
  b_features2->size[0] = features1_idx_0;
  b_features2->size[1] = 64;
  emxEnsureCapacity_real32_T(&b_st, b_features2, i8, &yb_emlrtRTEI);
  loop_ub = features1_idx_0 << 6;
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_features2->data[i8] = b_features1->data[i8];
  }

  emxInit_real32_T(&b_st, &scores, 2, &ac_emlrtRTEI, true);
  c_st.site = &kd_emlrtRSI;
  i8 = scores->size[0] * scores->size[1];
  scores->size[0] = (int32_T)N1;
  scores->size[1] = (int32_T)N2;
  emxEnsureCapacity_real32_T(&c_st, scores, i8, &ac_emlrtRTEI);
  loop_ub = (int32_T)N1 * (int32_T)N2;
  for (i8 = 0; i8 < loop_ub; i8++) {
    scores->data[i8] = 0.0F;
  }

  emxInit_real32_T(&c_st, &r1, 2, &wc_emlrtRTEI, true);
  i8 = r1->size[0] * r1->size[1];
  r1->size[0] = c_features1->size[1];
  r1->size[1] = c_features1->size[0];
  emxEnsureCapacity_real32_T(&c_st, r1, i8, &bc_emlrtRTEI);
  loop_ub = c_features1->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    features1_idx_0 = c_features1->size[1];
    for (i9 = 0; i9 < features1_idx_0; i9++) {
      r1->data[i9 + (i8 << 6)] = c_features1->data[i8 + c_features1->size[0] *
        i9];
    }
  }

  emxInit_real32_T(&c_st, &r2, 2, &wc_emlrtRTEI, true);
  i8 = r2->size[0] * r2->size[1];
  r2->size[0] = b_features2->size[1];
  r2->size[1] = b_features2->size[0];
  emxEnsureCapacity_real32_T(&c_st, r2, i8, &cc_emlrtRTEI);
  loop_ub = b_features2->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    features1_idx_0 = b_features2->size[1];
    for (i9 = 0; i9 < features1_idx_0; i9++) {
      r2->data[i9 + (i8 << 6)] = b_features2->data[i8 + b_features2->size[0] *
        i9];
    }
  }

  ComputeMetric_ssd_single(&r1->data[0], &r2->data[0], &scores->data[0],
    (uint32_T)c_features1->size[0], (uint32_T)b_features2->size[0], 64U);
  st.site = &hd_emlrtRSI;
  i8 = b_features1->size[0] * b_features1->size[1];
  b_features1->size[0] = scores->size[0];
  b_features1->size[1] = scores->size[1];
  emxEnsureCapacity_real32_T(&st, b_features1, i8, &dc_emlrtRTEI);
  loop_ub = scores->size[0] * scores->size[1];
  emxFree_real32_T(&r2);
  emxFree_real32_T(&r1);
  emxFree_real32_T(&b_features2);
  emxFree_real32_T(&c_features1);
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_features1->data[i8] = scores->data[i8];
  }

  emxInit_real32_T(&st, &topTwoMetrics, 2, &fd_emlrtRTEI, true);
  emxInit_uint32_T(&st, &topTwoIndices, 2, &wc_emlrtRTEI, true);
  emxInit_uint32_T(&st, &y, 2, &gd_emlrtRTEI, true);
  b_st.site = &ld_emlrtRSI;
  partialSort(&b_st, b_features1, topTwoMetrics, topTwoIndices);
  i8 = topTwoIndices->size[0];
  if (1 > i8) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i8, &m_emlrtBCI, &st);
  }

  emxFree_real32_T(&b_features1);
  if (scores->size[0] < 1) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    N1 = (uint32_T)scores->size[0];
    i8 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)N1;
    emxEnsureCapacity_uint32_T(&st, y, i8, &ec_emlrtRTEI);
    loop_ub = (int32_T)N1 - 1;
    for (i8 = 0; i8 <= loop_ub; i8++) {
      y->data[i8] = 1U + i8;
    }
  }

  emxFree_real32_T(&scores);
  b_st.site = &md_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  d_st.site = &hf_emlrtRSI;
  p = true;
  i8 = topTwoIndices->size[1];
  if (i8 != y->size[1]) {
    p = false;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_uint32_T(&d_st, &b_indexPairs, 2, &cd_emlrtRTEI, true);
  loop_ub = topTwoIndices->size[1] - 1;
  i8 = b_indexPairs->size[0] * b_indexPairs->size[1];
  b_indexPairs->size[0] = 2;
  b_indexPairs->size[1] = y->size[1];
  emxEnsureCapacity_uint32_T(&c_st, b_indexPairs, i8, &fc_emlrtRTEI);
  features1_idx_0 = y->size[1];
  for (i8 = 0; i8 < features1_idx_0; i8++) {
    b_indexPairs->data[i8 << 1] = y->data[i8];
  }

  emxFree_uint32_T(&y);
  for (i8 = 0; i8 <= loop_ub; i8++) {
    b_indexPairs->data[1 + (i8 << 1)] = topTwoIndices->data[topTwoIndices->size
      [0] * i8];
  }

  emxFree_uint32_T(&topTwoIndices);
  emxInit_boolean_T(&c_st, &inds, 2, &hd_emlrtRTEI, true);
  st.site = &gd_emlrtRSI;
  i8 = topTwoMetrics->size[0];
  if (1 > i8) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i8, &n_emlrtBCI, &st);
  }

  loop_ub = topTwoMetrics->size[1];
  i8 = inds->size[0] * inds->size[1];
  inds->size[0] = 1;
  inds->size[1] = loop_ub;
  emxEnsureCapacity_boolean_T(&st, inds, i8, &gc_emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    inds->data[i8] = (topTwoMetrics->data[topTwoMetrics->size[0] * i8] <=
                      matchThreshold);
  }

  loop_ub = inds->size[1] - 1;
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      features1_idx_0++;
    }
  }

  emxInit_int32_T(&st, &r3, 2, &wc_emlrtRTEI, true);
  i8 = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = features1_idx_0;
  emxEnsureCapacity_int32_T(&st, r3, i8, &hc_emlrtRTEI);
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      r3->data[features1_idx_0] = i + 1;
      features1_idx_0++;
    }
  }

  i8 = b_indexPairs->size[1];
  i9 = indexPairs->size[0] * indexPairs->size[1];
  indexPairs->size[0] = 2;
  indexPairs->size[1] = r3->size[1];
  emxEnsureCapacity_uint32_T(&st, indexPairs, i9, &ic_emlrtRTEI);
  loop_ub = r3->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    i10 = r3->data[i9];
    if ((i10 < 1) || (i10 > i8)) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, i8, &w_emlrtBCI, &st);
    }

    i = i9 << 1;
    indexPairs->data[i] = b_indexPairs->data[(i10 - 1) << 1];
    i10 = r3->data[i9];
    if ((i10 < 1) || (i10 > i8)) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, i8, &w_emlrtBCI, &st);
    }

    indexPairs->data[1 + i] = b_indexPairs->data[1 + ((i10 - 1) << 1)];
  }

  emxFree_int32_T(&r3);
  i8 = b_indexPairs->size[0] * b_indexPairs->size[1];
  b_indexPairs->size[0] = 2;
  b_indexPairs->size[1] = indexPairs->size[1];
  emxEnsureCapacity_uint32_T(&st, b_indexPairs, i8, &jc_emlrtRTEI);
  loop_ub = indexPairs->size[0] * indexPairs->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_indexPairs->data[i8] = indexPairs->data[i8];
  }

  loop_ub = inds->size[1] - 1;
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      features1_idx_0++;
    }
  }

  emxInit_int32_T(&st, &r4, 2, &wc_emlrtRTEI, true);
  i8 = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = features1_idx_0;
  emxEnsureCapacity_int32_T(&st, r4, i8, &hc_emlrtRTEI);
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      r4->data[features1_idx_0] = i + 1;
      features1_idx_0++;
    }
  }

  emxInit_real32_T(&st, &b_topTwoMetrics, 2, &kc_emlrtRTEI, true);
  loop_ub = topTwoMetrics->size[0];
  i8 = topTwoMetrics->size[1];
  i9 = b_topTwoMetrics->size[0] * b_topTwoMetrics->size[1];
  b_topTwoMetrics->size[0] = loop_ub;
  b_topTwoMetrics->size[1] = r4->size[1];
  emxEnsureCapacity_real32_T(&st, b_topTwoMetrics, i9, &kc_emlrtRTEI);
  features1_idx_0 = r4->size[1];
  for (i9 = 0; i9 < features1_idx_0; i9++) {
    for (i10 = 0; i10 < loop_ub; i10++) {
      i = r4->data[i9];
      if ((i < 1) || (i > i8)) {
        emlrtDynamicBoundsCheckR2012b(i, 1, i8, &s_emlrtBCI, &st);
      }

      b_topTwoMetrics->data[i10 + b_topTwoMetrics->size[0] * i9] =
        topTwoMetrics->data[i10 + topTwoMetrics->size[0] * (i - 1)];
    }
  }

  emxFree_int32_T(&r4);
  i8 = topTwoMetrics->size[0] * topTwoMetrics->size[1];
  topTwoMetrics->size[0] = b_topTwoMetrics->size[0];
  topTwoMetrics->size[1] = b_topTwoMetrics->size[1];
  emxEnsureCapacity_real32_T(&st, topTwoMetrics, i8, &lc_emlrtRTEI);
  loop_ub = b_topTwoMetrics->size[0] * b_topTwoMetrics->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    topTwoMetrics->data[i8] = b_topTwoMetrics->data[i8];
  }

  emxFree_real32_T(&b_topTwoMetrics);
  st.site = &fd_emlrtRSI;
  emxInit_real32_T(&st, &topTwoScores, 2, &tc_emlrtRTEI, true);
  if ((int32_T)N2 > 1) {
    emxInit_real32_T(&st, &b_topTwoScores, 2, &nc_emlrtRTEI, true);
    b_st.site = &if_emlrtRSI;
    i8 = b_topTwoScores->size[0] * b_topTwoScores->size[1];
    b_topTwoScores->size[0] = topTwoMetrics->size[0];
    b_topTwoScores->size[1] = topTwoMetrics->size[1];
    emxEnsureCapacity_real32_T(&b_st, b_topTwoScores, i8, &nc_emlrtRTEI);
    loop_ub = topTwoMetrics->size[0] * topTwoMetrics->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      b_topTwoScores->data[i8] = topTwoMetrics->data[i8];
    }

    i8 = topTwoMetrics->size[0];
    if (2 > i8) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i8, &p_emlrtBCI, &b_st);
    }

    loop_ub = topTwoMetrics->size[1];
    i8 = inds->size[0] * inds->size[1];
    inds->size[0] = 1;
    inds->size[1] = loop_ub;
    emxEnsureCapacity_boolean_T(&b_st, inds, i8, &pc_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      inds->data[i8] = (topTwoMetrics->data[1 + topTwoMetrics->size[0] * i8] <
                        1.0E-6F);
    }

    loop_ub = inds->size[1] - 1;
    features1_idx_0 = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (inds->data[i]) {
        features1_idx_0++;
      }
    }

    emxInit_int32_T(&b_st, &r6, 2, &wc_emlrtRTEI, true);
    i8 = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = features1_idx_0;
    emxEnsureCapacity_int32_T(&b_st, r6, i8, &rc_emlrtRTEI);
    features1_idx_0 = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (inds->data[i]) {
        r6->data[features1_idx_0] = i + 1;
        features1_idx_0++;
      }
    }

    loop_ub = topTwoMetrics->size[0];
    features1_idx_0 = r6->size[1];
    i = topTwoMetrics->size[1];
    for (i8 = 0; i8 < features1_idx_0; i8++) {
      for (i9 = 0; i9 < loop_ub; i9++) {
        i10 = r6->data[i8];
        if ((i10 < 1) || (i10 > i)) {
          emlrtDynamicBoundsCheckR2012b(i10, 1, i, &t_emlrtBCI, &b_st);
        }

        b_topTwoScores->data[i9 + b_topTwoScores->size[0] * (i10 - 1)] = 1.0F;
      }
    }

    emxFree_int32_T(&r6);
    i8 = b_topTwoScores->size[0];
    if (1 > i8) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i8, &q_emlrtBCI, &b_st);
    }

    i8 = b_topTwoScores->size[0];
    if (2 > i8) {
      emlrtDynamicBoundsCheckR2012b(2, 1, i8, &r_emlrtBCI, &b_st);
    }

    c_st.site = &jf_emlrtRSI;
    loop_ub = b_topTwoScores->size[1];
    i8 = topTwoScores->size[0] * topTwoScores->size[1];
    topTwoScores->size[0] = 1;
    topTwoScores->size[1] = loop_ub;
    emxEnsureCapacity_real32_T(&c_st, topTwoScores, i8, &tc_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      topTwoScores->data[i8] = b_topTwoScores->data[b_topTwoScores->size[0] * i8];
    }

    varargin_1[0] = (uint32_T)topTwoScores->size[0];
    varargin_1[1] = (uint32_T)topTwoScores->size[1];
    loop_ub = b_topTwoScores->size[1];
    i8 = topTwoScores->size[0] * topTwoScores->size[1];
    topTwoScores->size[0] = 1;
    topTwoScores->size[1] = loop_ub;
    emxEnsureCapacity_real32_T(&c_st, topTwoScores, i8, &vc_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      topTwoScores->data[i8] = b_topTwoScores->data[1 + b_topTwoScores->size[0] *
        i8];
    }

    varargin_2[0] = (uint32_T)topTwoScores->size[0];
    varargin_2[1] = (uint32_T)topTwoScores->size[1];
    p = false;
    b_p = true;
    features1_idx_0 = 0;
    exitg1 = false;
    while ((!exitg1) && (features1_idx_0 < 2)) {
      if ((int32_T)varargin_1[features1_idx_0] != (int32_T)
          varargin_2[features1_idx_0]) {
        b_p = false;
        exitg1 = true;
      } else {
        features1_idx_0++;
      }
    }

    if (b_p) {
      p = true;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &bi_emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    loop_ub = b_topTwoScores->size[1];
    i8 = inds->size[0] * inds->size[1];
    inds->size[0] = 1;
    inds->size[1] = loop_ub;
    emxEnsureCapacity_boolean_T(&b_st, inds, i8, &yc_emlrtRTEI);
    for (i8 = 0; i8 < loop_ub; i8++) {
      inds->data[i8] = (b_topTwoScores->data[b_topTwoScores->size[0] * i8] /
                        b_topTwoScores->data[1 + b_topTwoScores->size[0] * i8] <=
                        0.6);
    }

    emxFree_real32_T(&b_topTwoScores);
  } else {
    i8 = inds->size[0] * inds->size[1];
    inds->size[0] = 1;
    inds->size[1] = topTwoMetrics->size[1];
    emxEnsureCapacity_boolean_T(&st, inds, i8, &mc_emlrtRTEI);
    loop_ub = topTwoMetrics->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      inds->data[i8] = true;
    }
  }

  loop_ub = inds->size[1] - 1;
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      features1_idx_0++;
    }
  }

  emxInit_int32_T(&st, &r5, 2, &wc_emlrtRTEI, true);
  i8 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = features1_idx_0;
  emxEnsureCapacity_int32_T(&st, r5, i8, &oc_emlrtRTEI);
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      r5->data[features1_idx_0] = i + 1;
      features1_idx_0++;
    }
  }

  i8 = b_indexPairs->size[1];
  i9 = indexPairs->size[0] * indexPairs->size[1];
  indexPairs->size[0] = 2;
  indexPairs->size[1] = r5->size[1];
  emxEnsureCapacity_uint32_T(&st, indexPairs, i9, &qc_emlrtRTEI);
  loop_ub = r5->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    i10 = r5->data[i9];
    if ((i10 < 1) || (i10 > i8)) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, i8, &x_emlrtBCI, &st);
    }

    i = i9 << 1;
    indexPairs->data[i] = b_indexPairs->data[(i10 - 1) << 1];
    i10 = r5->data[i9];
    if ((i10 < 1) || (i10 > i8)) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, i8, &x_emlrtBCI, &st);
    }

    indexPairs->data[1 + i] = b_indexPairs->data[1 + ((i10 - 1) << 1)];
  }

  emxFree_int32_T(&r5);
  i8 = b_indexPairs->size[0] * b_indexPairs->size[1];
  b_indexPairs->size[0] = 2;
  b_indexPairs->size[1] = indexPairs->size[1];
  emxEnsureCapacity_uint32_T(&st, b_indexPairs, i8, &sc_emlrtRTEI);
  loop_ub = indexPairs->size[0] * indexPairs->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_indexPairs->data[i8] = indexPairs->data[i8];
  }

  i8 = topTwoMetrics->size[0];
  if (1 > i8) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i8, &o_emlrtBCI, &st);
  }

  loop_ub = inds->size[1] - 1;
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      features1_idx_0++;
    }
  }

  emxInit_int32_T(&st, &r7, 2, &wc_emlrtRTEI, true);
  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = features1_idx_0;
  emxEnsureCapacity_int32_T(&st, r7, i8, &oc_emlrtRTEI);
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (inds->data[i]) {
      r7->data[features1_idx_0] = i + 1;
      features1_idx_0++;
    }
  }

  emxFree_boolean_T(&inds);
  i = topTwoMetrics->size[1];
  i8 = topTwoScores->size[0] * topTwoScores->size[1];
  topTwoScores->size[0] = 1;
  topTwoScores->size[1] = r7->size[1];
  emxEnsureCapacity_real32_T(&st, topTwoScores, i8, &uc_emlrtRTEI);
  loop_ub = r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    i9 = r7->data[i8];
    if ((i9 < 1) || (i9 > i)) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, i, &u_emlrtBCI, &st);
    }

    topTwoScores->data[i8] = topTwoMetrics->data[topTwoMetrics->size[0] * (i9 -
      1)];
  }

  emxFree_real32_T(&topTwoMetrics);
  loop_ub = b_indexPairs->size[1] - 1;
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    features1_idx_0++;
  }

  emxInit_int32_T(sp, &r8, 2, &wc_emlrtRTEI, true);
  i8 = r8->size[0] * r8->size[1];
  r8->size[0] = 1;
  r8->size[1] = features1_idx_0;
  emxEnsureCapacity_int32_T(sp, r8, i8, &wc_emlrtRTEI);
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    r8->data[features1_idx_0] = i + 1;
    features1_idx_0++;
  }

  features1_idx_0 = b_indexPairs->size[1];
  i8 = indexPairs->size[0] * indexPairs->size[1];
  indexPairs->size[0] = 2;
  indexPairs->size[1] = r8->size[1];
  emxEnsureCapacity_uint32_T(sp, indexPairs, i8, &xc_emlrtRTEI);
  loop_ub = r8->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    i9 = r8->data[i8];
    if ((i9 < 1) || (i9 > features1_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, features1_idx_0, &y_emlrtBCI, sp);
    }

    i10 = i8 << 1;
    indexPairs->data[i10] = b_indexPairs->data[(i9 - 1) << 1];
    i9 = r8->data[i8];
    if ((i9 < 1) || (i9 > features1_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, features1_idx_0, &y_emlrtBCI, sp);
    }

    indexPairs->data[1 + i10] = b_indexPairs->data[1 + ((i9 - 1) << 1)];
  }

  emxFree_int32_T(&r8);
  loop_ub = b_indexPairs->size[1] - 1;
  features1_idx_0 = 0;
  emxFree_uint32_T(&b_indexPairs);
  for (i = 0; i <= loop_ub; i++) {
    features1_idx_0++;
  }

  emxInit_int32_T(sp, &r9, 2, &wc_emlrtRTEI, true);
  i8 = r9->size[0] * r9->size[1];
  r9->size[0] = 1;
  r9->size[1] = features1_idx_0;
  emxEnsureCapacity_int32_T(sp, r9, i8, &wc_emlrtRTEI);
  features1_idx_0 = 0;
  for (i = 0; i <= loop_ub; i++) {
    r9->data[features1_idx_0] = i + 1;
    features1_idx_0++;
  }

  emxInit_int32_T(sp, &r10, 1, &ad_emlrtRTEI, true);
  i8 = r10->size[0];
  r10->size[0] = r7->size[1];
  emxEnsureCapacity_int32_T(sp, r10, i8, &ad_emlrtRTEI);
  loop_ub = r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    r10->data[i8] = r7->data[i8];
  }

  emxFree_int32_T(&r7);
  i8 = r10->size[0];
  i9 = matchMetric->size[0] * matchMetric->size[1];
  matchMetric->size[0] = 1;
  matchMetric->size[1] = r9->size[1];
  emxEnsureCapacity_real32_T(sp, matchMetric, i9, &bd_emlrtRTEI);
  loop_ub = r9->size[1];
  emxFree_int32_T(&r10);
  for (i9 = 0; i9 < loop_ub; i9++) {
    i10 = r9->data[i9];
    if ((i10 < 1) || (i10 > i8)) {
      emlrtDynamicBoundsCheckR2012b(i10, 1, i8, &v_emlrtBCI, sp);
    }

    matchMetric->data[i9] = topTwoScores->data[i10 - 1];
  }

  emxFree_real32_T(&topTwoScores);
  emxFree_int32_T(&r9);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void normalizeX(const emlrtStack *sp, emxArray_real32_T *X)
{
  emxArray_real32_T *z1;
  int32_T i27;
  int32_T nx;
  int32_T k;
  emxArray_real32_T *Xnorm;
  int32_T npages;
  boolean_T overflow;
  int32_T xpageoffset;
  int32_T csz_idx_1;
  int32_T exponent;
  int32_T b_k;
  emxArray_int32_T *r21;
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
  emxInit_real32_T(sp, &z1, 2, &of_emlrtRTEI, true);
  st.site = &nc_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  c_st.site = &rc_emlrtRSI;
  i27 = z1->size[0] * z1->size[1];
  z1->size[0] = 64;
  z1->size[1] = X->size[1];
  emxEnsureCapacity_real32_T(&c_st, z1, i27, &lf_emlrtRTEI);
  d_st.site = &sc_emlrtRSI;
  nx = X->size[1] << 6;
  e_st.site = &tc_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    f_st.site = &mb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (k = 0; k < nx; k++) {
    z1->data[k] = X->data[k] * X->data[k];
  }

  st.site = &nc_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  c_st.site = &vc_emlrtRSI;
  d_st.site = &wc_emlrtRSI;
  emxInit_real32_T(&d_st, &Xnorm, 2, &ch_emlrtRTEI, true);
  if (z1->size[1] == 0) {
    Xnorm->size[0] = 1;
    Xnorm->size[1] = 0;
  } else {
    e_st.site = &xc_emlrtRSI;
    npages = z1->size[1];
    i27 = Xnorm->size[0] * Xnorm->size[1];
    Xnorm->size[0] = 1;
    Xnorm->size[1] = z1->size[1];
    emxEnsureCapacity_real32_T(&e_st, Xnorm, i27, &mf_emlrtRTEI);
    f_st.site = &bd_emlrtRSI;
    overflow = (z1->size[1] > 2147483646);
    if (overflow) {
      g_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (nx = 0; nx < npages; nx++) {
      xpageoffset = nx << 6;
      Xnorm->data[nx] = z1->data[xpageoffset];
      f_st.site = &ad_emlrtRSI;
      for (k = 0; k < 63; k++) {
        Xnorm->data[nx] += z1->data[(xpageoffset + k) + 1];
      }

      f_st.site = &yc_emlrtRSI;
    }
  }

  st.site = &nc_emlrtRSI;
  b_sqrt(&st, Xnorm);
  st.site = &oc_emlrtRSI;
  i27 = z1->size[0] * z1->size[1];
  z1->size[0] = 64;
  z1->size[1] = X->size[1];
  emxEnsureCapacity_real32_T(&st, z1, i27, &ah_emlrtRTEI);
  nx = X->size[0] * X->size[1];
  for (i27 = 0; i27 < nx; i27++) {
    z1->data[i27] = X->data[i27];
  }

  if (Xnorm->size[1] == 1) {
    csz_idx_1 = X->size[1];
  } else if (X->size[1] == 1) {
    csz_idx_1 = Xnorm->size[1];
  } else if (X->size[1] == Xnorm->size[1]) {
    csz_idx_1 = X->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &ri_emlrtRTEI,
      "MATLAB:bsxfun:arrayDimensionsMustMatch",
      "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }

  i27 = X->size[0] * X->size[1];
  X->size[0] = 64;
  X->size[1] = csz_idx_1;
  emxEnsureCapacity_real32_T(&st, X, i27, &bh_emlrtRTEI);
  if (X->size[1] != 0) {
    nx = (z1->size[1] != 1);
    csz_idx_1 = (Xnorm->size[1] != 1);
    i27 = X->size[1] - 1;
    for (k = 0; k <= i27; k++) {
      xpageoffset = nx * k;
      npages = csz_idx_1 * k;
      for (b_k = 0; b_k < 64; b_k++) {
        X->data[b_k + (k << 6)] = z1->data[b_k + (xpageoffset << 6)] /
          Xnorm->data[npages];
      }
    }
  }

  emxFree_real32_T(&z1);
  st.site = &pc_emlrtRSI;
  frexp(1.0, &exponent);
  npages = Xnorm->size[1] - 1;
  nx = 0;
  for (xpageoffset = 0; xpageoffset <= npages; xpageoffset++) {
    if (Xnorm->data[xpageoffset] <= 1.1920929E-7F) {
      nx++;
    }
  }

  emxInit_int32_T(sp, &r21, 2, &ub_emlrtRTEI, true);
  i27 = r21->size[0] * r21->size[1];
  r21->size[0] = 1;
  r21->size[1] = nx;
  emxEnsureCapacity_int32_T(sp, r21, i27, &ub_emlrtRTEI);
  nx = 0;
  for (xpageoffset = 0; xpageoffset <= npages; xpageoffset++) {
    if (Xnorm->data[xpageoffset] <= 1.1920929E-7F) {
      r21->data[nx] = xpageoffset + 1;
      nx++;
    }
  }

  emxFree_real32_T(&Xnorm);
  nx = r21->size[1];
  i27 = X->size[1];
  for (xpageoffset = 0; xpageoffset < nx; xpageoffset++) {
    for (npages = 0; npages < 64; npages++) {
      csz_idx_1 = r21->data[xpageoffset];
      if ((csz_idx_1 < 1) || (csz_idx_1 > i27)) {
        emlrtDynamicBoundsCheckR2012b(csz_idx_1, 1, i27, &tb_emlrtBCI, sp);
      }

      X->data[npages + ((csz_idx_1 - 1) << 6)] = 0.0F;
    }
  }

  emxFree_int32_T(&r21);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cvalgMatchFeatures.c) */
