/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_gaussianFilter_api.h
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 16-Mar-2019 17:19:26
 */

#ifndef _CODER_GAUSSIANFILTER_API_H
#define _CODER_GAUSSIANFILTER_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_gaussianFilter_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void gaussianFilter(real_T x[777600], int32_T imsize[2], real_T y[777600]);
extern void gaussianFilter_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1]);
extern void gaussianFilter_atexit(void);
extern void gaussianFilter_initialize(void);
extern void gaussianFilter_terminate(void);
extern void gaussianFilter_xil_terminate(void);

#endif

/*
 * File trailer for _coder_gaussianFilter_api.h
 *
 * [EOF]
 */
