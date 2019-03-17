/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sobel.h"
#include "sqrt.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  boolean_T p;
  int32_T nx;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  p = false;
  nx = x->size[0] * x->size[1];
  for (k = 0; k < nx; k++) {
    if (p || (x->data[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    st.site = &k_emlrtRSI;
    error(&st);
  }

  nx = x->size[0] * x->size[1];
  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.c) */
