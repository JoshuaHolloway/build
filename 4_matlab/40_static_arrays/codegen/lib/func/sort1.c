/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sort1.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 01-Mar-2019 21:43:28
 */

/* Include Files */
#include <string.h>
#include "rt_nonfinite.h"
#include "func.h"
#include "sort1.h"
#include "sortIdx.h"

/* Function Definitions */

/*
 * Arguments    : double x_data[]
 *                int x_size[2]
 * Return Type  : void
 */
void sort(double x_data[], int x_size[2])
{
  int i1;
  int idx_data[100];
  int n;
  double x4[4];
  signed char idx4[4];
  double xwork_data[100];
  int nNaNs;
  int ib;
  int k;
  int i4;
  int idx_data_tmp;
  signed char perm[4];
  int quartetOffset;
  int i3;
  int iwork_data[100];
  double d1;
  double d2;
  i1 = x_size[1];
  if (0 <= i1 - 1) {
    memset(&idx_data[0], 0, (unsigned int)(i1 * (int)sizeof(int)));
  }

  if (x_size[1] != 0) {
    n = x_size[1];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    i1 = (signed char)x_size[1];
    if (0 <= i1 - 1) {
      memset(&xwork_data[0], 0, (unsigned int)(i1 * (int)sizeof(double)));
    }

    nNaNs = 0;
    ib = -1;
    for (k = 0; k < n; k++) {
      if (rtIsNaN(x_data[k])) {
        idx_data_tmp = (n - nNaNs) - 1;
        idx_data[idx_data_tmp] = k + 1;
        xwork_data[idx_data_tmp] = x_data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib] = (signed char)(k + 1);
        x4[ib] = x_data[k];
        if (ib + 1 == 4) {
          quartetOffset = k - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            ib = 2;
          } else {
            i1 = 2;
            ib = 1;
          }

          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }

          d1 = x4[i1 - 1];
          d2 = x4[i3 - 1];
          if (d1 <= d2) {
            if (x4[ib - 1] <= d2) {
              perm[0] = (signed char)i1;
              perm[1] = (signed char)ib;
              perm[2] = (signed char)i3;
              perm[3] = (signed char)i4;
            } else if (x4[ib - 1] <= x4[i4 - 1]) {
              perm[0] = (signed char)i1;
              perm[1] = (signed char)i3;
              perm[2] = (signed char)ib;
              perm[3] = (signed char)i4;
            } else {
              perm[0] = (signed char)i1;
              perm[1] = (signed char)i3;
              perm[2] = (signed char)i4;
              perm[3] = (signed char)ib;
            }
          } else {
            d2 = x4[i4 - 1];
            if (d1 <= d2) {
              if (x4[ib - 1] <= d2) {
                perm[0] = (signed char)i3;
                perm[1] = (signed char)i1;
                perm[2] = (signed char)ib;
                perm[3] = (signed char)i4;
              } else {
                perm[0] = (signed char)i3;
                perm[1] = (signed char)i1;
                perm[2] = (signed char)i4;
                perm[3] = (signed char)ib;
              }
            } else {
              perm[0] = (signed char)i3;
              perm[1] = (signed char)i4;
              perm[2] = (signed char)i1;
              perm[3] = (signed char)ib;
            }
          }

          idx_data_tmp = perm[0] - 1;
          idx_data[quartetOffset - 3] = idx4[idx_data_tmp];
          i3 = perm[1] - 1;
          idx_data[quartetOffset - 2] = idx4[i3];
          ib = perm[2] - 1;
          idx_data[quartetOffset - 1] = idx4[ib];
          i1 = perm[3] - 1;
          idx_data[quartetOffset] = idx4[i1];
          x_data[quartetOffset - 3] = x4[idx_data_tmp];
          x_data[quartetOffset - 2] = x4[i3];
          x_data[quartetOffset - 1] = x4[ib];
          x_data[quartetOffset] = x4[i1];
          ib = -1;
        }
      }
    }

    i4 = (n - nNaNs) - 1;
    if (ib + 1 > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib + 1 == 1) {
        perm[0] = 1;
      } else if (ib + 1 == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }

      for (k = 0; k <= ib; k++) {
        idx_data_tmp = perm[k] - 1;
        i3 = (i4 - ib) + k;
        idx_data[i3] = idx4[idx_data_tmp];
        x_data[i3] = x4[idx_data_tmp];
      }
    }

    ib = (nNaNs >> 1) + 1;
    for (k = 0; k <= ib - 2; k++) {
      i1 = (i4 + k) + 1;
      i3 = (signed char)idx_data[i1];
      idx_data_tmp = (n - k) - 1;
      idx_data[i1] = (signed char)idx_data[idx_data_tmp];
      idx_data[idx_data_tmp] = i3;
      x_data[i1] = xwork_data[idx_data_tmp];
      x_data[idx_data_tmp] = xwork_data[i1];
    }

    if ((nNaNs & 1) != 0) {
      i4 += ib;
      x_data[i4] = xwork_data[i4];
    }

    ib = x_size[1] - nNaNs;
    if (ib > 1) {
      i1 = (signed char)x_size[1];
      if (0 <= i1 - 1) {
        memset(&iwork_data[0], 0, (unsigned int)(i1 * (int)sizeof(int)));
      }

      merge_block(idx_data, x_data, ib, iwork_data, xwork_data);
    }
  }
}

/*
 * File trailer for sort1.c
 *
 * [EOF]
 */
