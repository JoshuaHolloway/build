/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * averaging_filter.c
 *
 * Code generation for function 'averaging_filter'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "averaging_filter.h"
#include "averaging_filter_data.h"

/* Variable Definitions */
static real_T buffer[16];

/* Function Definitions */
void averaging_filter(const emlrtStack *sp, const real_T x[1024], real_T y[1024])
{
  int32_T i;
  real_T dv0[15];
  real_T b_y;
  int32_T k;

  /*  y = averaging_filter(x) */
  /*  Take an input vector signal 'x' and produce an output vector signal 'y' with */
  /*  same type and shape as 'x' but filtered. */
  /*  Use a persistent variable 'buffer' that represents a sliding window of */
  /*  16 samples at a time. */
  for (i = 0; i < 1024; i++) {
    /*  Scroll the buffer */
    memcpy(&dv0[0], &buffer[0], 15U * sizeof(real_T));

    /*  Add a new sample value to the buffer */
    buffer[0] = x[i];

    /*  Compute the current average value of the window and */
    /*  write result */
    b_y = buffer[0];
    for (k = 0; k < 15; k++) {
      buffer[1 + k] = dv0[k];
      b_y += dv0[k];
    }

    y[i] = b_y / 16.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

void averaging_filter_init(void)
{
  memset(&buffer[0], 0, sizeof(real_T) << 4);
}

/* End of code generation (averaging_filter.c) */
