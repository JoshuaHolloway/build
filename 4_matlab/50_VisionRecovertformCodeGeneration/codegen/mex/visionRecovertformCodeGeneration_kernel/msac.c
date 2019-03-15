/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * msac.c
 *
 * Code generation for function 'msac'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "msac.h"
#include "mod.h"
#include "rand.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "error.h"
#include "sum.h"
#include "estimateGeometricTransform.h"
#include "any.h"
#include "all1.h"

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI = { 107,/* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 105,/* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 103,/* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 102,/* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 98, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 97, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 86, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 85, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 77, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 70, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 66, /* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 24, /* lineNo */
  "randperm",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 128,/* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 130,/* lineNo */
  "msac",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 7,  /* lineNo */
  "computeLoopNumber",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\computeLoopNumber.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 14, /* lineNo */
  "computeLoopNumber",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\computeLoopNumber.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 15, /* lineNo */
  "computeLoopNumber",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\computeLoopNumber.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 13, /* lineNo */
  "log10",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\log10.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 434,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 54,/* lineNo */
  1,                                   /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 120,/* lineNo */
  5,                                   /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 1,/* lineNo */
  70,                                  /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 102,/* lineNo */
  37,                                  /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 83,/* lineNo */
  13,                                  /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 85,/* lineNo */
  34,                                  /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 106,/* lineNo */
  9,                                   /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 109,/* lineNo */
  13,                                  /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 128,/* lineNo */
  1,                                   /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m"/* pName */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ii_emlrtRTEI = { 23,/* lineNo */
  19,                                  /* colNo */
  "randperm",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"/* pName */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  69,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 69,  /* lineNo */
  30,                                  /* colNo */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "msac",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+ransac\\msac.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void msac(const emlrtStack *sp, const emxArray_real32_T *allPoints, boolean_T
          *isFound, real32_T bestModelParams_data[], int32_T
          bestModelParams_size[2], emxArray_boolean_T *inliers)
{
  emxArray_boolean_T *bestInliers;
  int32_T numPts;
  int32_T idxTrial;
  int32_T numTrials;
  real32_T bestDis;
  int32_T skipTrials;
  int32_T i13;
  int32_T nleftm1;
  emxArray_real32_T *dis;
  emxArray_boolean_T *b_dis;
  real_T indices_data[2];
  boolean_T tmp_data[9];
  int32_T tmp_size[1];
  boolean_T b_tmp_data[9];
  int8_T hashTbl_data[2];
  real_T t;
  real_T j;
  real_T selectedLoc;
  emxArray_boolean_T c_tmp_data;
  boolean_T d_tmp_data[9];
  real_T u;
  real_T loc_data[2];
  int32_T i;
  boolean_T isValidModel;
  int32_T jlast;
  int32_T samplePoints_size[3];
  emxArray_int32_T *r14;
  emxArray_real32_T samplePoints_data;
  real32_T b_samplePoints_data[8];
  int32_T i14;
  emxArray_real32_T *b_allPoints;
  int32_T b_jlast;
  real32_T modelParams[9];
  boolean_T bv0[9];
  boolean_T bv1[9];
  boolean_T exitg1;
  real32_T inlierProbability;
  real32_T x_data[9];
  int32_T b_tmp_size[1];
  emxArray_boolean_T e_tmp_data;
  boolean_T f_tmp_data[9];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &bestInliers, 1, &ie_emlrtRTEI, true);
  numPts = allPoints->size[0];
  idxTrial = 1;
  numTrials = 1000;
  bestDis = 1.5F * (real32_T)allPoints->size[0];
  bestModelParams_size[0] = 0;
  bestModelParams_size[1] = 0;
  skipTrials = 0;
  i13 = bestInliers->size[0];
  bestInliers->size[0] = allPoints->size[0];
  emxEnsureCapacity_boolean_T(sp, bestInliers, i13, &ie_emlrtRTEI);
  nleftm1 = allPoints->size[0];
  for (i13 = 0; i13 < nleftm1; i13++) {
    bestInliers->data[i13] = false;
  }

  emxInit_real32_T(sp, &dis, 1, &qe_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_dis, 1, &ne_emlrtRTEI, true);
  while ((idxTrial <= numTrials) && (skipTrials < 10000)) {
    st.site = &ig_emlrtRSI;
    if (2 > numPts) {
      emlrtErrorWithMessageIdR2018a(&st, &ii_emlrtRTEI,
        "MATLAB:randperm:inputKTooLarge", "MATLAB:randperm:inputKTooLarge", 0);
    }

    b_st.site = &jg_emlrtRSI;
    indices_data[1] = 0.0;
    if (2 >= numPts) {
      indices_data[0] = 1.0;
      j = b_rand() * 2.0;
      j = muDoubleScalarFloor(j);
      indices_data[1] = indices_data[(int32_T)(j + 1.0) - 1];
      indices_data[(int32_T)(j + 1.0) - 1] = 2.0;
    } else if (2.0 >= (real_T)numPts / 4.0) {
      t = 0.0;
      selectedLoc = numPts;
      j = 2.0 / (real_T)numPts;
      u = b_rand();
      while (u > j) {
        t++;
        selectedLoc--;
        j += (1.0 - j) * (2.0 / selectedLoc);
      }

      t++;
      j = b_rand();
      j = muDoubleScalarFloor(j);
      indices_data[0] = 0.0;
      indices_data[(int32_T)(j + 1.0) - 1] = t;
      selectedLoc = (real_T)numPts - t;
      j = 1.0 / selectedLoc;
      u = b_rand();
      while (u > j) {
        t++;
        selectedLoc--;
        j += (1.0 - j) * (1.0 / selectedLoc);
      }

      t++;
      j = b_rand() * 2.0;
      j = muDoubleScalarFloor(j);
      indices_data[1] = indices_data[(int32_T)(j + 1.0) - 1];
      indices_data[(int32_T)(j + 1.0) - 1] = t;
    } else {
      hashTbl_data[0] = 0;
      hashTbl_data[1] = 0;
      nleftm1 = numPts - 1;
      selectedLoc = b_rand() * ((real_T)nleftm1 + 1.0);
      selectedLoc = muDoubleScalarFloor(selectedLoc);
      indices_data[0] = selectedLoc + 1.0;
      loc_data[0] = selectedLoc;
      hashTbl_data[(int32_T)(1.0 + b_mod(selectedLoc)) - 1] = 1;
      jlast = hashTbl_data[(int32_T)(1.0 + b_mod(nleftm1)) - 1];
      while ((jlast > 0) && (selectedLoc != nleftm1)) {
        jlast = 0;
      }

      selectedLoc = b_rand() * ((real_T)(numPts - 2) + 1.0);
      selectedLoc = muDoubleScalarFloor(selectedLoc);
      j = hashTbl_data[(int32_T)(1.0 + b_mod(selectedLoc)) - 1];
      while ((j > 0.0) && (loc_data[0] != selectedLoc)) {
        j = 0.0;
      }

      if (j > 0.0) {
        if (jlast > 0) {
          b_jlast = 0;
        } else {
          b_jlast = nleftm1;
        }

        indices_data[1] = (real_T)b_jlast + 1.0;
      } else {
        indices_data[1] = selectedLoc + 1.0;
      }
    }

    i = allPoints->size[0];
    samplePoints_size[0] = 2;
    samplePoints_size[1] = 2;
    samplePoints_size[2] = 2;
    for (i13 = 0; i13 < 2; i13++) {
      i14 = (int32_T)indices_data[0];
      if (indices_data[0] != i14) {
        emlrtIntegerCheckR2012b(indices_data[0], &f_emlrtDCI, sp);
      }

      if ((i14 < 1) || (i14 > i)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i, &mb_emlrtBCI, sp);
      }

      nleftm1 = i13 << 2;
      b_samplePoints_data[nleftm1] = allPoints->data[(i14 + (allPoints->size[0] <<
        1) * i13) - 1];
      jlast = (int32_T)indices_data[1];
      if (indices_data[1] != jlast) {
        emlrtIntegerCheckR2012b(indices_data[1], &f_emlrtDCI, sp);
      }

      if ((jlast < 1) || (jlast > i)) {
        emlrtDynamicBoundsCheckR2012b(jlast, 1, i, &mb_emlrtBCI, sp);
      }

      b_samplePoints_data[1 + nleftm1] = allPoints->data[(jlast +
        (allPoints->size[0] << 1) * i13) - 1];
      if (indices_data[0] != (int32_T)indices_data[0]) {
        emlrtIntegerCheckR2012b(indices_data[0], &f_emlrtDCI, sp);
      }

      if ((i14 < 1) || (i14 > i)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i, &mb_emlrtBCI, sp);
      }

      b_samplePoints_data[2 + nleftm1] = allPoints->data[((i14 + allPoints->
        size[0]) + (allPoints->size[0] << 1) * i13) - 1];
      if (indices_data[1] != (int32_T)indices_data[1]) {
        emlrtIntegerCheckR2012b(indices_data[1], &f_emlrtDCI, sp);
      }

      if ((jlast < 1) || (jlast > i)) {
        emlrtDynamicBoundsCheckR2012b(jlast, 1, i, &mb_emlrtBCI, sp);
      }

      b_samplePoints_data[3 + nleftm1] = allPoints->data[((jlast +
        allPoints->size[0]) + (allPoints->size[0] << 1) * i13) - 1];
    }

    samplePoints_data.data = &b_samplePoints_data[0];
    samplePoints_data.size = &samplePoints_size[0];
    samplePoints_data.allocatedSize = 8;
    samplePoints_data.numDimensions = 3;
    samplePoints_data.canFreeData = false;
    st.site = &hg_emlrtRSI;
    computeSimilarity(&st, &samplePoints_data, modelParams);
    for (i13 = 0; i13 < 9; i13++) {
      bv0[i13] = !muSingleScalarIsInf(modelParams[i13]);
      bv1[i13] = !muSingleScalarIsNaN(modelParams[i13]);
    }

    isValidModel = true;
    nleftm1 = 0;
    exitg1 = false;
    while ((!exitg1) && (nleftm1 < 9)) {
      if ((!bv0[nleftm1]) || (!bv1[nleftm1])) {
        isValidModel = false;
        exitg1 = true;
      } else {
        nleftm1++;
      }
    }

    if (isValidModel) {
      st.site = &gg_emlrtRSI;
      b_st.site = &li_emlrtRSI;
      evaluateTForm(&b_st, modelParams, allPoints, dis);
      jlast = dis->size[0];
      for (i = 0; i < jlast; i++) {
        if (dis->data[i] > 1.5F) {
          i13 = dis->size[0];
          i14 = i + 1;
          if ((i14 < 1) || (i14 > i13)) {
            emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &lb_emlrtBCI, &st);
          }

          dis->data[i14 - 1] = 1.5F;
        }
      }

      b_st.site = &mi_emlrtRSI;
      inlierProbability = sum(&b_st, dis);
      if (inlierProbability < bestDis) {
        bestDis = inlierProbability;
        i13 = bestInliers->size[0];
        bestInliers->size[0] = dis->size[0];
        emxEnsureCapacity_boolean_T(sp, bestInliers, i13, &me_emlrtRTEI);
        nleftm1 = dis->size[0];
        for (i13 = 0; i13 < nleftm1; i13++) {
          bestInliers->data[i13] = (dis->data[i13] < 1.5F);
        }

        bestModelParams_size[0] = 3;
        bestModelParams_size[1] = 3;
        for (i13 = 0; i13 < 9; i13++) {
          bestModelParams_data[i13] = modelParams[i13];
        }

        i13 = b_dis->size[0];
        b_dis->size[0] = dis->size[0];
        emxEnsureCapacity_boolean_T(sp, b_dis, i13, &ne_emlrtRTEI);
        nleftm1 = dis->size[0];
        for (i13 = 0; i13 < nleftm1; i13++) {
          b_dis->data[i13] = (dis->data[i13] < 1.5F);
        }

        st.site = &fg_emlrtRSI;
        inlierProbability = (real32_T)b_sum(&st, b_dis);
        st.site = &eg_emlrtRSI;
        b_st.site = &aj_emlrtRSI;
        inlierProbability = muSingleScalarPower(inlierProbability / (real32_T)
          numPts, 2.0F);
        if (inlierProbability < 1.1920929E-7F) {
          nleftm1 = MAX_int32_T;
        } else {
          b_st.site = &bj_emlrtRSI;
          b_st.site = &cj_emlrtRSI;
          if (1.0F - inlierProbability < 0.0F) {
            c_st.site = &ej_emlrtRSI;
            f_error(&c_st);
          }

          inlierProbability = muSingleScalarCeil(-1.99999785F /
            muSingleScalarLog10(1.0F - inlierProbability));
          if (inlierProbability < 2.14748365E+9F) {
            nleftm1 = (int32_T)inlierProbability;
          } else {
            nleftm1 = 0;
          }
        }

        numTrials = muIntScalarMin_sint32(numTrials, nleftm1);
      }

      idxTrial++;
    } else {
      skipTrials++;
    }
  }

  emxFree_boolean_T(&b_dis);
  st.site = &dg_emlrtRSI;
  nleftm1 = bestModelParams_size[0] * bestModelParams_size[1];
  for (i13 = 0; i13 < nleftm1; i13++) {
    tmp_data[i13] = muSingleScalarIsInf(bestModelParams_data[i13]);
  }

  for (i13 = 0; i13 < nleftm1; i13++) {
    b_tmp_data[i13] = muSingleScalarIsNaN(bestModelParams_data[i13]);
  }

  tmp_size[0] = nleftm1;
  for (i13 = 0; i13 < nleftm1; i13++) {
    d_tmp_data[i13] = ((!tmp_data[i13]) && (!b_tmp_data[i13]));
  }

  c_tmp_data.data = &d_tmp_data[0];
  c_tmp_data.size = &tmp_size[0];
  c_tmp_data.allocatedSize = 9;
  c_tmp_data.numDimensions = 1;
  c_tmp_data.canFreeData = false;
  b_st.site = &fj_emlrtRSI;
  isValidModel = c_all(&b_st, &c_tmp_data);
  st.site = &cg_emlrtRSI;
  if (isValidModel && (bestInliers->size[0] != 0) && (b_sum(&st, bestInliers) >=
       2.0)) {
    *isFound = true;
  } else {
    *isFound = false;
  }

  emxInit_int32_T(sp, &r14, 1, &ke_emlrtRTEI, true);
  emxInit_real32_T(sp, &b_allPoints, 3, &le_emlrtRTEI, true);
  if (*isFound) {
    jlast = bestInliers->size[0] - 1;
    nleftm1 = 0;
    for (i = 0; i <= jlast; i++) {
      if (bestInliers->data[i]) {
        nleftm1++;
      }
    }

    i13 = r14->size[0];
    r14->size[0] = nleftm1;
    emxEnsureCapacity_int32_T(sp, r14, i13, &ke_emlrtRTEI);
    nleftm1 = 0;
    for (i = 0; i <= jlast; i++) {
      if (bestInliers->data[i]) {
        r14->data[nleftm1] = i + 1;
        nleftm1++;
      }
    }

    i = allPoints->size[0];
    i13 = b_allPoints->size[0] * b_allPoints->size[1] * b_allPoints->size[2];
    b_allPoints->size[0] = r14->size[0];
    b_allPoints->size[1] = 2;
    b_allPoints->size[2] = 2;
    emxEnsureCapacity_real32_T(sp, b_allPoints, i13, &le_emlrtRTEI);
    nleftm1 = r14->size[0];
    for (i13 = 0; i13 < nleftm1; i13++) {
      i14 = r14->data[i13];
      if ((i14 < 1) || (i14 > i)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i, &nb_emlrtBCI, sp);
      }

      b_allPoints->data[i13] = allPoints->data[i14 - 1];
    }

    nleftm1 = r14->size[0];
    for (i13 = 0; i13 < nleftm1; i13++) {
      i14 = r14->data[i13];
      if ((i14 < 1) || (i14 > i)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i, &nb_emlrtBCI, sp);
      }

      b_allPoints->data[i13 + b_allPoints->size[0]] = allPoints->data[(i14 +
        allPoints->size[0]) - 1];
    }

    nleftm1 = r14->size[0];
    for (i13 = 0; i13 < nleftm1; i13++) {
      i14 = r14->data[i13];
      if ((i14 < 1) || (i14 > i)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i, &nb_emlrtBCI, sp);
      }

      b_allPoints->data[i13 + (b_allPoints->size[0] << 1)] = allPoints->data
        [(i14 + (allPoints->size[0] << 1)) - 1];
    }

    nleftm1 = r14->size[0];
    for (i13 = 0; i13 < nleftm1; i13++) {
      i14 = r14->data[i13];
      if ((i14 < 1) || (i14 > i)) {
        emlrtDynamicBoundsCheckR2012b(i14, 1, i, &nb_emlrtBCI, sp);
      }

      b_allPoints->data[(i13 + b_allPoints->size[0]) + (b_allPoints->size[0] <<
        1)] = allPoints->data[((i14 + allPoints->size[0]) + (allPoints->size[0] <<
        1)) - 1];
    }

    st.site = &bg_emlrtRSI;
    computeSimilarity(&st, b_allPoints, modelParams);
    st.site = &ag_emlrtRSI;
    b_st.site = &li_emlrtRSI;
    evaluateTForm(&b_st, modelParams, allPoints, dis);
    jlast = dis->size[0];
    for (i = 0; i < jlast; i++) {
      if (dis->data[i] > 1.5F) {
        i13 = dis->size[0];
        i14 = i + 1;
        if ((i14 < 1) || (i14 > i13)) {
          emlrtDynamicBoundsCheckR2012b(i14, 1, i13, &lb_emlrtBCI, &st);
        }

        dis->data[i14 - 1] = 1.5F;
      }
    }

    b_st.site = &mi_emlrtRSI;
    sum(&b_st, dis);
    bestModelParams_size[0] = 3;
    bestModelParams_size[1] = 3;
    for (i13 = 0; i13 < 9; i13++) {
      bestModelParams_data[i13] = modelParams[i13];
    }

    st.site = &yf_emlrtRSI;
    for (i13 = 0; i13 < 9; i13++) {
      x_data[i13] = modelParams[i13];
    }

    for (i13 = 0; i13 < 9; i13++) {
      tmp_data[i13] = muSingleScalarIsInf(x_data[i13]);
    }

    for (i13 = 0; i13 < 9; i13++) {
      b_tmp_data[i13] = muSingleScalarIsNaN(x_data[i13]);
    }

    b_tmp_size[0] = 9;
    for (i13 = 0; i13 < 9; i13++) {
      f_tmp_data[i13] = ((!tmp_data[i13]) && (!b_tmp_data[i13]));
    }

    e_tmp_data.data = &f_tmp_data[0];
    e_tmp_data.size = &b_tmp_size[0];
    e_tmp_data.allocatedSize = 9;
    e_tmp_data.numDimensions = 1;
    e_tmp_data.canFreeData = false;
    b_st.site = &fj_emlrtRSI;
    isValidModel = c_all(&b_st, &e_tmp_data);
    i13 = inliers->size[0];
    inliers->size[0] = dis->size[0];
    emxEnsureCapacity_boolean_T(sp, inliers, i13, &oe_emlrtRTEI);
    nleftm1 = dis->size[0];
    for (i13 = 0; i13 < nleftm1; i13++) {
      inliers->data[i13] = (dis->data[i13] < 1.5F);
    }

    st.site = &xf_emlrtRSI;
    if ((!isValidModel) || (!any(&st, inliers))) {
      *isFound = false;
      i13 = inliers->size[0];
      inliers->size[0] = allPoints->size[0];
      emxEnsureCapacity_boolean_T(sp, inliers, i13, &pe_emlrtRTEI);
      nleftm1 = allPoints->size[0];
      for (i13 = 0; i13 < nleftm1; i13++) {
        inliers->data[i13] = false;
      }
    }
  } else {
    i13 = inliers->size[0];
    inliers->size[0] = allPoints->size[0];
    emxEnsureCapacity_boolean_T(sp, inliers, i13, &je_emlrtRTEI);
    nleftm1 = allPoints->size[0];
    for (i13 = 0; i13 < nleftm1; i13++) {
      inliers->data[i13] = false;
    }
  }

  emxFree_real32_T(&b_allPoints);
  emxFree_real32_T(&dis);
  emxFree_int32_T(&r14);
  emxFree_boolean_T(&bestInliers);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (msac.c) */
