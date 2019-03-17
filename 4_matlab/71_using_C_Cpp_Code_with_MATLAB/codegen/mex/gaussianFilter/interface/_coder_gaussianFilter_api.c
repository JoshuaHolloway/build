/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_gaussianFilter_api.c
 *
 * Code generation for function '_coder_gaussianFilter_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "gaussianFilter.h"
#include "_coder_gaussianFilter_api.h"
#include "gaussianFilter_data.h"

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[777600];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[777600];
static int32_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *imsize,
  const char_T *identifier))[2];
static const mxArray *emlrt_marshallOut(const real_T u[777600]);
static int32_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[777600];
static int32_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[777600]
{
  real_T (*y)[777600];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[777600]
{
  real_T (*y)[777600];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *imsize,
  const char_T *identifier))[2]
{
  int32_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(imsize), &thisId);
  emlrtDestroyArray(&imsize);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[777600])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv2[2] = { 0, 0 };

  static const int32_T iv3[2] = { 720, 1080 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, iv3, 2);
  emlrtAssign(&y, m3);
  return y;
}

static int32_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  int32_T (*y)[2];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[777600]
{
  real_T (*ret)[777600];
  static const int32_T dims[2] = { 720, 1080 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[777600])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  int32_T (*ret)[2];
  static const int32_T dims[2] = { 1, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 2U, dims);
  ret = (int32_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void gaussianFilter_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1])
{
  real_T (*y)[777600];
  const mxArray *prhs_copy_idx_0;
  const mxArray *prhs_copy_idx_1;
  real_T (*x)[777600];
  int32_T (*imsize)[2];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  y = (real_T (*)[777600])mxMalloc(sizeof(real_T [777600]));
  prhs_copy_idx_0 = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs_copy_idx_1 = emlrtProtectR2012b(prhs[1], 1, false, -1);

  /* Marshall function inputs */
  x = c_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "x");
  imsize = e_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_1), "imsize");

  /* Invoke the target function */
  gaussianFilter(&st, *x, *imsize, *y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*y);
}

/* End of code generation (_coder_gaussianFilter_api.c) */
