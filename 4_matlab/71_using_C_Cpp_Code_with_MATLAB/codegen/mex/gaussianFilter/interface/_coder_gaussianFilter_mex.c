/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_gaussianFilter_mex.c
 *
 * Code generation for function '_coder_gaussianFilter_mex'
 *
 */

/* Include files */
#include "gaussianFilter.h"
#include "_coder_gaussianFilter_mex.h"
#include "gaussianFilter_terminate.h"
#include "_coder_gaussianFilter_api.h"
#include "gaussianFilter_initialize.h"
#include "gaussianFilter_data.h"

/* Function Declarations */
static void gaussianFilter_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void gaussianFilter_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[2])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        14, "gaussianFilter");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "gaussianFilter");
  }

  /* Call the function. */
  gaussianFilter_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(gaussianFilter_atexit);

  /* Module initialization. */
  gaussianFilter_initialize();

  /* Dispatch the entry-point. */
  gaussianFilter_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  gaussianFilter_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_gaussianFilter_mex.c) */
