/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_func_api.c
 *
 * Code generation for function '_coder_func_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "func.h"
#include "_coder_func_api.h"
#include "func_emxutil.h"
#include "func_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_func_api",                   /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[262144];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[262144];
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[262144];

/* Function Definitions */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[262144]
{
  real_T (*y)[262144];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[262144]
{
  real_T (*y)[262144];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m9;
  static const int32_T iv8[2] = { 0, 0 };

  y = NULL;
  m9 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m9, &u->data[0]);
  emlrtSetDimensions((mxArray *)m9, u->size, 2);
  emlrtAssign(&y, m9);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[262144]
{
  real_T (*ret)[262144];
  static const int32_T dims[2] = { 512, 512 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[262144])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  void func_api(const mxArray * const prhs[1], int32_T nlhs, const mxArray *
                plhs[1])
{
  emxArray_real_T *y;
  real_T (*x)[262144];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 2, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  x = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");

  /* Invoke the target function */
  func(&st, *x, y);

  /* Marshall function outputs */
  y->canFreeData = false;
  plhs[0] = emlrt_marshallOut(y);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_func_api.c) */
