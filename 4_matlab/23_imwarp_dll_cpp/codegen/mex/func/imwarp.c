/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imwarp.c
 *
 * Code generation for function 'imwarp'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "func.h"
#include "imwarp.h"
#include "func_emxutil.h"
#include "det.h"
#include "validateattributes.h"
#include "warning.h"
#include "norm.h"
#include "mrdivide_helper.h"
#include "imref2d.h"
#include "func_data.h"
#include "libmwippgeotrans.h"

/* Variable Definitions */
static emlrtRSInfo i_emlrtRSI = { 13,  /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 120, /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 136, /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 397, /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 354, /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 24,  /* lineNo */
  "applyGeometricTransformToSpatialRef",/* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+spatialref\\+internal\\applyGeometricTransformToSpatialRef.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 50,  /* lineNo */
  "snapWorldLimitsToSatisfyResolution",/* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+spatialref\\+internal\\snapWorldLimitsToSatisfyResolution.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 128, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 185, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 190, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 204, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 205, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 354, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 376, /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 164,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 521,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 522,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 546,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 114,/* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 362,/* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 367,/* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 284,/* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 383,/* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 31, /* lineNo */
  "ippgeotrans",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\ippgeotrans.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 546, /* lineNo */
  23,                                  /* colNo */
  "imwarp",                            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 196,/* lineNo */
  25,                                  /* colNo */
  "imref2d",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 200,/* lineNo */
  25,                                  /* colNo */
  "imref2d",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 360,/* lineNo */
  17,                                  /* colNo */
  "imref2d",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 382,/* lineNo */
  17,                                  /* colNo */
  "imref2d",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 367,/* lineNo */
  13,                                  /* colNo */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 371,/* lineNo */
  13,                                  /* colNo */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pName */
};

static emlrtRSInfo sb_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 2, pArrays, "sprintf", true,
    location);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

void imwarp(const emlrtStack *sp, const real_T varargin_1[262144], const real_T
            varargin_2_T[9], emxArray_real_T *outputImage)
{
  boolean_T p;
  int32_T p1;
  boolean_T exitg1;
  real_T absx21;
  real_T absx31;
  real_T absx11;
  static const real_T b_varargin_1[9] = { 0.75, 128.75, 256.75, 256.75, 384.75,
    512.75, 512.75, 640.75, 768.75 };

  int32_T numCols;
  int32_T numRows;
  real_T xNudge;
  static const real_T c_varargin_1[9] = { 0.5, 256.5, 512.5, 0.5, 256.5, 512.5,
    0.5, 256.5, 512.5 };

  real_T yNudge;
  real_T XWorldLimitsOut[2];
  real_T YWorldLimitsOut[2];
  int16_T outputImageSize[2];
  real_T outputRef_ImageSizeAlias[2];
  real_T t[9];
  int32_T p2;
  real_T tinv[9];
  real_T a[9];
  int32_T p3;
  static const int8_T b_a[9] = { 1, 0, 1, 0, 1, 1, 0, 0, 1 };

  static const int8_T b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static const int8_T b_b[9] = { 1, 0, -1, 0, 1, -1, 0, 0, 1 };

  boolean_T b_p;
  static const int8_T varargin_2[3] = { 0, 0, 1 };

  int32_T itmp;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  const mxArray *m1;
  char_T cv0[14];
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
  st.site = &i_emlrtRSI;
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
  b_st.site = &l_emlrtRSI;
  c_st.site = &m_emlrtRSI;
  p = true;
  p1 = 0;
  exitg1 = false;
  while ((!exitg1) && (p1 < 262144)) {
    if ((!muDoubleScalarIsInf(varargin_1[p1])) && (!muDoubleScalarIsNaN
         (varargin_1[p1]))) {
      p1++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedFinite",
      "MATLAB:imwarp:expectedFinite", 3, 4, 18, "input number 1, A,");
  }

  c_st.site = &m_emlrtRSI;
  p = true;
  p1 = 0;
  exitg1 = false;
  while ((!exitg1) && (p1 < 262144)) {
    if (!muDoubleScalarIsNaN(varargin_1[p1])) {
      p1++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonNaN",
      "MATLAB:imwarp:expectedNonNaN", 3, 4, 18, "input number 1, A,");
  }

  st.site = &j_emlrtRSI;
  b_st.site = &n_emlrtRSI;
  absx21 = 0.75;
  absx31 = 0.5;
  for (p1 = 0; p1 < 8; p1++) {
    absx11 = b_varargin_1[p1 + 1];
    if (absx21 < absx11) {
      absx21 = absx11;
    }

    absx11 = c_varargin_1[p1 + 1];
    if (absx31 < absx11) {
      absx31 = absx11;
    }
  }

  c_st.site = &o_emlrtRSI;
  numCols = (int32_T)muDoubleScalarCeil(absx21 - 0.75);
  numRows = (int32_T)muDoubleScalarCeil(absx31 - 0.5);
  xNudge = ((real_T)numCols - (absx21 - 0.75)) / 2.0;
  yNudge = ((real_T)numRows - (absx31 - 0.5)) / 2.0;
  XWorldLimitsOut[0] = 0.75 + -xNudge;
  YWorldLimitsOut[0] = 0.5 + -yNudge;
  XWorldLimitsOut[1] = absx21 + xNudge;
  YWorldLimitsOut[1] = absx31 + yNudge;
  outputImageSize[0] = (int16_T)numRows;
  outputImageSize[1] = (int16_T)numCols;
  d_st.site = &p_emlrtRSI;
  e_st.site = &q_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  p = true;
  p1 = 0;
  exitg1 = false;
  while ((!exitg1) && (p1 < 2)) {
    if (outputImageSize[p1] > 0) {
      p1++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&f_st, &h_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedPositive",
      "MATLAB:imref2d:expectedPositive", 3, 4, 9, "ImageSize");
  }

  f_st.site = &m_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  e_st.site = &r_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  e_st.site = &s_emlrtRSI;
  f_st.site = &m_emlrtRSI;
  if (XWorldLimitsOut[1] <= 0.75 + -xNudge) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "images:spatialref:expectedAscendingLimits",
      "images:spatialref:expectedAscendingLimits", 3, 4, 12, "xWorldLimits");
  }

  if (YWorldLimitsOut[1] <= 0.5 + -yNudge) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "images:spatialref:expectedAscendingLimits",
      "images:spatialref:expectedAscendingLimits", 3, 4, 12, "yWorldLimits");
  }

  outputRef_ImageSizeAlias[0] = numRows;
  outputRef_ImageSizeAlias[1] = numCols;
  e_st.site = &t_emlrtRSI;
  f_st.site = &v_emlrtRSI;
  g_st.site = &m_emlrtRSI;
  if (XWorldLimitsOut[1] <= 0.75 + -xNudge) {
    emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI,
      "images:spatialref:expectedAscendingLimits",
      "images:spatialref:expectedAscendingLimits", 3, 4, 12, "XWorldLimits");
  }

  e_st.site = &u_emlrtRSI;
  f_st.site = &w_emlrtRSI;
  g_st.site = &m_emlrtRSI;
  if (YWorldLimitsOut[1] <= 0.5 + -yNudge) {
    emlrtErrorWithMessageIdR2018a(&e_st, &j_emlrtRTEI,
      "images:spatialref:expectedAscendingLimits",
      "images:spatialref:expectedAscendingLimits", 3, 4, 12, "YWorldLimits");
  }

  st.site = &k_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  absx11 = imref2d_get_PixelExtentInWorldX(XWorldLimitsOut,
    outputRef_ImageSizeAlias);
  t[0] = absx11;
  t[3] = 0.0;
  t[6] = 0.0;
  t[1] = 0.0;
  absx21 = imref2d_get_PixelExtentInWorldY(YWorldLimitsOut,
    outputRef_ImageSizeAlias);
  t[4] = absx21;
  t[7] = 0.0;
  t[2] = (0.75 + -xNudge) - absx11 * 0.5;
  t[5] = (0.5 + -yNudge) - absx21 * 0.5;
  t[8] = 1.0;
  for (p2 = 0; p2 < 3; p2++) {
    for (p3 = 0; p3 < 3; p3++) {
      p1 = p2 + 3 * p3;
      tinv[p1] = 0.0;
      tinv[p1] = ((real_T)b_a[p2] * t[3 * p3] + (real_T)b_a[p2 + 3] * t[1 + 3 *
                  p3]) + (real_T)b_a[p2 + 6] * t[2 + 3 * p3];
    }
  }

  c_st.site = &db_emlrtRSI;
  mrdivide_helper(&c_st, tinv, varargin_2_T, a);
  c_st.site = &eb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  for (p2 = 0; p2 < 3; p2++) {
    for (p3 = 0; p3 < 3; p3++) {
      p1 = p2 + 3 * p3;
      t[p1] = 0.0;
      t[p1] = (a[p2] * (real_T)b[3 * p3] + a[p2 + 3] * (real_T)b[1 + 3 * p3]) +
        a[p2 + 6] * (real_T)b[2 + 3 * p3];
    }
  }

  for (p2 = 0; p2 < 3; p2++) {
    for (p3 = 0; p3 < 3; p3++) {
      p1 = p2 + 3 * p3;
      a[p1] = 0.0;
      a[p1] = (t[p2] * (real_T)b_b[3 * p3] + t[p2 + 3] * (real_T)b_b[1 + 3 * p3])
        + t[p2 + 6] * (real_T)b_b[2 + 3 * p3];
    }
  }

  for (p2 = 0; p2 < 2; p2++) {
    t[3 * p2] = a[3 * p2];
    p1 = 1 + 3 * p2;
    t[p1] = a[p1];
    p1 = 2 + 3 * p2;
    t[p1] = a[p1];
  }

  t[6] = 0.0;
  t[7] = 0.0;
  t[8] = 1.0;
  e_st.site = &hb_emlrtRSI;
  validateattributes(&e_st, t);
  e_st.site = &ib_emlrtRSI;
  absx11 = det(&e_st, t);
  p = false;
  b_p = true;
  if (!(absx11 == 0.0)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
      "images:geotrans:singularTransformationMatrix",
      "images:geotrans:singularTransformationMatrix", 0);
  }

  p = false;
  b_p = true;
  p1 = 0;
  exitg1 = false;
  while ((!exitg1) && (p1 < 3)) {
    if ((int32_T)t[6 + p1] != varargin_2[p1]) {
      b_p = false;
      exitg1 = true;
    } else {
      p1++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &l_emlrtRTEI,
      "images:geotrans:invalidAffineMatrix",
      "images:geotrans:invalidAffineMatrix", 0);
  }

  c_st.site = &eb_emlrtRSI;
  d_st.site = &lb_emlrtRSI;
  e_st.site = &mb_emlrtRSI;
  memcpy(&a[0], &t[0], 9U * sizeof(real_T));
  p1 = 0;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(t[0]);
  absx21 = muDoubleScalarAbs(t[1]);
  absx31 = muDoubleScalarAbs(t[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 3;
    p2 = 0;
    a[0] = t[1];
    a[1] = t[0];
    a[3] = t[4];
    a[4] = t[3];
    a[6] = 0.0;
  } else {
    if (absx31 > absx11) {
      p1 = 6;
      p3 = 0;
      a[0] = t[2];
      a[2] = t[0];
      a[3] = t[5];
      a[5] = t[3];
      a[6] = 1.0;
      a[8] = 0.0;
    }
  }

  a[1] /= a[0];
  a[2] /= a[0];
  a[4] -= a[1] * a[3];
  a[5] -= a[2] * a[3];
  a[7] = 0.0 - a[1] * a[6];
  a[8] -= a[2] * a[6];
  if (muDoubleScalarAbs(a[5]) > muDoubleScalarAbs(a[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    absx11 = a[1];
    a[1] = a[2];
    a[2] = absx11;
    absx11 = a[4];
    a[4] = a[5];
    a[5] = absx11;
    absx11 = a[7];
    a[7] = a[8];
    a[8] = absx11;
  }

  a[5] /= a[4];
  a[8] -= a[5] * a[7];
  absx11 = (a[5] * a[1] - a[2]) / a[8];
  absx21 = -(a[1] + a[7] * absx11) / a[4];
  tinv[p1] = ((1.0 - a[3] * absx21) - a[6] * absx11) / a[0];
  tinv[p1 + 1] = absx21;
  tinv[p1 + 2] = absx11;
  absx11 = -a[5] / a[8];
  absx21 = (1.0 - a[7] * absx11) / a[4];
  tinv[p2] = -(a[3] * absx21 + a[6] * absx11) / a[0];
  tinv[p2 + 1] = absx21;
  tinv[p2 + 2] = absx11;
  absx11 = 1.0 / a[8];
  absx21 = -a[7] * absx11 / a[4];
  tinv[p3] = -(a[3] * absx21 + a[6] * absx11) / a[0];
  tinv[p3 + 1] = absx21;
  tinv[p3 + 2] = absx11;
  f_st.site = &nb_emlrtRSI;
  absx11 = b_norm(t);
  absx21 = b_norm(tinv);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    g_st.site = &ob_emlrtRSI;
    warning(&g_st);
  } else {
    if (muDoubleScalarIsNaN(absx31) || (absx31 < 2.2204460492503131E-16)) {
      g_st.site = &pb_emlrtRSI;
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      emlrtInitCharArrayR2013a(&g_st, 6, m0, &rfmt[0]);
      emlrtAssign(&y, m0);
      b_y = NULL;
      m1 = emlrtCreateDoubleScalar(absx31);
      emlrtAssign(&b_y, m1);
      h_st.site = &sb_emlrtRSI;
      emlrt_marshallIn(&h_st, b_sprintf(&h_st, y, b_y, &c_emlrtMCI), "sprintf",
                       cv0);
      g_st.site = &pb_emlrtRSI;
      b_warning(&g_st, cv0);
    }
  }

  tinv[6] = 0.0;
  tinv[7] = 0.0;
  tinv[8] = 1.0;
  d_st.site = &lb_emlrtRSI;
  e_st.site = &hb_emlrtRSI;
  validateattributes(&e_st, tinv);
  e_st.site = &ib_emlrtRSI;
  absx11 = det(&e_st, tinv);
  p = false;
  b_p = true;
  if (!(absx11 == 0.0)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI,
      "images:geotrans:singularTransformationMatrix",
      "images:geotrans:singularTransformationMatrix", 0);
  }

  p = false;
  b_p = true;
  p1 = 0;
  exitg1 = false;
  while ((!exitg1) && (p1 < 3)) {
    if ((int32_T)tinv[6 + p1] != varargin_2[p1]) {
      b_p = false;
      exitg1 = true;
    } else {
      p1++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &l_emlrtRTEI,
      "images:geotrans:invalidAffineMatrix",
      "images:geotrans:invalidAffineMatrix", 0);
  }

  c_st.site = &fb_emlrtRSI;
  p2 = outputImage->size[0] * outputImage->size[1];
  outputImage->size[0] = numRows;
  outputImage->size[1] = numCols;
  emxEnsureCapacity_real_T(&c_st, outputImage, p2, &emlrtRTEI);
  d_st.site = &qb_emlrtRSI;
  absx11 = 0.0;
  XWorldLimitsOut[0] = 512.0;
  XWorldLimitsOut[1] = 512.0;
  ippgeotransCaller_real64(&outputImage->data[0], outputRef_ImageSizeAlias, 2.0,
    varargin_1, XWorldLimitsOut, 262144.0, *(real_T (*)[6])&tinv[0], 2, &absx11,
    true);
}

/* End of code generation (imwarp.c) */
