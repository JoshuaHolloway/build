/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_gaussianFilter_api.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 16-Mar-2019 17:19:26
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_gaussianFilter_api.h"
#include "_coder_gaussianFilter_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "gaussianFilter",                    /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[777600];
static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *imsize,
  const char_T *identifier))[2];
static int32_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[777600];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[777600];
static const mxArray *emlrt_marshallOut(const real_T u[777600]);
static int32_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[777600]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[777600]
{
  real_T (*y)[777600];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *imsize
 *                const char_T *identifier
 * Return Type  : int32_T (*)[2]
 */
  static int32_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *imsize, const char_T *identifier))[2]
{
  int32_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(imsize), &thisId);
  emlrtDestroyArray(&imsize);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : int32_T (*)[2]
 */
static int32_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  int32_T (*y)[2];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[777600]
 */
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[777600]
{
  real_T (*ret)[777600];
  static const int32_T dims[2] = { 720, 1080 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[777600])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *x
 *                const char_T *identifier
 * Return Type  : real_T (*)[777600]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[777600]
{
  real_T (*y)[777600];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
/*
 * Arguments    : const real_T u[777600]
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u[777600])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 720, 1080 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : int32_T (*)[2]
 */
static int32_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  int32_T (*ret)[2];
  static const int32_T dims[2] = { 1, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 2U, dims);
  ret = (int32_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const mxArray * const prhs[2]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
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
  x = emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_0), "x");
  imsize = c_emlrt_marshallIn(&st, emlrtAlias(prhs_copy_idx_1), "imsize");

  /* Invoke the target function */
  gaussianFilter(*x, *imsize, *y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*y);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void gaussianFilter_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  gaussianFilter_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void gaussianFilter_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void gaussianFilter_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_gaussianFilter_api.c
 *
 * [EOF]
 */
