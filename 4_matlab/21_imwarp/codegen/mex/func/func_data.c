/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func_data.c
 *
 * Code generation for function 'func_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "func.h"
#include "func_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "func",                              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 1858410525U, 2505464270U, 328108647U, 1256672073U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo m_emlrtRSI = { 76,         /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

emlrtRTEInfo d_emlrtRTEI = { 13,       /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

/* End of code generation (func_data.c) */
