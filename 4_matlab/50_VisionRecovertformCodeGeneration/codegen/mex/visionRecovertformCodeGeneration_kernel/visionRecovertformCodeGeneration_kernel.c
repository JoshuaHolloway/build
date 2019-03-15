/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * visionRecovertformCodeGeneration_kernel.c
 *
 * Code generation for function 'visionRecovertformCodeGeneration_kernel'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "imwarp.h"
#include "error.h"
#include "isequal.h"
#include "det.h"
#include "validateattributes.h"
#include "warning.h"
#include "norm.h"
#include "colon.h"
#include "xgetrf.h"
#include "estimateGeometricTransform.h"
#include "matchFeatures.h"
#include "extractFeatures.h"
#include "detectSURFFeatures.h"
#include "visionRecovertformCodeGeneration_kernel_mexutil.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11,    /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 15,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 16,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 19,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 29,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 33,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 37,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 42,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 41,  /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 173,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 174,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 177,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 180,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 183,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 14, /* lineNo */
  "eml_ipiv2perm",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_ipiv2perm.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 76, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 77, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 45,    /* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 11,  /* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 24,/* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 5, /* lineNo */
  5,                                   /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 15,/* lineNo */
  21,                                  /* colNo */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 382,/* lineNo */
  17,                                  /* colNo */
  "imref2d",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 360,/* lineNo */
  17,                                  /* colNo */
  "imref2d",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 14,/* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  384,                                 /* lineNo */
  13,                                  /* colNo */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  384,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  11,                                  /* colNo */
  "Tinv",                              /* aName */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  46,                                  /* colNo */
  "validPtsOriginal.Location",         /* aName */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  47,                                  /* colNo */
  "validPtsDistorted.Location",        /* aName */
  "visionRecovertformCodeGeneration_kernel",/* fName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo mm_emlrtRSI = { 45, /* lineNo */
  "visionRecovertformCodeGeneration_kernel",/* fcnName */
  "C:\\dev\\build\\4_matlab\\50_VisionRecovertformCodeGeneration\\visionRecovertformCodeGeneration_kernel.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real32_T *u);
static const mxArray *c_emlrt_marshallOut(const emxArray_real32_T *u);
static void c_featureMatchingVisualization_(const emlrtStack *sp, const mxArray *
  b, const mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f,
  const mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j,
  emlrtMCInfo *location);
static const mxArray *emlrt_marshallOut(const emxArray_uint8_T *u);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real32_T *u)
{
  const mxArray *y;
  const mxArray *m16;
  real32_T *pData;
  int32_T i24;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m16 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxSINGLE_CLASS,
    mxREAL);
  pData = (real32_T *)emlrtMxGetData(m16);
  i24 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i24] = u->data[b_i + u->size[0] * i];
      i24++;
    }
  }

  emlrtAssign(&y, m16);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real32_T *u)
{
  const mxArray *y;
  const mxArray *m17;
  real32_T *pData;
  int32_T i25;
  int32_T i;
  y = NULL;
  m17 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxSINGLE_CLASS,
    mxREAL);
  pData = (real32_T *)emlrtMxGetData(m17);
  i25 = 0;
  for (i = 0; i < u->size[0]; i++) {
    pData[i25] = u->data[i];
    i25++;
  }

  for (i = 0; i < u->size[0]; i++) {
    pData[i25] = u->data[i + u->size[0]];
    i25++;
  }

  emlrtAssign(&y, m17);
  return y;
}

static void c_featureMatchingVisualization_(const emlrtStack *sp, const mxArray *
  b, const mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f,
  const mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[9];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  emlrtCallMATLABR2012b(sp, 0, NULL, 9, pArrays,
                        "featureMatchingVisualization_extrinsic", true, location);
}

static const mxArray *emlrt_marshallOut(const emxArray_uint8_T *u)
{
  const mxArray *y;
  const mxArray *m15;
  uint8_T *pData;
  int32_T i23;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m15 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m15);
  i23 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i23] = u->data[b_i + u->size[0] * i];
      i23++;
    }
  }

  emlrtAssign(&y, m15);
  return y;
}

void visionRecovertformCodeGeneration_kernel(const emlrtStack *sp, const
  emxArray_uint8_T *original, const emxArray_uint8_T *distorted,
  emxArray_real32_T *matchedOriginal, emxArray_real32_T *matchedDistorted,
  real32_T *thetaRecovered, real32_T *scaleRecovered, emxArray_uint8_T
  *recovered)
{
  emxArray_real32_T *ptsOriginal_pLocation;
  vision_internal_SURFPoints_cg expl_temp;
  int32_T i;
  int32_T loop_ub;
  emxArray_real32_T *ptsOriginal_pMetric;
  emxArray_real32_T *ptsOriginal_pScale;
  emxArray_int8_T *ptsOriginal_pSignOfLaplacian;
  emxArray_real32_T *ptsDistorted_pLocation;
  emxArray_real32_T *ptsDistorted_pMetric;
  emxArray_real32_T *ptsDistorted_pScale;
  emxArray_int8_T *ptsDistorted_pSignOfLaplacian;
  emxArray_real32_T *featuresOriginal;
  emxArray_real32_T *validPtsOriginal_pLocation;
  emxArray_real32_T *featuresDistorted;
  emxArray_uint32_T *indexPairs;
  int32_T pipk;
  int32_T j;
  emxArray_real32_T *inlierDistorted;
  emxArray_real32_T *inlierOriginal;
  real_T tform_Dimensionality;
  real32_T tform_T_data[12];
  int32_T tform_T_size[2];
  int32_T tinv_size[2];
  int32_T n;
  real32_T tinv_data[9];
  int32_T t_size[2];
  int8_T tmp_data[3];
  int32_T iv0[1];
  real32_T t_data[12];
  int32_T iv1[1];
  int32_T ipiv_data[3];
  int32_T ipiv_size[2];
  real32_T x_data[9];
  static const int8_T iv2[3] = { 0, 0, 1 };

  int32_T p_data[3];
  int32_T p_size[2];
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  real32_T n1x;
  int8_T input_sizes_idx_1;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  int32_T tinv_data_tmp;
  ptrdiff_t ldb_t;
  int32_T b_t_size[1];
  real32_T b_t_data[3];
  real32_T n1xinv;
  real32_T rc;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv3[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  char_T cv1[14];
  int16_T imageSizeIn[2];
  real_T outputView_ImageSizeAlias[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T(sp, &ptsOriginal_pLocation, 2, &emlrtRTEI, true);
  c_emxInitStruct_vision_internal(sp, &expl_temp, &emlrtRTEI, true);

  /*  Kernel for Feature Matching and Registration */
  /*  Step 1: Find Matching Features Between Images */
  st.site = &emlrtRSI;
  detectSURFFeatures(&st, original, &expl_temp);
  i = ptsOriginal_pLocation->size[0] * ptsOriginal_pLocation->size[1];
  ptsOriginal_pLocation->size[0] = expl_temp.pLocation->size[0];
  ptsOriginal_pLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, ptsOriginal_pLocation, i, &emlrtRTEI);
  loop_ub = expl_temp.pLocation->size[0] * expl_temp.pLocation->size[1];
  for (i = 0; i < loop_ub; i++) {
    ptsOriginal_pLocation->data[i] = expl_temp.pLocation->data[i];
  }

  emxInit_real32_T(sp, &ptsOriginal_pMetric, 1, &emlrtRTEI, true);
  i = ptsOriginal_pMetric->size[0];
  ptsOriginal_pMetric->size[0] = expl_temp.pMetric->size[0];
  emxEnsureCapacity_real32_T(sp, ptsOriginal_pMetric, i, &emlrtRTEI);
  loop_ub = expl_temp.pMetric->size[0];
  for (i = 0; i < loop_ub; i++) {
    ptsOriginal_pMetric->data[i] = expl_temp.pMetric->data[i];
  }

  emxInit_real32_T(sp, &ptsOriginal_pScale, 1, &emlrtRTEI, true);
  i = ptsOriginal_pScale->size[0];
  ptsOriginal_pScale->size[0] = expl_temp.pScale->size[0];
  emxEnsureCapacity_real32_T(sp, ptsOriginal_pScale, i, &emlrtRTEI);
  loop_ub = expl_temp.pScale->size[0];
  for (i = 0; i < loop_ub; i++) {
    ptsOriginal_pScale->data[i] = expl_temp.pScale->data[i];
  }

  emxInit_int8_T(sp, &ptsOriginal_pSignOfLaplacian, 1, &emlrtRTEI, true);
  i = ptsOriginal_pSignOfLaplacian->size[0];
  ptsOriginal_pSignOfLaplacian->size[0] = expl_temp.pSignOfLaplacian->size[0];
  emxEnsureCapacity_int8_T(sp, ptsOriginal_pSignOfLaplacian, i, &emlrtRTEI);
  loop_ub = expl_temp.pSignOfLaplacian->size[0];
  for (i = 0; i < loop_ub; i++) {
    ptsOriginal_pSignOfLaplacian->data[i] = expl_temp.pSignOfLaplacian->data[i];
  }

  emxInit_real32_T(sp, &ptsDistorted_pLocation, 2, &b_emlrtRTEI, true);
  st.site = &b_emlrtRSI;
  detectSURFFeatures(&st, distorted, &expl_temp);
  i = ptsDistorted_pLocation->size[0] * ptsDistorted_pLocation->size[1];
  ptsDistorted_pLocation->size[0] = expl_temp.pLocation->size[0];
  ptsDistorted_pLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, ptsDistorted_pLocation, i, &b_emlrtRTEI);
  loop_ub = expl_temp.pLocation->size[0] * expl_temp.pLocation->size[1];
  for (i = 0; i < loop_ub; i++) {
    ptsDistorted_pLocation->data[i] = expl_temp.pLocation->data[i];
  }

  emxInit_real32_T(sp, &ptsDistorted_pMetric, 1, &b_emlrtRTEI, true);
  i = ptsDistorted_pMetric->size[0];
  ptsDistorted_pMetric->size[0] = expl_temp.pMetric->size[0];
  emxEnsureCapacity_real32_T(sp, ptsDistorted_pMetric, i, &b_emlrtRTEI);
  loop_ub = expl_temp.pMetric->size[0];
  for (i = 0; i < loop_ub; i++) {
    ptsDistorted_pMetric->data[i] = expl_temp.pMetric->data[i];
  }

  emxInit_real32_T(sp, &ptsDistorted_pScale, 1, &b_emlrtRTEI, true);
  i = ptsDistorted_pScale->size[0];
  ptsDistorted_pScale->size[0] = expl_temp.pScale->size[0];
  emxEnsureCapacity_real32_T(sp, ptsDistorted_pScale, i, &b_emlrtRTEI);
  loop_ub = expl_temp.pScale->size[0];
  for (i = 0; i < loop_ub; i++) {
    ptsDistorted_pScale->data[i] = expl_temp.pScale->data[i];
  }

  emxInit_int8_T(sp, &ptsDistorted_pSignOfLaplacian, 1, &b_emlrtRTEI, true);
  i = ptsDistorted_pSignOfLaplacian->size[0];
  ptsDistorted_pSignOfLaplacian->size[0] = expl_temp.pSignOfLaplacian->size[0];
  emxEnsureCapacity_int8_T(sp, ptsDistorted_pSignOfLaplacian, i, &b_emlrtRTEI);
  loop_ub = expl_temp.pSignOfLaplacian->size[0];
  for (i = 0; i < loop_ub; i++) {
    ptsDistorted_pSignOfLaplacian->data[i] = expl_temp.pSignOfLaplacian->data[i];
  }

  emxInit_real32_T(sp, &featuresOriginal, 2, &h_emlrtRTEI, true);
  emxInit_real32_T(sp, &validPtsOriginal_pLocation, 2, &i_emlrtRTEI, true);

  /*  Extract feature descriptors. */
  st.site = &c_emlrtRSI;
  extractFeatures(&st, original, ptsOriginal_pLocation, ptsOriginal_pMetric,
                  ptsOriginal_pScale, ptsOriginal_pSignOfLaplacian,
                  featuresOriginal, &expl_temp);
  i = validPtsOriginal_pLocation->size[0] * validPtsOriginal_pLocation->size[1];
  validPtsOriginal_pLocation->size[0] = expl_temp.pLocation->size[0];
  validPtsOriginal_pLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, validPtsOriginal_pLocation, i, &c_emlrtRTEI);
  loop_ub = expl_temp.pLocation->size[0] * expl_temp.pLocation->size[1];
  emxFree_int8_T(&ptsOriginal_pSignOfLaplacian);
  emxFree_real32_T(&ptsOriginal_pScale);
  emxFree_real32_T(&ptsOriginal_pMetric);
  for (i = 0; i < loop_ub; i++) {
    validPtsOriginal_pLocation->data[i] = expl_temp.pLocation->data[i];
  }

  emxInit_real32_T(sp, &featuresDistorted, 2, &h_emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  extractFeatures(&st, distorted, ptsDistorted_pLocation, ptsDistorted_pMetric,
                  ptsDistorted_pScale, ptsDistorted_pSignOfLaplacian,
                  featuresDistorted, &expl_temp);
  i = ptsOriginal_pLocation->size[0] * ptsOriginal_pLocation->size[1];
  ptsOriginal_pLocation->size[0] = expl_temp.pLocation->size[0];
  ptsOriginal_pLocation->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, ptsOriginal_pLocation, i, &d_emlrtRTEI);
  loop_ub = expl_temp.pLocation->size[0] * expl_temp.pLocation->size[1];
  emxFree_int8_T(&ptsDistorted_pSignOfLaplacian);
  emxFree_real32_T(&ptsDistorted_pScale);
  emxFree_real32_T(&ptsDistorted_pMetric);
  emxFree_real32_T(&ptsDistorted_pLocation);
  for (i = 0; i < loop_ub; i++) {
    ptsOriginal_pLocation->data[i] = expl_temp.pLocation->data[i];
  }

  c_emxFreeStruct_vision_internal(&expl_temp);
  emxInit_uint32_T(sp, &indexPairs, 2, &g_emlrtRTEI, true);

  /*  Match features by using their descriptors. */
  st.site = &e_emlrtRSI;
  matchFeatures(&st, featuresOriginal, featuresDistorted, indexPairs);

  /*  Retrieve locations of corresponding points for each image. */
  /*  Note that indexing into the object is not supported in code-generation mode. */
  /*  Instead, you can directly access the Location property. */
  pipk = validPtsOriginal_pLocation->size[0];
  loop_ub = indexPairs->size[0];
  i = matchedOriginal->size[0] * matchedOriginal->size[1];
  matchedOriginal->size[0] = loop_ub;
  matchedOriginal->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, matchedOriginal, i, &e_emlrtRTEI);
  emxFree_real32_T(&featuresDistorted);
  emxFree_real32_T(&featuresOriginal);
  for (i = 0; i < loop_ub; i++) {
    j = (int32_T)indexPairs->data[i];
    if ((j < 1) || (j > pipk)) {
      emlrtDynamicBoundsCheckR2012b(j, 1, pipk, &d_emlrtBCI, sp);
    }

    matchedOriginal->data[i] = validPtsOriginal_pLocation->data[j - 1];
  }

  for (i = 0; i < loop_ub; i++) {
    j = (int32_T)indexPairs->data[i];
    if ((j < 1) || (j > pipk)) {
      emlrtDynamicBoundsCheckR2012b(j, 1, pipk, &d_emlrtBCI, sp);
    }

    matchedOriginal->data[i + matchedOriginal->size[0]] =
      validPtsOriginal_pLocation->data[(j + validPtsOriginal_pLocation->size[0])
      - 1];
  }

  emxFree_real32_T(&validPtsOriginal_pLocation);
  pipk = ptsOriginal_pLocation->size[0];
  loop_ub = indexPairs->size[0];
  i = matchedDistorted->size[0] * matchedDistorted->size[1];
  matchedDistorted->size[0] = loop_ub;
  matchedDistorted->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, matchedDistorted, i, &f_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    j = (int32_T)indexPairs->data[i + indexPairs->size[0]];
    if ((j < 1) || (j > pipk)) {
      emlrtDynamicBoundsCheckR2012b(j, 1, pipk, &e_emlrtBCI, sp);
    }

    matchedDistorted->data[i] = ptsOriginal_pLocation->data[j - 1];
  }

  for (i = 0; i < loop_ub; i++) {
    j = (int32_T)indexPairs->data[i + indexPairs->size[0]];
    if ((j < 1) || (j > pipk)) {
      emlrtDynamicBoundsCheckR2012b(j, 1, pipk, &e_emlrtBCI, sp);
    }

    matchedDistorted->data[i + matchedDistorted->size[0]] =
      ptsOriginal_pLocation->data[(j + ptsOriginal_pLocation->size[0]) - 1];
  }

  emxFree_uint32_T(&indexPairs);
  emxFree_real32_T(&ptsOriginal_pLocation);
  emxInit_real32_T(sp, &inlierDistorted, 2, &h_emlrtRTEI, true);
  emxInit_real32_T(sp, &inlierOriginal, 2, &h_emlrtRTEI, true);

  /*  Step 2: Estimate Transformation */
  /*  Defaults to RANSAC */
  st.site = &f_emlrtRSI;
  estimateGeometricTransform(&st, matchedDistorted, matchedOriginal,
    &tform_Dimensionality, tform_T_data, tform_T_size, inlierDistorted,
    inlierOriginal);

  /*  Step 3: Solve for Scale and Angle */
  st.site = &g_emlrtRSI;
  b_st.site = &jk_emlrtRSI;
  c_st.site = &kk_emlrtRSI;
  if (tform_T_size[0] != tform_T_size[1]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ph_emlrtRTEI, "Coder:MATLAB:square",
      "Coder:MATLAB:square", 0);
  }

  if (tform_T_size[0] == 0) {
    tinv_size[0] = 0;
    tinv_size[1] = tform_T_size[1];
  } else {
    d_st.site = &lk_emlrtRSI;
    n = tform_T_size[0];
    tinv_size[0] = tform_T_size[0];
    tinv_size[1] = tform_T_size[1];
    pipk = tform_T_size[0] * tform_T_size[1];
    if (0 <= pipk - 1) {
      memset(&tinv_data[0], 0, (uint32_T)(pipk * (int32_T)sizeof(real32_T)));
    }

    t_size[0] = tform_T_size[0];
    t_size[1] = tform_T_size[1];
    if (0 <= pipk - 1) {
      memcpy(&t_data[0], &tform_T_data[0], (uint32_T)(pipk * (int32_T)sizeof
              (real32_T)));
    }

    e_st.site = &nk_emlrtRSI;
    xgetrf(&e_st, tform_T_size[0], tform_T_size[0], t_data, t_size,
           tform_T_size[0], ipiv_data, ipiv_size);
    loop_ub = t_size[0] * t_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&x_data[0], &t_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real32_T)));
    }

    e_st.site = &ok_emlrtRSI;
    f_st.site = &tk_emlrtRSI;
    g_st.site = &tj_emlrtRSI;
    h_st.site = &uj_emlrtRSI;
    i_st.site = &vj_emlrtRSI;
    eml_signed_integer_colon(&i_st, tform_T_size[0], p_data, p_size);
    i = ipiv_size[1];
    for (k = 0; k < i; k++) {
      if (ipiv_data[k] > 1 + k) {
        pipk = p_data[ipiv_data[k] - 1];
        p_data[ipiv_data[k] - 1] = p_data[k];
        p_data[k] = pipk;
      }
    }

    e_st.site = &pk_emlrtRSI;
    for (k = 0; k < n; k++) {
      pipk = tinv_size[0] * (p_data[k] - 1);
      tinv_data[k + pipk] = 1.0F;
      e_st.site = &qk_emlrtRSI;
      for (j = k + 1; j <= n; j++) {
        if (tinv_data[(j + pipk) - 1] != 0.0F) {
          loop_ub = j + 1;
          e_st.site = &rk_emlrtRSI;
          for (i = loop_ub; i <= n; i++) {
            tinv_data_tmp = (i + pipk) - 1;
            tinv_data[tinv_data_tmp] -= tinv_data[(j + tinv_size[0] * (p_data[k]
              - 1)) - 1] * t_data[(i + t_size[0] * (j - 1)) - 1];
          }
        }
      }
    }

    e_st.site = &sk_emlrtRSI;
    f_st.site = &uk_emlrtRSI;
    f_st.site = &vk_emlrtRSI;
    n1x = 1.0F;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)tform_T_size[0];
    n_t = (ptrdiff_t)tform_T_size[0];
    lda_t = (ptrdiff_t)tform_T_size[0];
    ldb_t = (ptrdiff_t)tform_T_size[0];
    strsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &n1x, &x_data[0],
          &lda_t, &tinv_data[0], &ldb_t);
    d_st.site = &mk_emlrtRSI;
    n1x = b_norm(tform_T_data, tform_T_size);
    n1xinv = b_norm(tinv_data, tinv_size);
    rc = 1.0F / (n1x * n1xinv);
    if ((n1x == 0.0F) || (n1xinv == 0.0F) || (rc == 0.0F)) {
      e_st.site = &wk_emlrtRSI;
      warning(&e_st);
    } else {
      if (muSingleScalarIsNaN(rc) || (rc < 1.1920929E-7F)) {
        e_st.site = &xk_emlrtRSI;
        y = NULL;
        m0 = emlrtCreateCharArray(2, iv3);
        emlrtInitCharArrayR2013a(&e_st, 6, m0, &rfmt[0]);
        emlrtAssign(&y, m0);
        f_st.site = &pm_emlrtRSI;
        emlrt_marshallIn(&f_st, b_sprintf(&f_st, y, d_emlrt_marshallOut(rc),
          &e_emlrtMCI), "sprintf", cv1);
        e_st.site = &xk_emlrtRSI;
        b_warning(&e_st, cv1);
      }
    }
  }

  loop_ub = (int8_T)tinv_size[0] - 1;
  for (i = 0; i <= loop_ub; i++) {
    tmp_data[i] = (int8_T)i;
  }

  if (tinv_size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(tinv_size[1], 1, tinv_size[1], &b_emlrtBCI,
      &b_st);
  }

  iv0[0] = (int8_T)tinv_size[0];
  iv1[0] = 3;
  emlrtSubAssignSizeCheckR2012b(&iv0[0], 1, &iv1[0], 1, &emlrtECI, &b_st);
  loop_ub = (int8_T)tinv_size[0];
  for (i = 0; i < loop_ub; i++) {
    tinv_data[tmp_data[i] + tinv_size[0] * (tinv_size[1] - 1)] = iv2[i];
  }

  b_st.site = &jk_emlrtRSI;
  ipiv_size[0] = tinv_size[0];
  ipiv_size[1] = tinv_size[1];
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((int8_T)ipiv_size[k] != 3 - k) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    c_st.site = &gk_emlrtRSI;
    d_st.site = &eh_emlrtRSI;
    e_st.site = &hf_emlrtRSI;
    if ((tinv_size[0] == 3) || (tinv_size[0] == 0)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&e_st, &mh_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (tinv_size[0] != 0) {
      input_sizes_idx_1 = (int8_T)tinv_size[1];
    } else {
      input_sizes_idx_1 = 0;
    }

    if (tinv_size[0] != 0) {
      pipk = (int8_T)tinv_size[1];
    } else {
      pipk = 0;
    }

    t_size[0] = 3;
    t_size[1] = input_sizes_idx_1 + 1;
    loop_ub = input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      j = tinv_size[0] * i;
      t_data[3 * i] = tinv_data[j];
      t_data[1 + 3 * i] = tinv_data[1 + j];
      t_data[2 + 3 * i] = tinv_data[2 + j];
    }

    t_data[3 * pipk] = 0.0F;
    t_data[1 + 3 * pipk] = 0.0F;
    t_data[2 + 3 * pipk] = 1.0F;
  } else {
    t_size[0] = tinv_size[0];
    t_size[1] = tinv_size[1];
    loop_ub = tinv_size[0] * tinv_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&t_data[0], &tinv_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real32_T)));
    }
  }

  c_st.site = &hk_emlrtRSI;
  validateattributes(&c_st, t_data, t_size);
  c_st.site = &ik_emlrtRSI;
  n1x = det(&c_st, t_data, t_size);
  p = false;
  b_p = true;
  if (!(n1x == 0.0F)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oh_emlrtRTEI,
      "images:geotrans:singularTransformationMatrix",
      "images:geotrans:singularTransformationMatrix", 0);
  }

  if (3 > t_size[1]) {
    emlrtDynamicBoundsCheckR2012b(3, 1, t_size[1], &emlrtBCI, &b_st);
  }

  loop_ub = t_size[0];
  b_t_size[0] = t_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_t_data[i] = t_data[i + (t_size[0] << 1)];
  }

  if (!isequal(b_t_data, b_t_size, dv0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &nh_emlrtRTEI,
      "images:geotrans:invalidAffineMatrix",
      "images:geotrans:invalidAffineMatrix", 0);
  }

  if (2 > t_size[0]) {
    emlrtDynamicBoundsCheckR2012b(2, 1, t_size[0], &c_emlrtBCI, sp);
  }

  st.site = &h_emlrtRSI;
  *scaleRecovered = t_data[1] * t_data[1] + t_data[0] * t_data[0];
  if (*scaleRecovered < 0.0F) {
    b_st.site = &cd_emlrtRSI;
    error(&b_st);
  }

  *scaleRecovered = muSingleScalarSqrt(*scaleRecovered);
  *thetaRecovered = muSingleScalarAtan2(t_data[1], t_data[0]) * 180.0F /
    3.14159274F;

  /*  Step 4: Recover the original image by transforming the distorted image. */
  st.site = &j_emlrtRSI;
  imageSizeIn[0] = (int16_T)original->size[0];
  imageSizeIn[1] = (int16_T)original->size[1];
  b_st.site = &yk_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (imageSizeIn[k] > 0) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&c_st, &lh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedPositive",
      "MATLAB:imref2d:expectedPositive", 3, 4, 9, "ImageSize");
  }

  c_st.site = &q_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  outputView_ImageSizeAlias[0] = imageSizeIn[0];
  outputView_ImageSizeAlias[1] = imageSizeIn[1];
  b_st.site = &al_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  if (0.5 + (real_T)imageSizeIn[1] <= 0.5) {
    emlrtErrorWithMessageIdR2018a(&b_st, &kh_emlrtRTEI,
      "images:spatialref:expectedAscendingLimits",
      "images:spatialref:expectedAscendingLimits", 3, 4, 12, "XWorldLimits");
  }

  b_st.site = &bl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  if (0.5 + (real_T)imageSizeIn[0] <= 0.5) {
    emlrtErrorWithMessageIdR2018a(&b_st, &jh_emlrtRTEI,
      "images:spatialref:expectedAscendingLimits",
      "images:spatialref:expectedAscendingLimits", 3, 4, 12, "YWorldLimits");
  }

  st.site = &i_emlrtRSI;
  imwarp(&st, distorted, tform_T_data, tform_T_size, outputView_ImageSizeAlias,
         recovered);

  /*  Step 5: Display results */
  st.site = &mm_emlrtRSI;
  c_featureMatchingVisualization_(&st, emlrt_marshallOut(original),
    emlrt_marshallOut(distorted), emlrt_marshallOut(recovered),
    b_emlrt_marshallOut(inlierOriginal), b_emlrt_marshallOut(inlierDistorted),
    c_emlrt_marshallOut(matchedOriginal), c_emlrt_marshallOut(matchedDistorted),
    d_emlrt_marshallOut(*scaleRecovered), d_emlrt_marshallOut(*thetaRecovered),
    &emlrtMCI);
  emxFree_real32_T(&inlierOriginal);
  emxFree_real32_T(&inlierDistorted);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (visionRecovertformCodeGeneration_kernel.c) */
