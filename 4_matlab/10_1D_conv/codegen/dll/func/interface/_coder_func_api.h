/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_func_api.h
 *
 * Code generation for function '_coder_func_api'
 *
 */

#ifndef _CODER_FUNC_API_H
#define _CODER_FUNC_API_H

/* Include files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_func_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void func(real_T x[4], real_T h[3], real_T y[4]);
  extern void func_api(const mxArray * const prhs[2], int32_T nlhs, const
                       mxArray *plhs[1]);
  extern void func_atexit(void);
  extern void func_initialize(void);
  extern void func_terminate(void);
  extern void func_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (_coder_func_api.h) */
