/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: gaussianFilter.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 16-Mar-2019 17:19:26
 */

/* Include Files */
#include "gaussianFilter.h"

/* Custom Source Code */
#include "gaussian3x3.h"
#include <stdio.h>

/* Type Definitions */

/* Function Definitions */

/*
 * Pre-allocate output array
 * Arguments    : double x[777600]
 *                int imsize[2]
 *                double y[777600]
 * Return Type  : void
 */
void gaussianFilter(double x[777600], int imsize[2], double y[777600])
{
  /*  Generate C-code using existing C-code: */
  printf("Running Custom C-Code...\n\n");
  fflush(stdout);
  gaussian3x3(x, imsize, y);
}

/*
 * File trailer for gaussianFilter.c
 *
 * [EOF]
 */
