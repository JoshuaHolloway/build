/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_averaging_filter_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 20:57:53
 */

#ifndef _CODER_AVERAGING_FILTER_API_H
#define _CODER_AVERAGING_FILTER_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_averaging_filter_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void averaging_filter(real_T x[1024], real_T y[1024]);
extern void averaging_filter_api(const mxArray * const prhs[1], int32_T nlhs,
  const mxArray *plhs[1]);
extern void averaging_filter_atexit(void);
extern void averaging_filter_initialize(void);
extern void averaging_filter_terminate(void);
extern void averaging_filter_xil_terminate(void);

#endif

/*
 * File trailer for _coder_averaging_filter_api.h
 *
 * [EOF]
 */
