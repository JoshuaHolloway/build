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
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "imwarp.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "det.h"
#include "validateattributes.h"
#include "warning.h"
#include "norm.h"
#include "mrdivide_helper.h"
#include "visionRecovertformCodeGeneration_kernel_mexutil.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"
#include "libmwippgeotrans.h"

/* Variable Definitions */
static emlrtRSInfo el_emlrtRSI = { 13, /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 111,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 136,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 58, /* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 397,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 164,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 521,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 522,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 546,/* lineNo */
  "imwarp",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 31, /* lineNo */
  "ippgeotrans",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\ippgeotrans.m"/* pathName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 546,/* lineNo */
  23,                                  /* colNo */
  "imwarp",                            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 294,/* lineNo */
  70,                                  /* colNo */
  "imwarp",                            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\eml\\imwarp.m"/* pName */
};

/* Function Definitions */
void imwarp(const emlrtStack *sp, const emxArray_uint8_T *varargin_1, const
            real32_T varargin_2_T_data[], const int32_T varargin_2_T_size[2],
            const real_T varargin_4_ImageSizeAlias[2], emxArray_uint8_T
            *outputImage)
{
  int16_T imageSizeIn_idx_0;
  int16_T imageSizeIn_idx_1;
  int32_T imageSize_idx_0;
  int32_T imageSize_idx_1;
  boolean_T p;
  boolean_T b_p;
  boolean_T guard1 = false;
  static const real_T dv2[9] = { 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0 };

  real32_T a_data[9];
  int32_T a_size[2];
  int32_T p3;
  real32_T t[9];
  real32_T tinv[9];
  real32_T a[9];
  static const int8_T iv16[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  real32_T absx11;
  static const int8_T iv17[9] = { 1, 0, -1, 0, 1, -1, 0, 0, 1 };

  boolean_T exitg1;
  static const int8_T varargin_2[3] = { 0, 0, 1 };

  real32_T absx21;
  real32_T absx31;
  int32_T itmp;
  const mxArray *y;
  const mxArray *m8;
  static const int32_T iv18[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  char_T cv2[14];
  real_T fillVal;
  real_T b_varargin_4_ImageSizeAlias[2];
  real_T b_varargin_1[2];
  real_T b_tinv[6];
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
  st.site = &el_emlrtRSI;
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
  b_st.site = &il_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedNonempty",
      "MATLAB:imwarp:expectedNonempty", 3, 4, 18, "input number 1, A,");
  }

  st.site = &hl_emlrtRSI;
  imageSizeIn_idx_0 = (int16_T)varargin_1->size[0];
  imageSizeIn_idx_1 = (int16_T)varargin_1->size[1];
  b_st.site = &yk_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  b_st.site = &al_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  b_st.site = &bl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  d_st.site = &q_emlrtRSI;
  st.site = &fl_emlrtRSI;
  imageSize_idx_0 = varargin_1->size[0];
  imageSize_idx_1 = varargin_1->size[1];
  p = false;
  b_p = true;
  if ((int16_T)imageSize_idx_0 != imageSizeIn_idx_0) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  guard1 = false;
  if (p) {
    p = false;
    b_p = true;
    if ((int16_T)imageSize_idx_1 != imageSizeIn_idx_1) {
      b_p = false;
    }

    if (b_p) {
      p = true;
    }

    if (p) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&st, &pi_emlrtRTEI,
      "images:imwarp:spatialRefDimsDisagreeWithInputImage",
      "images:imwarp:spatialRefDimsDisagreeWithInputImage", 9, 4, 9, "ImageSize",
      4, 2, "RA", 4, 1, "A");
  }

  st.site = &gl_emlrtRSI;
  b_st.site = &jl_emlrtRSI;
  c_st.site = &kl_emlrtRSI;
  mrdivide_helper(&c_st, dv2, varargin_2_T_data, varargin_2_T_size, a_data,
                  a_size);
  c_st.site = &kl_emlrtRSI;
  d_st.site = &bh_emlrtRSI;
  if (a_size[1] != 3) {
    emlrtErrorWithMessageIdR2018a(&d_st, &mi_emlrtRTEI, "MATLAB:innerdim",
      "MATLAB:innerdim", 0);
  }

  c_st.site = &ll_emlrtRSI;
  d_st.site = &fk_emlrtRSI;
  for (p3 = 0; p3 < 3; p3++) {
    for (imageSize_idx_1 = 0; imageSize_idx_1 < 3; imageSize_idx_1++) {
      imageSize_idx_0 = p3 + 3 * imageSize_idx_1;
      a[imageSize_idx_0] = 0.0F;
      a[imageSize_idx_0] = (a_data[p3] * (real32_T)iv16[3 * imageSize_idx_1] +
                            a_data[p3 + 3] * (real32_T)iv16[1 + 3 *
                            imageSize_idx_1]) + a_data[p3 + 6] * (real32_T)iv16
        [2 + 3 * imageSize_idx_1];
    }

    for (imageSize_idx_1 = 0; imageSize_idx_1 < 3; imageSize_idx_1++) {
      imageSize_idx_0 = p3 + 3 * imageSize_idx_1;
      tinv[imageSize_idx_0] = 0.0F;
      tinv[imageSize_idx_0] = (a[p3] * (real32_T)iv17[3 * imageSize_idx_1] +
        a[p3 + 3] * (real32_T)iv17[1 + 3 * imageSize_idx_1]) + a[p3 + 6] *
        (real32_T)iv17[2 + 3 * imageSize_idx_1];
    }
  }

  for (p3 = 0; p3 < 2; p3++) {
    t[3 * p3] = tinv[3 * p3];
    imageSize_idx_0 = 1 + 3 * p3;
    t[imageSize_idx_0] = tinv[imageSize_idx_0];
    imageSize_idx_0 = 2 + 3 * p3;
    t[imageSize_idx_0] = tinv[imageSize_idx_0];
  }

  t[6] = 0.0F;
  t[7] = 0.0F;
  t[8] = 1.0F;
  e_st.site = &hk_emlrtRSI;
  b_validateattributes(&e_st, t);
  e_st.site = &ik_emlrtRSI;
  absx11 = b_det(&e_st, t);
  p = false;
  b_p = true;
  if (!(absx11 == 0.0F)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &oh_emlrtRTEI,
      "images:geotrans:singularTransformationMatrix",
      "images:geotrans:singularTransformationMatrix", 0);
  }

  p = false;
  b_p = true;
  imageSize_idx_0 = 0;
  exitg1 = false;
  while ((!exitg1) && (imageSize_idx_0 < 3)) {
    if ((int32_T)t[6 + imageSize_idx_0] != varargin_2[imageSize_idx_0]) {
      b_p = false;
      exitg1 = true;
    } else {
      imageSize_idx_0++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &nh_emlrtRTEI,
      "images:geotrans:invalidAffineMatrix",
      "images:geotrans:invalidAffineMatrix", 0);
  }

  c_st.site = &ll_emlrtRSI;
  d_st.site = &jk_emlrtRSI;
  e_st.site = &kk_emlrtRSI;
  for (p3 = 0; p3 < 9; p3++) {
    a[p3] = t[p3];
  }

  imageSize_idx_0 = 0;
  imageSize_idx_1 = 3;
  p3 = 6;
  absx11 = muSingleScalarAbs(t[0]);
  absx21 = muSingleScalarAbs(t[1]);
  absx31 = muSingleScalarAbs(t[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    imageSize_idx_0 = 3;
    imageSize_idx_1 = 0;
    a[0] = t[1];
    a[1] = t[0];
    a[3] = t[4];
    a[4] = t[3];
    a[6] = 0.0F;
  } else {
    if (absx31 > absx11) {
      imageSize_idx_0 = 6;
      p3 = 0;
      a[0] = t[2];
      a[2] = t[0];
      a[3] = t[5];
      a[5] = t[3];
      a[6] = 1.0F;
      a[8] = 0.0F;
    }
  }

  a[1] /= a[0];
  a[2] /= a[0];
  a[4] -= a[1] * a[3];
  a[5] -= a[2] * a[3];
  a[7] = 0.0F - a[1] * a[6];
  a[8] -= a[2] * a[6];
  if (muSingleScalarAbs(a[5]) > muSingleScalarAbs(a[4])) {
    itmp = imageSize_idx_1;
    imageSize_idx_1 = p3;
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
  tinv[imageSize_idx_0] = ((1.0F - a[3] * absx21) - a[6] * absx11) / a[0];
  tinv[imageSize_idx_0 + 1] = absx21;
  tinv[imageSize_idx_0 + 2] = absx11;
  absx11 = -a[5] / a[8];
  absx21 = (1.0F - a[7] * absx11) / a[4];
  tinv[imageSize_idx_1] = -(a[3] * absx21 + a[6] * absx11) / a[0];
  tinv[imageSize_idx_1 + 1] = absx21;
  tinv[imageSize_idx_1 + 2] = absx11;
  absx11 = 1.0F / a[8];
  absx21 = -a[7] * absx11 / a[4];
  tinv[p3] = -(a[3] * absx21 + a[6] * absx11) / a[0];
  tinv[p3 + 1] = absx21;
  tinv[p3 + 2] = absx11;
  f_st.site = &km_emlrtRSI;
  absx11 = c_norm(t);
  absx21 = c_norm(tinv);
  absx31 = 1.0F / (absx11 * absx21);
  if ((absx11 == 0.0F) || (absx21 == 0.0F) || (absx31 == 0.0F)) {
    g_st.site = &wk_emlrtRSI;
    warning(&g_st);
  } else {
    if (muSingleScalarIsNaN(absx31) || (absx31 < 1.1920929E-7F)) {
      g_st.site = &xk_emlrtRSI;
      y = NULL;
      m8 = emlrtCreateCharArray(2, iv18);
      emlrtInitCharArrayR2013a(&g_st, 6, m8, &rfmt[0]);
      emlrtAssign(&y, m8);
      h_st.site = &pm_emlrtRSI;
      emlrt_marshallIn(&h_st, b_sprintf(&h_st, y, d_emlrt_marshallOut(absx31),
        &e_emlrtMCI), "sprintf", cv2);
      g_st.site = &xk_emlrtRSI;
      b_warning(&g_st, cv2);
    }
  }

  tinv[6] = 0.0F;
  tinv[7] = 0.0F;
  tinv[8] = 1.0F;
  d_st.site = &jk_emlrtRSI;
  e_st.site = &hk_emlrtRSI;
  b_validateattributes(&e_st, tinv);
  e_st.site = &ik_emlrtRSI;
  absx11 = b_det(&e_st, tinv);
  p = false;
  b_p = true;
  if (!(absx11 == 0.0F)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &oh_emlrtRTEI,
      "images:geotrans:singularTransformationMatrix",
      "images:geotrans:singularTransformationMatrix", 0);
  }

  p = false;
  b_p = true;
  imageSize_idx_0 = 0;
  exitg1 = false;
  while ((!exitg1) && (imageSize_idx_0 < 3)) {
    if ((int32_T)tinv[6 + imageSize_idx_0] != varargin_2[imageSize_idx_0]) {
      b_p = false;
      exitg1 = true;
    } else {
      imageSize_idx_0++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &nh_emlrtRTEI,
      "images:geotrans:invalidAffineMatrix",
      "images:geotrans:invalidAffineMatrix", 0);
  }

  c_st.site = &ml_emlrtRSI;
  p3 = outputImage->size[0] * outputImage->size[1];
  outputImage->size[0] = (int32_T)varargin_4_ImageSizeAlias[0];
  outputImage->size[1] = (int32_T)varargin_4_ImageSizeAlias[1];
  emxEnsureCapacity_uint8_T(&c_st, outputImage, p3, &mg_emlrtRTEI);
  d_st.site = &lm_emlrtRSI;
  fillVal = 0.0;
  for (p3 = 0; p3 < 2; p3++) {
    b_varargin_4_ImageSizeAlias[p3] = varargin_4_ImageSizeAlias[p3];
    b_varargin_1[p3] = varargin_1->size[p3];
    b_tinv[3 * p3] = tinv[3 * p3];
    imageSize_idx_0 = 1 + 3 * p3;
    b_tinv[imageSize_idx_0] = tinv[imageSize_idx_0];
    imageSize_idx_0 = 2 + 3 * p3;
    b_tinv[imageSize_idx_0] = tinv[imageSize_idx_0];
  }

  ippgeotransCaller_uint8(&outputImage->data[0], b_varargin_4_ImageSizeAlias,
    2.0, &varargin_1->data[0], b_varargin_1, (real_T)(varargin_1->size[0] *
    varargin_1->size[1]), b_tinv, 2, &fillVal, true);
}

/* End of code generation (imwarp.c) */
