/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hello_world_mex.c
 *
 * Code generation for function '_coder_hello_world_mex'
 *
 */

/* Include files */
#include "hello_world.h"
#include "_coder_hello_world_mex.h"
#include "hello_world_terminate.h"
#include "_coder_hello_world_api.h"
#include "hello_world_initialize.h"
#include "hello_world_data.h"

/* Function Declarations */
static void hello_world_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs);

/* Function Definitions */
static void hello_world_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs)
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        11, "hello_world");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "hello_world");
  }

  /* Call the function. */
  hello_world_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)prhs;
  mexAtExit(hello_world_atexit);

  /* Module initialization. */
  hello_world_initialize();

  /* Dispatch the entry-point. */
  hello_world_mexFunction(nlhs, plhs, nrhs);

  /* Module termination. */
  hello_world_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_hello_world_mex.c) */
