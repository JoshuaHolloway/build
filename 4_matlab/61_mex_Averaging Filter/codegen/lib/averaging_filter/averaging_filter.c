/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: averaging_filter.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 20:57:53
 */

/* Include Files */
#include <string.h>
#include "averaging_filter.h"

/* Variable Definitions */
static double buffer[16];

/* Function Definitions */

/*
 * Use a persistent variable 'buffer' that represents a sliding window of
 *  16 samples at a time.
 * Arguments    : const double x[1024]
 *                double y[1024]
 * Return Type  : void
 */
void averaging_filter(const double x[1024], double y[1024])
{
  int i;
  double dv0[15];
  double b_y;
  int k;

  /*  y = averaging_filter(x) */
  /*  Take an input vector signal 'x' and produce an output vector signal 'y' with */
  /*  same type and shape as 'x' but filtered. */
  for (i = 0; i < 1024; i++) {
    /*  Scroll the buffer */
    memcpy(&dv0[0], &buffer[0], 15U * sizeof(double));

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
  }
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void averaging_filter_init(void)
{
  memset(&buffer[0], 0, sizeof(double) << 4);
}

/*
 * File trailer for averaging_filter.c
 *
 * [EOF]
 */
