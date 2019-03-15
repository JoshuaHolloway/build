/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_func_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 09-Mar-2019 17:52:57
 */

#ifndef _CODER_FUNC_API_H
#define _CODER_FUNC_API_H

/* Include Files */
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
extern real_T func(real_T a, real_T b);
extern void func_api(const mxArray * const prhs[2], int32_T nlhs, const mxArray *
                     plhs[1]);
extern void func_atexit(void);
extern void func_initialize(void);
extern void func_terminate(void);
extern void func_xil_terminate(void);

#endif

/*
 * File trailer for _coder_func_api.h
 *
 * [EOF]
 */
