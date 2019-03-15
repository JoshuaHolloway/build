/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: conv2AXPY.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 21:04:51
 */

/* Include Files */
#include <string.h>
#include "sobel.h"
#include "conv2AXPY.h"
#include "sobel_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *a
 *                emxArray_real_T *c
 * Return Type  : void
 */
void b_conv2AXPYSameCMP(const emxArray_real_T *a, emxArray_real_T *c)
{
  int ma;
  int na;
  int jcut;
  int i2;
  int ub_loop;
  int j;
  int imax;
  int imin;
  int bij;
  int jbmax;
  int jbmin;
  double cj_data[1024];
  int jb;
  int ib;
  static const signed char b[9] = { 1, 2, 1, 0, 0, 0, -1, -2, -1 };

  int i;
  ma = a->size[0];
  na = a->size[1];
  if ((a->size[0] == 0) || (a->size[1] == 0)) {
    i2 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(c, i2);
    ub_loop = a->size[0] * a->size[1];
    for (i2 = 0; i2 < ub_loop; i2++) {
      c->data[i2] = 0.0;
    }
  } else {
    jcut = a->size[1] - 1;
    i2 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(c, i2);
    i2 = a->size[1];
    ub_loop = i2 - 1;

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(imax,imin,bij,jbmax,jbmin,cj_data,jb,ib,i)

    for (j = 0; j <= ub_loop; j++) {
      if (0 <= ma - 1) {
        memset(&cj_data[0], 0, (unsigned int)(ma * (int)sizeof(double)));
      }

      jbmin = (1 + j <= 1);
      if (1 + j < jcut) {
        jbmax = 2;
      } else {
        jbmax = na - j;
      }

      for (jb = jbmin; jb <= jbmax; jb++) {
        for (ib = 0; ib < 3; ib++) {
          bij = b[(3 * (2 - jb) - ib) + 2];
          if (ib < 1) {
            imin = 2;
            imax = ma;
          } else {
            imin = 1;
            imax = (ma - ib) + 1;
          }

          for (i = imin; i <= imax; i++) {
            cj_data[i - 1] += (double)bij * a->data[((i + ib) + a->size[0] * ((j
              + jb) - 1)) - 2];
          }
        }
      }

      for (imax = 0; imax < ma; imax++) {
        c->data[imax + c->size[0] * j] = cj_data[imax];
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *a
 *                emxArray_real_T *c
 * Return Type  : void
 */
void conv2AXPYSameCMP(const emxArray_real_T *a, emxArray_real_T *c)
{
  int ma;
  int na;
  int jcut;
  int i1;
  int ub_loop;
  int j;
  int imax;
  int imin;
  int bij;
  int jbmax;
  int jbmin;
  double cj_data[1024];
  int jb;
  int ib;
  static const signed char b[9] = { 1, 0, -1, 2, 0, -2, 1, 0, -1 };

  int i;
  ma = a->size[0];
  na = a->size[1];
  if ((a->size[0] == 0) || (a->size[1] == 0)) {
    i1 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(c, i1);
    ub_loop = a->size[0] * a->size[1];
    for (i1 = 0; i1 < ub_loop; i1++) {
      c->data[i1] = 0.0;
    }
  } else {
    jcut = a->size[1] - 1;
    i1 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(c, i1);
    i1 = a->size[1];
    ub_loop = i1 - 1;

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(imax,imin,bij,jbmax,jbmin,cj_data,jb,ib,i)

    for (j = 0; j <= ub_loop; j++) {
      if (0 <= ma - 1) {
        memset(&cj_data[0], 0, (unsigned int)(ma * (int)sizeof(double)));
      }

      jbmin = (1 + j <= 1);
      if (1 + j < jcut) {
        jbmax = 2;
      } else {
        jbmax = na - j;
      }

      for (jb = jbmin; jb <= jbmax; jb++) {
        for (ib = 0; ib < 3; ib++) {
          bij = b[(3 * (2 - jb) - ib) + 2];
          if (ib < 1) {
            imin = 2;
            imax = ma;
          } else {
            imin = 1;
            imax = (ma - ib) + 1;
          }

          for (i = imin; i <= imax; i++) {
            cj_data[i - 1] += (double)bij * a->data[((i + ib) + a->size[0] * ((j
              + jb) - 1)) - 2];
          }
        }
      }

      for (imax = 0; imax < ma; imax++) {
        c->data[imax + c->size[0] * j] = cj_data[imax];
      }
    }
  }
}

/*
 * File trailer for conv2AXPY.c
 *
 * [EOF]
 */
