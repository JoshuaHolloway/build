/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func.c
 *
 * Code generation for function 'func'
 *
 */

/* Include files */
#include <string.h>
#include "func.h"

/* Function Definitions */
void func(const double x[16], const double h[9], double y[16])
{
  int jb;
  int bColOffset_tmp;
  int ib;
  double bij_tmp;
  int imin;
  int imax;
  int ic;
  int ia;

  /*  func performs 2D-'same'-convolution */
  /*  x is the NxN signal */
  /*  h is the KxK kernel */
  /*  y is the NxN filtered signal */
  memset(&y[0], 0, sizeof(double) << 4);
  for (jb = 1; jb < 3; jb++) {
    bColOffset_tmp = 8 - jb * 3;
    for (ib = 0; ib < 3; ib++) {
      bij_tmp = h[bColOffset_tmp - ib];
      if (ib < 1) {
        imin = 2;
        imax = 4;
      } else {
        imin = 1;
        imax = 5 - ib;
      }

      ic = -1 + imin;
      ia = (ic + ((jb - 1) << 2)) + ib;
      imin = imax - imin;
      for (imax = 0; imax <= imin; imax++) {
        y[ic] += bij_tmp * x[ia - 1];
        ic++;
        ia++;
      }
    }
  }

  for (jb = 0; jb < 3; jb++) {
    bColOffset_tmp = 8 - jb * 3;
    for (ib = 0; ib < 3; ib++) {
      bij_tmp = h[bColOffset_tmp - ib];
      if (ib < 1) {
        imin = 2;
        imax = 4;
      } else {
        imin = 1;
        imax = 5 - ib;
      }

      ic = 3 + imin;
      ia = (ic + ((jb - 1) << 2)) + ib;
      imin = imax - imin;
      for (imax = 0; imax <= imin; imax++) {
        y[ic] += bij_tmp * x[ia - 1];
        ic++;
        ia++;
      }
    }
  }

  for (jb = 0; jb < 3; jb++) {
    bColOffset_tmp = 8 - jb * 3;
    for (ib = 0; ib < 3; ib++) {
      bij_tmp = h[bColOffset_tmp - ib];
      if (ib < 1) {
        imin = 2;
        imax = 4;
      } else {
        imin = 1;
        imax = 5 - ib;
      }

      ic = 7 + imin;
      ia = (ic + ((jb - 1) << 2)) + ib;
      imin = imax - imin;
      for (imax = 0; imax <= imin; imax++) {
        y[ic] += bij_tmp * x[ia - 1];
        ic++;
        ia++;
      }
    }
  }

  for (jb = 0; jb < 2; jb++) {
    bColOffset_tmp = 8 - jb * 3;
    for (ib = 0; ib < 3; ib++) {
      bij_tmp = h[bColOffset_tmp - ib];
      if (ib < 1) {
        imin = 2;
        imax = 4;
      } else {
        imin = 1;
        imax = 5 - ib;
      }

      ic = 11 + imin;
      ia = (ic + ((jb - 1) << 2)) + ib;
      imin = imax - imin;
      for (imax = 0; imax <= imin; imax++) {
        y[ic] += bij_tmp * x[ia - 1];
        ic++;
        ia++;
      }
    }
  }
}

/* End of code generation (func.c) */
