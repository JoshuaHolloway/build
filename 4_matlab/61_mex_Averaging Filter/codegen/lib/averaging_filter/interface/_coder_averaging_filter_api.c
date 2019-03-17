/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_averaging_filter_api.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 20:57:53
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_averaging_filter_api.h"
#include "_coder_averaging_filter_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "averaging_filter",                  /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1024];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1024];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[1024];
static const mxArray *emlrt_marshallOut(const real_T u[1024]);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[1024]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1024]
{
  real_T (*y)[1024];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[1024]
 */
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1024]
{
  real_T (*ret)[1024];
  static const int32_T dims[2] = { 1, 1024 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[1024])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *x
 *                const char_T *identifier
 * Return Type  : real_T (*)[1024]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[1024]
{
  real_T (*y)[1024];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
/*
 * Arguments    : const real_T u[1024]
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u[1024])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 1024 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                int32_T nlhs
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void averaging_filter_api(const mxArray * const prhs[1], int32_T nlhs, const
  mxArray *plhs[1])
{
  real_T (*y)[1024];
  real_T (*x)[1024];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  y = (real_T (*)[1024])mxMalloc(sizeof(real_T [1024]));

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");

  /* Invoke the target function */
  averaging_filter(*x, *y);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*y);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void averaging_filter_atexit(void)
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
  averaging_filter_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void averaging_filter_initialize(void)
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
void averaging_filter_terminate(void)
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
 * File trailer for _coder_averaging_filter_api.c
 *
 * [EOF]
 */
