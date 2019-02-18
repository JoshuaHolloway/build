/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * conv2AXPY.c
 *
 * Code generation for function 'conv2AXPY'
 *
 */

/* Include files */
#include <string.h>
#include "func.h"
#include "conv2AXPY.h"

/* Function Definitions */
void conv2AXPYSameCMP(const double a[262144], const double b[9], double c[262144])
{
  int j;
  int imax;
  int imin;
  double bij;
  int jbmax;
  int jbmin;
  double cj[512];
  int jb;
  int ib;
  int i;

#pragma omp parallel for \
 num_threads(omp_get_max_threads()) \
 private(imax,imin,bij,jbmax,jbmin,cj,jb,ib,i)

  for (j = 0; j < 512; j++) {
    memset(&cj[0], 0, sizeof(double) << 9);
    jbmin = (1 + j <= 1);
    if (1 + j < 511) {
      jbmax = 2;
    } else {
      jbmax = 512 - j;
    }

    for (jb = jbmin; jb <= jbmax; jb++) {
      for (ib = 0; ib < 3; ib++) {
        bij = b[(3 * (2 - jb) - ib) + 2];
        if (ib < 1) {
          imin = 2;
          imax = 512;
        } else {
          imin = 1;
          imax = 513 - ib;
        }

        for (i = imin; i <= imax; i++) {
          cj[i - 1] += bij * a[((i + ib) + (((j + jb) - 1) << 9)) - 2];
        }
      }
    }

    memcpy(&c[j << 9], &cj[0], sizeof(double) << 9);
  }
}

/* End of code generation (conv2AXPY.c) */
