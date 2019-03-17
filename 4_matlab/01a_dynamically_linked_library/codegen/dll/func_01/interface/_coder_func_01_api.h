/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_func_01_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Feb-2019 17:33:15
 */

#ifndef _CODER_FUNC_01_API_H
#define _CODER_FUNC_01_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_func_01_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern real_T func_01(real_T a);
  extern void func_01_api(const mxArray * const prhs[1], int32_T nlhs, const
    mxArray *plhs[1]);
  extern void func_01_atexit(void);
  extern void func_01_initialize(void);
  extern void func_01_terminate(void);
  extern void func_01_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_func_01_api.h
 *
 * [EOF]
 */
