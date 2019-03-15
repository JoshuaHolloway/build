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
#include "rt_nonfinite.h"
#include "sobel.h"
#include "conv2AXPY.h"
#include "xaxpy.h"
#include "sobel_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 441,/* lineNo */
  5,                                   /* colNo */
  "conv2AXPY",                         /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 429,/* lineNo */
  14,                                  /* colNo */
  "conv2AXPY",                         /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pName */
};

/* Function Definitions */
void b_conv2AXPYSameCMP(const emlrtStack *sp, const emxArray_real_T *a,
  boolean_T prefBLAS, emxArray_real_T *c)
{
  int32_T ma;
  int32_T na;
  boolean_T BLAS;
  int32_T i2;
  int32_T jcut;
  int32_T ub_loop;
  int32_T j;
  int32_T imax;
  int32_T imin;
  int32_T ic0;
  boolean_T bijNotZero;
  int32_T bij;
  int32_T jbmax;
  int32_T jbmin;
  real_T cj_data[1024];
  int32_T jb;
  int32_T ib;
  static const int8_T b[9] = { 1, 2, 1, 0, 0, 0, -1, -2, -1 };

  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf b_emlrtJBEnviron;
  boolean_T emlrtHadParallelError = false;
  ma = a->size[0];
  na = a->size[1];
  if ((a->size[0] == 0) || (a->size[1] == 0)) {
    i2 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(sp, c, i2, &g_emlrtRTEI);
    ub_loop = a->size[0] * a->size[1];
    for (i2 = 0; i2 < ub_loop; i2++) {
      c->data[i2] = 0.0;
    }
  } else {
    BLAS = prefBLAS;
    jcut = a->size[1] - 1;
    i2 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(sp, c, i2, &h_emlrtRTEI);
    i2 = a->size[1];
    ub_loop = i2 - 1;
    emlrtEnterParallelRegion(sp, omp_in_parallel());
    emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(imax,imin,ic0,bijNotZero,bij,jbmax,jbmin,cj_data,jb,ib,b_emlrtJBEnviron) \
 firstprivate(st,emlrtHadParallelError)

    {
      if (setjmp(b_emlrtJBEnviron) == 0) {
        st.prev = sp;
        st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
        st.site = NULL;
        emlrtSetJmpBuf(&st, &b_emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (j = 0; j <= ub_loop; j++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(b_emlrtJBEnviron) == 0) {
          if (0 <= ma - 1) {
            memset(&cj_data[0], 0, (uint32_T)(ma * (int32_T)sizeof(real_T)));
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
              bijNotZero = (bij != 0);
              if (BLAS && bijNotZero) {
                if (ib < 1) {
                  ic0 = 2;
                  imin = ma - 1;
                } else {
                  ic0 = 1;
                  imin = (ma - ib) + 1;
                }

                imax = ((ic0 + ib) + ((jb + j) - 1) * ma) - 1;
                xaxpy(imin, bij, a, imax, cj_data, ic0);
              } else {
                if (ib < 1) {
                  imin = 2;
                  imax = ma;
                } else {
                  imin = 1;
                  imax = (ma - ib) + 1;
                }

                for (ic0 = imin; ic0 <= imax; ic0++) {
                  cj_data[ic0 - 1] += (real_T)bij * a->data[((ic0 + ib) +
                    a->size[0] * ((j + jb) - 1)) - 2];
                }
              }
            }
          }

          for (imax = 0; imax < ma; imax++) {
            c->data[imax + c->size[0] * j] = cj_data[imax];
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }

    emlrtPopJmpBuf(sp, &emlrtJBStack);
    emlrtExitParallelRegion(sp, omp_in_parallel());
  }
}

void conv2AXPYSameCMP(const emlrtStack *sp, const emxArray_real_T *a, boolean_T
                      prefBLAS, emxArray_real_T *c)
{
  int32_T ma;
  int32_T na;
  boolean_T BLAS;
  int32_T i1;
  int32_T jcut;
  int32_T ub_loop;
  int32_T j;
  int32_T imax;
  int32_T imin;
  int32_T ic0;
  boolean_T bijNotZero;
  int32_T bij;
  int32_T jbmax;
  int32_T jbmin;
  real_T cj_data[1024];
  int32_T jb;
  int32_T ib;
  static const int8_T b[9] = { 1, 0, -1, 2, 0, -2, 1, 0, -1 };

  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf b_emlrtJBEnviron;
  boolean_T emlrtHadParallelError = false;
  ma = a->size[0];
  na = a->size[1];
  if ((a->size[0] == 0) || (a->size[1] == 0)) {
    i1 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(sp, c, i1, &g_emlrtRTEI);
    ub_loop = a->size[0] * a->size[1];
    for (i1 = 0; i1 < ub_loop; i1++) {
      c->data[i1] = 0.0;
    }
  } else {
    BLAS = prefBLAS;
    jcut = a->size[1] - 1;
    i1 = c->size[0] * c->size[1];
    c->size[0] = a->size[0];
    c->size[1] = a->size[1];
    emxEnsureCapacity_real_T(sp, c, i1, &h_emlrtRTEI);
    i1 = a->size[1];
    ub_loop = i1 - 1;
    emlrtEnterParallelRegion(sp, omp_in_parallel());
    emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(imax,imin,ic0,bijNotZero,bij,jbmax,jbmin,cj_data,jb,ib,b_emlrtJBEnviron) \
 firstprivate(st,emlrtHadParallelError)

    {
      if (setjmp(b_emlrtJBEnviron) == 0) {
        st.prev = sp;
        st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
        st.site = NULL;
        emlrtSetJmpBuf(&st, &b_emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (j = 0; j <= ub_loop; j++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(b_emlrtJBEnviron) == 0) {
          if (0 <= ma - 1) {
            memset(&cj_data[0], 0, (uint32_T)(ma * (int32_T)sizeof(real_T)));
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
              bijNotZero = (bij != 0);
              if (BLAS && bijNotZero) {
                if (ib < 1) {
                  ic0 = 2;
                  imin = ma - 1;
                } else {
                  ic0 = 1;
                  imin = (ma - ib) + 1;
                }

                imax = ((ic0 + ib) + ((jb + j) - 1) * ma) - 1;
                xaxpy(imin, bij, a, imax, cj_data, ic0);
              } else {
                if (ib < 1) {
                  imin = 2;
                  imax = ma;
                } else {
                  imin = 1;
                  imax = (ma - ib) + 1;
                }

                for (ic0 = imin; ic0 <= imax; ic0++) {
                  cj_data[ic0 - 1] += (real_T)bij * a->data[((ic0 + ib) +
                    a->size[0] * ((j + jb) - 1)) - 2];
                }
              }
            }
          }

          for (imax = 0; imax < ma; imax++) {
            c->data[imax + c->size[0] * j] = cj_data[imax];
          }
        } else {
          emlrtHadParallelError = true;
        }
      }
    }

    emlrtPopJmpBuf(sp, &emlrtJBStack);
    emlrtExitParallelRegion(sp, omp_in_parallel());
  }
}

/* End of code generation (conv2AXPY.c) */
