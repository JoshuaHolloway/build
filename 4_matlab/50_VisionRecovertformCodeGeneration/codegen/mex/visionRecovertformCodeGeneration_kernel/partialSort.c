/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * partialSort.c
 *
 * Code generation for function 'partialSort'
 *
 */

/* Include files */
#include <math.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "partialSort.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "sub2ind.h"
#include "eml_int_forloop_overflow_check.h"
#include "sort1.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
static emlrtRSInfo nd_emlrtRSI = { 23, /* lineNo */
  "partialSort",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 27, /* lineNo */
  "partialSort",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 28, /* lineNo */
  "partialSort",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 39, /* lineNo */
  "partialSort",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 27, /* lineNo */
  "log2",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\log2.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 48, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 18, /* lineNo */
  "log2",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+scalar\\log2.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 55, /* lineNo */
  "log2",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+scalar\\log2.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 15, /* lineNo */
  "min",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 16, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 42, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 126,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 257,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 329,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 432,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 431,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 428,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 16, /* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 39, /* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 71, /* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 23, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtRTEInfo id_emlrtRTEI = { 15,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 19,/* lineNo */
  15,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 23,/* lineNo */
  6,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 44,/* lineNo */
  11,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 329,/* lineNo */
  9,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 422,/* lineNo */
  5,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "minOrMax",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 27,/* lineNo */
  24,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 27,/* lineNo */
  39,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 28,/* lineNo */
  37,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 28,/* lineNo */
  51,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 29,/* lineNo */
  15,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 5,/* lineNo */
  30,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 5,/* lineNo */
  19,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 31,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  27,                                  /* lineNo */
  14,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  27,                                  /* lineNo */
  28,                                  /* colNo */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m"/* pName */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "partialSort",                       /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\partialSort.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void partialSort(const emlrtStack *sp, emxArray_real32_T *x, emxArray_real32_T
                 *values, emxArray_uint32_T *indices)
{
  int32_T n;
  int32_T i11;
  int32_T loop_ub;
  emxArray_int32_T *b_indices;
  real_T f;
  int32_T eint;
  emxArray_real32_T *xSorted;
  emxArray_int32_T *r11;
  emxArray_uint32_T *indx;
  emxArray_real32_T *ex;
  emxArray_int32_T *idx;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  emxArray_int32_T *c_indices;
  int32_T i;
  emxArray_int32_T *iidx;
  int32_T m;
  int32_T b_n;
  uint32_T b_x[2];
  int32_T j;
  boolean_T overflow;
  real32_T b;
  int32_T iv6[2];
  uint32_T b_varargin_2[2];
  boolean_T p;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  n = 2;
  if (2 > x->size[1]) {
    n = x->size[1];
  }

  i11 = values->size[0] * values->size[1];
  values->size[0] = n;
  values->size[1] = x->size[0];
  emxEnsureCapacity_real32_T(sp, values, i11, &id_emlrtRTEI);
  loop_ub = n * x->size[0];
  for (i11 = 0; i11 < loop_ub; i11++) {
    values->data[i11] = 0.0F;
  }

  emxInit_int32_T(sp, &b_indices, 2, &yd_emlrtRTEI, true);
  i11 = b_indices->size[0] * b_indices->size[1];
  b_indices->size[0] = n;
  b_indices->size[1] = x->size[0];
  emxEnsureCapacity_int32_T(sp, b_indices, i11, &jd_emlrtRTEI);
  loop_ub = n * x->size[0];
  for (i11 = 0; i11 < loop_ub; i11++) {
    b_indices->data[i11] = 0;
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i11 = indices->size[0] * indices->size[1];
    indices->size[0] = n;
    indices->size[1] = x->size[0];
    emxEnsureCapacity_uint32_T(sp, indices, i11, &kd_emlrtRTEI);
    loop_ub = n * x->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      indices->data[i11] = 0U;
    }
  } else {
    st.site = &nd_emlrtRSI;
    b_st.site = &rd_emlrtRSI;
    c_st.site = &sd_emlrtRSI;
    d_st.site = &td_emlrtRSI;
    e_st.site = &ud_emlrtRSI;
    f = frexp(x->size[1], &eint);
    if (f == 0.5) {
      f = (real_T)eint - 1.0;
    } else if ((eint == 1) && (f < 0.75)) {
      f = muDoubleScalarLog(2.0 * f) / 0.69314718055994529;
    } else {
      f = muDoubleScalarLog(f) / 0.69314718055994529 + (real_T)eint;
    }

    if (n < f) {
      emxInit_int32_T(sp, &r11, 2, &xd_emlrtRTEI, true);
      emxInit_uint32_T(sp, &indx, 1, &xd_emlrtRTEI, true);
      emxInit_real32_T(sp, &ex, 1, &xd_emlrtRTEI, true);
      emxInit_int32_T(sp, &idx, 1, &xd_emlrtRTEI, true);
      emxInit_real_T(sp, &varargin_1, 2, &ud_emlrtRTEI, true);
      emxInit_real_T(sp, &varargin_2, 2, &vd_emlrtRTEI, true);
      emxInit_int32_T(sp, &c_indices, 2, &vd_emlrtRTEI, true);
      for (i = 0; i < n; i++) {
        st.site = &od_emlrtRSI;
        b_st.site = &vd_emlrtRSI;
        c_st.site = &wd_emlrtRSI;
        d_st.site = &xd_emlrtRSI;
        e_st.site = &yd_emlrtRSI;
        f_st.site = &ae_emlrtRSI;
        g_st.site = &be_emlrtRSI;
        m = x->size[0];
        b_n = x->size[1];
        b_x[0] = (uint32_T)x->size[0];
        i11 = ex->size[0];
        ex->size[0] = (int32_T)b_x[0];
        emxEnsureCapacity_real32_T(&g_st, ex, i11, &od_emlrtRTEI);
        i11 = idx->size[0];
        idx->size[0] = x->size[0];
        emxEnsureCapacity_int32_T(&g_st, idx, i11, &pd_emlrtRTEI);
        loop_ub = x->size[0];
        for (i11 = 0; i11 < loop_ub; i11++) {
          idx->data[i11] = 1;
        }

        h_st.site = &ee_emlrtRSI;
        overflow = (x->size[0] > 2147483646);
        if (overflow) {
          i_st.site = &mb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (eint = 0; eint < m; eint++) {
          ex->data[eint] = x->data[eint];
        }

        h_st.site = &de_emlrtRSI;
        overflow = ((2 <= x->size[1]) && (x->size[1] > 2147483646));
        if (overflow) {
          i_st.site = &mb_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (j = 2; j <= b_n; j++) {
          h_st.site = &ce_emlrtRSI;
          if (m > 2147483646) {
            i_st.site = &mb_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (eint = 0; eint < m; eint++) {
            b = x->data[eint + x->size[0] * (j - 1)];
            overflow = ((!muSingleScalarIsNaN(b)) && (muSingleScalarIsNaN
              (ex->data[eint]) || (ex->data[eint] > b)));
            if (overflow) {
              ex->data[eint] = x->data[eint + x->size[0] * (j - 1)];
              idx->data[eint] = j;
            }
          }
        }

        i11 = indx->size[0];
        indx->size[0] = idx->size[0];
        emxEnsureCapacity_uint32_T(&b_st, indx, i11, &rd_emlrtRTEI);
        loop_ub = idx->size[0];
        for (i11 = 0; i11 < loop_ub; i11++) {
          indx->data[i11] = (uint32_T)idx->data[i11];
        }

        i11 = values->size[0];
        j = 1 + i;
        if ((j < 1) || (j > i11)) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i11, &ab_emlrtBCI, sp);
        }

        loop_ub = values->size[1];
        i11 = idx->size[0];
        idx->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, idx, i11, &sd_emlrtRTEI);
        for (i11 = 0; i11 < loop_ub; i11++) {
          idx->data[i11] = i11;
        }

        iv6[0] = 1;
        iv6[1] = idx->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv6[0], 2, &(*(int32_T (*)[1])ex->size)[0],
          1, &f_emlrtECI, sp);
        eint = idx->size[0];
        for (i11 = 0; i11 < eint; i11++) {
          values->data[i + values->size[0] * idx->data[i11]] = ex->data[i11];
        }

        i11 = b_indices->size[0];
        j = 1 + i;
        if ((j < 1) || (j > i11)) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i11, &gb_emlrtBCI, sp);
        }

        loop_ub = b_indices->size[1];
        i11 = idx->size[0];
        idx->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(sp, idx, i11, &td_emlrtRTEI);
        for (i11 = 0; i11 < loop_ub; i11++) {
          idx->data[i11] = i11;
        }

        iv6[0] = 1;
        iv6[1] = idx->size[0];
        emlrtSubAssignSizeCheckR2012b(&iv6[0], 2, &(*(int32_T (*)[1])indx->size)
          [0], 1, &g_emlrtECI, sp);
        eint = idx->size[0];
        for (i11 = 0; i11 < eint; i11++) {
          b_indices->data[i + b_indices->size[0] * idx->data[i11]] = (int32_T)
            indx->data[i11];
        }

        i11 = x->size[0];
        j = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        loop_ub = (int32_T)((real_T)i11 - 1.0);
        varargin_1->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, varargin_1, j, &ud_emlrtRTEI);
        for (i11 = 0; i11 <= loop_ub; i11++) {
          varargin_1->data[i11] = 1.0 + (real_T)i11;
        }

        loop_ub = b_indices->size[1];
        i11 = b_indices->size[0];
        j = 1 + i;
        if ((j < 1) || (j > i11)) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i11, &fb_emlrtBCI, sp);
        }

        i11 = varargin_2->size[0] * varargin_2->size[1];
        varargin_2->size[0] = 1;
        varargin_2->size[1] = loop_ub;
        emxEnsureCapacity_real_T(sp, varargin_2, i11, &vd_emlrtRTEI);
        for (i11 = 0; i11 < loop_ub; i11++) {
          varargin_2->data[i11] = b_indices->data[(j + b_indices->size[0] * i11)
            - 1];
        }

        st.site = &pd_emlrtRSI;
        b_st.site = &fe_emlrtRSI;
        m = x->size[0];
        j = x->size[1];
        if (!allinrange(varargin_1, m)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &ci_emlrtRTEI,
            "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange",
            0);
        }

        b_x[0] = (uint32_T)varargin_1->size[0];
        b_x[1] = (uint32_T)varargin_1->size[1];
        loop_ub = b_indices->size[1];
        i11 = c_indices->size[0] * c_indices->size[1];
        c_indices->size[0] = 1;
        c_indices->size[1] = loop_ub;
        emxEnsureCapacity_int32_T(&b_st, c_indices, i11, &vd_emlrtRTEI);
        for (i11 = 0; i11 < loop_ub; i11++) {
          c_indices->data[i11] = b_indices->data[i + b_indices->size[0] * i11];
        }

        b_varargin_2[0] = (uint32_T)c_indices->size[0];
        b_varargin_2[1] = (uint32_T)c_indices->size[1];
        overflow = false;
        p = true;
        eint = 0;
        exitg1 = false;
        while ((!exitg1) && (eint < 2)) {
          if ((int32_T)b_x[eint] != (int32_T)b_varargin_2[eint]) {
            p = false;
            exitg1 = true;
          } else {
            eint++;
          }
        }

        if (p) {
          overflow = true;
        }

        if (!overflow) {
          emlrtErrorWithMessageIdR2018a(&b_st, &di_emlrtRTEI,
            "MATLAB:sub2ind:SubscriptVectorSize",
            "MATLAB:sub2ind:SubscriptVectorSize", 0);
        }

        c_st.site = &ge_emlrtRSI;
        d_st.site = &he_emlrtRSI;
        if (!allinrange(varargin_2, j)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &ci_emlrtRTEI,
            "MATLAB:sub2ind:IndexOutOfRange", "MATLAB:sub2ind:IndexOutOfRange",
            0);
        }

        i11 = r11->size[0] * r11->size[1];
        r11->size[0] = 1;
        r11->size[1] = varargin_1->size[1];
        emxEnsureCapacity_int32_T(sp, r11, i11, &wd_emlrtRTEI);
        eint = x->size[0] * x->size[1];
        loop_ub = varargin_1->size[0] * varargin_1->size[1];
        for (i11 = 0; i11 < loop_ub; i11++) {
          j = (int32_T)varargin_1->data[i11] + m * ((int32_T)varargin_2->
            data[i11] - 1);
          if ((j < 1) || (j > eint)) {
            emlrtDynamicBoundsCheckR2012b(j, 1, eint, &hb_emlrtBCI, sp);
          }

          r11->data[i11] = j;
        }

        loop_ub = r11->size[0] * r11->size[1] - 1;
        for (i11 = 0; i11 <= loop_ub; i11++) {
          x->data[r11->data[i11] - 1] = rtInfF;
        }
      }

      emxFree_int32_T(&c_indices);
      emxFree_real_T(&varargin_2);
      emxFree_real_T(&varargin_1);
      emxFree_int32_T(&idx);
      emxFree_real32_T(&ex);
      emxFree_uint32_T(&indx);
      emxFree_int32_T(&r11);
    } else {
      emxInit_real32_T(sp, &xSorted, 2, &xd_emlrtRTEI, true);
      st.site = &qd_emlrtRSI;
      i11 = xSorted->size[0] * xSorted->size[1];
      xSorted->size[0] = x->size[0];
      xSorted->size[1] = x->size[1];
      emxEnsureCapacity_real32_T(&st, xSorted, i11, &ld_emlrtRTEI);
      loop_ub = x->size[0] * x->size[1];
      for (i11 = 0; i11 < loop_ub; i11++) {
        xSorted->data[i11] = x->data[i11];
      }

      emxInit_int32_T(&st, &iidx, 2, &xd_emlrtRTEI, true);
      b_st.site = &ie_emlrtRSI;
      sort(&b_st, xSorted, iidx);
      if (1 > n) {
        loop_ub = 0;
      } else {
        i11 = xSorted->size[1];
        if (1 > i11) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i11, &eb_emlrtBCI, sp);
        }

        i11 = xSorted->size[1];
        if (n > i11) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i11, &db_emlrtBCI, sp);
        }

        loop_ub = n;
      }

      eint = xSorted->size[0];
      i11 = values->size[0] * values->size[1];
      values->size[0] = loop_ub;
      values->size[1] = eint;
      emxEnsureCapacity_real32_T(sp, values, i11, &nd_emlrtRTEI);
      for (i11 = 0; i11 < eint; i11++) {
        for (j = 0; j < loop_ub; j++) {
          values->data[j + values->size[0] * i11] = xSorted->data[i11 +
            xSorted->size[0] * j];
        }
      }

      emxFree_real32_T(&xSorted);
      if (1 > n) {
        n = 0;
      } else {
        i11 = iidx->size[1];
        if (1 > i11) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i11, &cb_emlrtBCI, sp);
        }

        i11 = iidx->size[1];
        if (n > i11) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i11, &bb_emlrtBCI, sp);
        }
      }

      loop_ub = iidx->size[0];
      i11 = b_indices->size[0] * b_indices->size[1];
      b_indices->size[0] = n;
      b_indices->size[1] = loop_ub;
      emxEnsureCapacity_int32_T(sp, b_indices, i11, &qd_emlrtRTEI);
      for (i11 = 0; i11 < loop_ub; i11++) {
        for (j = 0; j < n; j++) {
          b_indices->data[j + b_indices->size[0] * i11] = iidx->data[i11 +
            iidx->size[0] * j];
        }
      }

      emxFree_int32_T(&iidx);
    }

    i11 = indices->size[0] * indices->size[1];
    indices->size[0] = b_indices->size[0];
    indices->size[1] = b_indices->size[1];
    emxEnsureCapacity_uint32_T(sp, indices, i11, &md_emlrtRTEI);
    loop_ub = b_indices->size[0] * b_indices->size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      j = b_indices->data[i11];
      if (j < 0) {
        j = 0;
      }

      indices->data[i11] = (uint32_T)j;
    }
  }

  emxFree_int32_T(&b_indices);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (partialSort.c) */
