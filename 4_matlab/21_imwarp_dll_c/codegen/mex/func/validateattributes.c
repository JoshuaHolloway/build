/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * validateattributes.c
 *
 * Code generation for function 'validateattributes'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "func.h"
#include "validateattributes.h"
#include "func_data.h"

/* Function Definitions */
void validateattributes(const emlrtStack *sp, const real_T a[9])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 9)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
      "Coder:toolbox:ValidateattributesexpectedFinite",
      "MATLAB:affine2d:set:T:expectedFinite", 3, 4, 1, "T");
  }
}

/* End of code generation (validateattributes.c) */
