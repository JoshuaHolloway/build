/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_visionRecovertformCodeGeneration_kernel_api.c
 *
 * Code generation for function '_coder_visionRecovertformCodeGeneration_kernel_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "_coder_visionRecovertformCodeGeneration_kernel_api.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "visionRecovertformCodeGeneration_kernel_mexutil.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRTEInfo ng_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_visionRecovertformCodeGeneration_kernel_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *original,
  const char_T *identifier, emxArray_uint8_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint8_T *y);
static const mxArray *e_emlrt_marshallOut(const emxArray_real32_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint8_T *ret);
static const mxArray *f_emlrt_marshallOut(const emxArray_uint8_T *u);

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *original,
  const char_T *identifier, emxArray_uint8_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(original), &thisId, y);
  emlrtDestroyArray(&original);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint8_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *e_emlrt_marshallOut(const emxArray_real32_T *u)
{
  const mxArray *y;
  const mxArray *m19;
  static const int32_T iv24[2] = { 0, 0 };

  y = NULL;
  m19 = emlrtCreateNumericArray(2, iv24, mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m19, &u->data[0]);
  emlrtSetDimensions((mxArray *)m19, u->size, 2);
  emlrtAssign(&y, m19);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint8_T *ret)
{
  static const int32_T dims[2] = { 1000, 1000 };

  const boolean_T bv2[2] = { true, true };

  int32_T iv26[2];
  int32_T i26;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "uint8", false, 2U, dims, &bv2[0],
    iv26);
  ret->allocatedSize = iv26[0] * iv26[1];
  i26 = ret->size[0] * ret->size[1];
  ret->size[0] = iv26[0];
  ret->size[1] = iv26[1];
  emxEnsureCapacity_uint8_T(sp, ret, i26, (emlrtRTEInfo *)NULL);
  ret->data = (uint8_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static const mxArray *f_emlrt_marshallOut(const emxArray_uint8_T *u)
{
  const mxArray *y;
  const mxArray *m20;
  static const int32_T iv25[2] = { 0, 0 };

  y = NULL;
  m20 = emlrtCreateNumericArray(2, iv25, mxUINT8_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m20, &u->data[0]);
  emlrtSetDimensions((mxArray *)m20, u->size, 2);
  emlrtAssign(&y, m20);
  return y;
}

void visionRecovertformCodeGeneration_kernel_api(const mxArray * const prhs[2],
  int32_T nlhs, const mxArray *plhs[5])
{
  emxArray_uint8_T *original;
  emxArray_uint8_T *distorted;
  emxArray_real32_T *matchedOriginal;
  emxArray_real32_T *matchedDistorted;
  emxArray_uint8_T *recovered;
  real32_T thetaRecovered;
  real32_T scaleRecovered;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_uint8_T(&st, &original, 2, &ng_emlrtRTEI, true);
  emxInit_uint8_T(&st, &distorted, 2, &ng_emlrtRTEI, true);
  emxInit_real32_T(&st, &matchedOriginal, 2, &ng_emlrtRTEI, true);
  emxInit_real32_T(&st, &matchedDistorted, 2, &ng_emlrtRTEI, true);
  emxInit_uint8_T(&st, &recovered, 2, &ng_emlrtRTEI, true);

  /* Marshall function inputs */
  original->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "original", original);
  distorted->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "distorted", distorted);

  /* Invoke the target function */
  visionRecovertformCodeGeneration_kernel(&st, original, distorted,
    matchedOriginal, matchedDistorted, &thetaRecovered, &scaleRecovered,
    recovered);

  /* Marshall function outputs */
  matchedOriginal->canFreeData = false;
  plhs[0] = e_emlrt_marshallOut(matchedOriginal);
  emxFree_real32_T(&matchedOriginal);
  emxFree_uint8_T(&distorted);
  emxFree_uint8_T(&original);
  if (nlhs > 1) {
    matchedDistorted->canFreeData = false;
    plhs[1] = e_emlrt_marshallOut(matchedDistorted);
  }

  emxFree_real32_T(&matchedDistorted);
  if (nlhs > 2) {
    plhs[2] = d_emlrt_marshallOut(thetaRecovered);
  }

  if (nlhs > 3) {
    plhs[3] = d_emlrt_marshallOut(scaleRecovered);
  }

  if (nlhs > 4) {
    recovered->canFreeData = false;
    plhs[4] = f_emlrt_marshallOut(recovered);
  }

  emxFree_uint8_T(&recovered);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_visionRecovertformCodeGeneration_kernel_api.c) */
