/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: func.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 01-Mar-2019 21:43:28
 */

/* Include Files */
#include <math.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "func.h"
#include "sort1.h"

/* Function Definitions */

/*
 * Arguments    : const double A_data[]
 *                const int A_size[2]
 *                double tol
 *                double B_data[]
 *                int B_size[2]
 * Return Type  : void
 */
void func(const double A_data[], const int A_size[2], double tol, double B_data[],
          int B_size[2])
{
  int b_A_size[2];
  int k;
  double b_A_data[100];
  int i0;
  int b_B_size;
  int i;
  double d0;
  b_A_size[0] = 1;
  b_A_size[1] = A_size[1];
  k = A_size[0] * A_size[1];
  if (0 <= k - 1) {
    memcpy(&b_A_data[0], &A_data[0], (unsigned int)(k * (int)sizeof(double)));
  }

  sort(b_A_data, b_A_size);
  B_size[0] = 1;
  B_size[1] = 1;
  B_data[0] = b_A_data[0];
  k = 0;
  i0 = b_A_size[1];
  b_B_size = 1;
  for (i = 0; i <= i0 - 2; i++) {
    d0 = b_A_data[i + 1];
    if (fabs(b_A_data[k] - d0) > tol) {
      k = b_B_size;
      b_B_size++;
      B_data[k] = d0;
      k = i + 1;
    }

    B_size[1] = b_B_size;
  }
}

/*
 * File trailer for func.c
 *
 * [EOF]
 */
