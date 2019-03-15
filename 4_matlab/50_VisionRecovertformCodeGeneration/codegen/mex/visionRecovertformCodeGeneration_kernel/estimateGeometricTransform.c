/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * estimateGeometricTransform.c
 *
 * Code generation for function 'estimateGeometricTransform'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "estimateGeometricTransform.h"
#include "visionRecovertformCodeGeneration_kernel_emxutil.h"
#include "isequal.h"
#include "det.h"
#include "validateattributes.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "warning.h"
#include "svd1.h"
#include "normalizePoints.h"
#include "msac.h"
#include "validatesize.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo kf_emlrtRSI = { 117,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 126,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 128,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 137,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 159,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 168,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 245,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 10, /* lineNo */
  "checkAndConvertMatchedPoints",      /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkAndConvertMatchedPoints.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 12, /* lineNo */
  "checkAndConvertMatchedPoints",      /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkAndConvertMatchedPoints.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 32, /* lineNo */
  "checkAndConvertPoints",             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkAndConvertPoints.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 16, /* lineNo */
  "checkPoints",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 27, /* lineNo */
  "checkPoints",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 64, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 340,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 345,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 347,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 349,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 355,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 405,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 407,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 52, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 114,/* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 118,/* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 12, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 25, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 33, /* lineNo */
  "svd",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 28, /* lineNo */
  "anyNonFinite",                      /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\anyNonFinite.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 36, /* lineNo */
  "vAllOrAny",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\vAllOrAny.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 96, /* lineNo */
  "vAllOrAny",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\vAllOrAny.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 415,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 424,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 425,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 427,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 429,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 430,/* lineNo */
  "estimateGeometricTransform",        /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 12, /* lineNo */
  "hypot",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\hypot.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 203,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRTEInfo be_emlrtRTEI = { 142,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 126,/* lineNo */
  19,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 2,/* lineNo */
  7,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 148,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 149,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 128,/* lineNo */
  24,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 126,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 344,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 345,/* lineNo */
  13,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 345,/* lineNo */
  33,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 346,/* lineNo */
  23,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 345,/* lineNo */
  32,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 347,/* lineNo */
  13,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 348,/* lineNo */
  23,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 103,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 347,/* lineNo */
  32,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 32,/* lineNo */
  14,                                  /* colNo */
  "svd",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 337,/* lineNo */
  14,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 406,/* lineNo */
  37,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 408,/* lineNo */
  37,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 410,/* lineNo */
  12,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 410,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 411,/* lineNo */
  12,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 411,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 401,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 112,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 424,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 425,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 426,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 118,/* lineNo */
  13,                                  /* colNo */
  "mtimes",                            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 427,/* lineNo */
  21,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 427,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 428,/* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 429,/* lineNo */
  15,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 429,/* lineNo */
  26,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "hypot",                             /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\hypot.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 430,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 419,/* lineNo */
  16,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 16,/* lineNo */
  37,                                  /* colNo */
  "checkAndConvertMatchedPoints",      /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkAndConvertMatchedPoints.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 54,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 179,/* lineNo */
  5,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 182,/* lineNo */
  45,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  345,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  345,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  345,                                 /* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  347,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  347,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  347,                                 /* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 344, /* lineNo */
  21,                                  /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 344, /* lineNo */
  1,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo ki_emlrtRTEI = { 18,/* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 83,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  428,                                 /* lineNo */
  9,                                   /* colNo */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m"/* pName */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "estimateGeometricTransform",        /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\estimateGeometricTransform.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void normalizePoints(const emlrtStack *sp, const emxArray_real32_T
  *points, emxArray_real32_T *samples1, emxArray_real32_T *samples2, real32_T
  normMatrix1[9], real32_T normMatrix2[9]);

/* Function Definitions */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }

      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void normalizePoints(const emlrtStack *sp, const emxArray_real32_T
  *points, emxArray_real32_T *samples1, emxArray_real32_T *samples2, real32_T
  normMatrix1[9], real32_T normMatrix2[9])
{
  emxArray_real32_T *b_points;
  int32_T loop_ub;
  int32_T i15;
  emxArray_real32_T *b_samples1;
  int32_T i16;
  emxArray_real32_T *b_samples2;
  emxArray_real32_T *c_samples1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T(sp, &b_points, 2, &df_emlrtRTEI, true);
  loop_ub = points->size[0];
  i15 = b_points->size[0] * b_points->size[1];
  b_points->size[0] = 2;
  b_points->size[1] = loop_ub;
  emxEnsureCapacity_real32_T(sp, b_points, i15, &df_emlrtRTEI);
  for (i15 = 0; i15 < loop_ub; i15++) {
    i16 = i15 << 1;
    b_points->data[i16] = points->data[i15];
    b_points->data[1 + i16] = points->data[i15 + points->size[0]];
  }

  emxInit_real32_T(sp, &b_samples1, 2, &jf_emlrtRTEI, true);
  st.site = &tg_emlrtRSI;
  b_normalizePoints(&st, b_points, b_samples1, normMatrix1);
  loop_ub = points->size[0];
  i15 = b_points->size[0] * b_points->size[1];
  b_points->size[0] = 2;
  b_points->size[1] = loop_ub;
  emxEnsureCapacity_real32_T(sp, b_points, i15, &ef_emlrtRTEI);
  for (i15 = 0; i15 < loop_ub; i15++) {
    i16 = i15 << 1;
    b_points->data[i16] = points->data[i15 + (points->size[0] << 1)];
    b_points->data[1 + i16] = points->data[(i15 + points->size[0]) +
      (points->size[0] << 1)];
  }

  emxInit_real32_T(sp, &b_samples2, 2, &jf_emlrtRTEI, true);
  emxInit_real32_T(sp, &c_samples1, 2, &ff_emlrtRTEI, true);
  st.site = &ug_emlrtRSI;
  b_normalizePoints(&st, b_points, b_samples2, normMatrix2);
  i15 = c_samples1->size[0] * c_samples1->size[1];
  c_samples1->size[0] = b_samples1->size[1];
  c_samples1->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, c_samples1, i15, &ff_emlrtRTEI);
  emxFree_real32_T(&b_points);
  loop_ub = b_samples1->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    c_samples1->data[i15] = b_samples1->data[i15 << 1];
  }

  loop_ub = b_samples1->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    c_samples1->data[i15 + c_samples1->size[0]] = b_samples1->data[1 + (i15 << 1)];
  }

  loop_ub = b_samples1->size[1];
  i15 = samples1->size[0] * samples1->size[1];
  samples1->size[0] = loop_ub;
  samples1->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, samples1, i15, &gf_emlrtRTEI);
  loop_ub <<= 1;
  emxFree_real32_T(&b_samples1);
  for (i15 = 0; i15 < loop_ub; i15++) {
    samples1->data[i15] = c_samples1->data[i15];
  }

  i15 = c_samples1->size[0] * c_samples1->size[1];
  c_samples1->size[0] = b_samples2->size[1];
  c_samples1->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, c_samples1, i15, &hf_emlrtRTEI);
  loop_ub = b_samples2->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    c_samples1->data[i15] = b_samples2->data[i15 << 1];
  }

  loop_ub = b_samples2->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    c_samples1->data[i15 + c_samples1->size[0]] = b_samples2->data[1 + (i15 << 1)];
  }

  loop_ub = b_samples2->size[1];
  i15 = samples2->size[0] * samples2->size[1];
  samples2->size[0] = loop_ub;
  samples2->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, samples2, i15, &if_emlrtRTEI);
  loop_ub <<= 1;
  emxFree_real32_T(&b_samples2);
  for (i15 = 0; i15 < loop_ub; i15++) {
    samples2->data[i15] = c_samples1->data[i15];
  }

  emxFree_real32_T(&c_samples1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void computeSimilarity(const emlrtStack *sp, const emxArray_real32_T *points,
  real32_T T[9])
{
  emxArray_real32_T *constraints;
  emxArray_real32_T *points1;
  emxArray_real32_T *points2;
  real32_T normMatrix1[9];
  real32_T normMatrix2[9];
  int32_T r3;
  real_T d0;
  int32_T r1;
  int32_T r2;
  uint32_T unnamed_idx_0;
  emxArray_int32_T *r15;
  int32_T nx;
  emxArray_real32_T *varargin_1;
  emxArray_int8_T *varargin_4;
  boolean_T empty_non_axis_sizes;
  emxArray_real32_T *r16;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T iv7[2];
  int8_T input_sizes_idx_1;
  int8_T b_input_sizes_idx_1;
  emxArray_int8_T *reshapes_f2;
  emxArray_int8_T *reshapes_f3;
  emxArray_real32_T *U1;
  real32_T maxval;
  real32_T s1_data[5];
  int32_T s1_size[1];
  real32_T V1[25];
  real32_T T_tmp;
  real32_T B[9];
  real32_T a21;
  real32_T normMatrix2_tmp;
  real32_T b_normMatrix2_tmp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real32_T(sp, &constraints, 2, &re_emlrtRTEI, true);
  emxInit_real32_T(sp, &points1, 2, &cf_emlrtRTEI, true);
  emxInit_real32_T(sp, &points2, 2, &cf_emlrtRTEI, true);
  st.site = &og_emlrtRSI;
  normalizePoints(&st, points, points1, points2, normMatrix1, normMatrix2);
  r3 = constraints->size[0] * constraints->size[1];
  d0 = 2.0 * (real_T)points1->size[0];
  r1 = (int32_T)d0;
  if (d0 != r1) {
    emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
  }

  constraints->size[0] = r1;
  constraints->size[1] = 5;
  emxEnsureCapacity_real32_T(sp, constraints, r3, &re_emlrtRTEI);
  d0 = 2.0 * (real_T)points1->size[0];
  if (d0 != (int32_T)d0) {
    emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
  }

  r2 = (int32_T)d0 * 5;
  for (r3 = 0; r3 < r2; r3++) {
    constraints->data[r3] = 0.0F;
  }

  unnamed_idx_0 = (uint32_T)points1->size[0] << 1;
  if (1U > unnamed_idx_0) {
    r3 = 1;
    r1 = -1;
  } else {
    r3 = points1->size[0] << 1;
    if (1 > r3) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r3, &ob_emlrtBCI, sp);
    }

    r3 = 2;
    r1 = points1->size[0] << 1;
    if (((int32_T)unnamed_idx_0 < 1) || ((int32_T)unnamed_idx_0 > r1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)unnamed_idx_0, 1, r1, &pb_emlrtBCI,
        sp);
    }

    r1 = (int32_T)unnamed_idx_0 - 1;
  }

  emxInit_int32_T(sp, &r15, 1, &cf_emlrtRTEI, true);
  nx = r15->size[0];
  st.site = &pg_emlrtRSI;
  r2 = div_s32_floor(&st, r1, r3);
  r15->size[0] = r2 + 1;
  emxEnsureCapacity_int32_T(sp, r15, nx, &se_emlrtRTEI);
  for (r1 = 0; r1 <= r2; r1++) {
    r15->data[r1] = r3 * r1;
  }

  emxInit_real32_T(sp, &varargin_1, 1, &te_emlrtRTEI, true);
  st.site = &pg_emlrtRSI;
  r2 = points1->size[0];
  r3 = varargin_1->size[0];
  varargin_1->size[0] = r2;
  emxEnsureCapacity_real32_T(&st, varargin_1, r3, &te_emlrtRTEI);
  for (r3 = 0; r3 < r2; r3++) {
    varargin_1->data[r3] = -points1->data[r3 + points1->size[0]];
  }

  emxInit_int8_T(&st, &varargin_4, 1, &ue_emlrtRTEI, true);
  r3 = varargin_4->size[0];
  varargin_4->size[0] = points1->size[0];
  emxEnsureCapacity_int8_T(&st, varargin_4, r3, &ue_emlrtRTEI);
  r2 = points1->size[0];
  for (r3 = 0; r3 < r2; r3++) {
    varargin_4->data[r3] = -1;
  }

  b_st.site = &gf_emlrtRSI;
  c_st.site = &hf_emlrtRSI;
  empty_non_axis_sizes = true;
  r3 = points1->size[0];
  if (r3 != varargin_1->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (points1->size[0] != varargin_1->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (varargin_4->size[0] != varargin_1->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  r3 = points2->size[0];
  if (r3 != varargin_1->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real32_T(&c_st, &r16, 2, &bf_emlrtRTEI, true);
  nx = points1->size[0];
  r2 = points1->size[0] - 1;
  loop_ub = points2->size[0] - 1;
  r3 = r16->size[0] * r16->size[1];
  r16->size[0] = varargin_1->size[0];
  r16->size[1] = 5;
  emxEnsureCapacity_real32_T(&b_st, r16, r3, &ve_emlrtRTEI);
  b_loop_ub = varargin_1->size[0];
  for (r3 = 0; r3 < b_loop_ub; r3++) {
    r16->data[r3] = varargin_1->data[r3];
  }

  for (r3 = 0; r3 <= r2; r3++) {
    r16->data[r3 + r16->size[0]] = points1->data[r3];
  }

  for (r3 = 0; r3 < nx; r3++) {
    r16->data[r3 + (r16->size[0] << 1)] = 0.0F;
  }

  r2 = varargin_4->size[0];
  for (r3 = 0; r3 < r2; r3++) {
    r16->data[r3 + r16->size[0] * 3] = varargin_4->data[r3];
  }

  emxFree_int8_T(&varargin_4);
  for (r3 = 0; r3 <= loop_ub; r3++) {
    r16->data[r3 + (r16->size[0] << 2)] = points2->data[r3 + points2->size[0]];
  }

  iv7[0] = r15->size[0];
  iv7[1] = 5;
  emlrtSubAssignSizeCheckR2012b(&iv7[0], 2, &(*(int32_T (*)[2])r16->size)[0], 2,
    &h_emlrtECI, sp);
  for (r3 = 0; r3 < 5; r3++) {
    r2 = r16->size[0];
    for (r1 = 0; r1 < r2; r1++) {
      constraints->data[r15->data[r1] + constraints->size[0] * r3] = r16->
        data[r1 + r16->size[0] * r3];
    }
  }

  unnamed_idx_0 = (uint32_T)points1->size[0] << 1;
  if (2U > unnamed_idx_0) {
    r3 = 1;
    r1 = 1;
    nx = 0;
  } else {
    r3 = constraints->size[0];
    if (2 > r3) {
      emlrtDynamicBoundsCheckR2012b(2, 1, r3, &qb_emlrtBCI, sp);
    }

    r3 = 2;
    r1 = 2;
    nx = constraints->size[0];
    if (((int32_T)unnamed_idx_0 < 1) || ((int32_T)unnamed_idx_0 > nx)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)unnamed_idx_0, 1, nx, &rb_emlrtBCI,
        sp);
    }

    nx = (int32_T)unnamed_idx_0;
  }

  b_loop_ub = r15->size[0];
  st.site = &qg_emlrtRSI;
  r2 = div_s32_floor(&st, nx - r3, r1);
  r15->size[0] = r2 + 1;
  emxEnsureCapacity_int32_T(sp, r15, b_loop_ub, &we_emlrtRTEI);
  for (nx = 0; nx <= r2; nx++) {
    r15->data[nx] = (r3 + r1 * nx) - 1;
  }

  st.site = &qg_emlrtRSI;
  r2 = points2->size[0];
  r3 = varargin_1->size[0];
  varargin_1->size[0] = r2;
  emxEnsureCapacity_real32_T(&st, varargin_1, r3, &xe_emlrtRTEI);
  for (r3 = 0; r3 < r2; r3++) {
    varargin_1->data[r3] = -points2->data[r3];
  }

  emxFree_real32_T(&points2);
  b_st.site = &eh_emlrtRSI;
  if (points1->size[0] != 0) {
    nx = points1->size[0];
  } else if (varargin_1->size[0] != 0) {
    nx = varargin_1->size[0];
  } else {
    nx = 0;
  }

  c_st.site = &hf_emlrtRSI;
  if ((points1->size[0] == nx) || (points1->size[0] == 0)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((points1->size[0] == nx) || (points1->size[0] == 0)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((points1->size[0] == nx) || (points1->size[0] == 0)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((varargin_1->size[0] == nx) || (varargin_1->size[0] == 0)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || (points1->size[0] != 0)) {
    input_sizes_idx_1 = 2;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || (points1->size[0] != 0)) {
    b_input_sizes_idx_1 = 1;
  } else {
    b_input_sizes_idx_1 = 0;
  }

  emxInit_int8_T(&b_st, &reshapes_f2, 2, &ye_emlrtRTEI, true);
  r3 = reshapes_f2->size[0] * reshapes_f2->size[1];
  reshapes_f2->size[0] = nx;
  reshapes_f2->size[1] = b_input_sizes_idx_1;
  emxEnsureCapacity_int8_T(&b_st, reshapes_f2, r3, &ye_emlrtRTEI);
  r2 = nx * b_input_sizes_idx_1;
  for (r3 = 0; r3 < r2; r3++) {
    reshapes_f2->data[r3] = 1;
  }

  if (empty_non_axis_sizes || (points1->size[0] != 0)) {
    b_input_sizes_idx_1 = 1;
  } else {
    b_input_sizes_idx_1 = 0;
  }

  emxInit_int8_T(&b_st, &reshapes_f3, 2, &ye_emlrtRTEI, true);
  r3 = reshapes_f3->size[0] * reshapes_f3->size[1];
  reshapes_f3->size[0] = nx;
  reshapes_f3->size[1] = b_input_sizes_idx_1;
  emxEnsureCapacity_int8_T(&b_st, reshapes_f3, r3, &ye_emlrtRTEI);
  r2 = nx * b_input_sizes_idx_1;
  for (r3 = 0; r3 < r2; r3++) {
    reshapes_f3->data[r3] = 0;
  }

  if (empty_non_axis_sizes || (varargin_1->size[0] != 0)) {
    b_input_sizes_idx_1 = 1;
  } else {
    b_input_sizes_idx_1 = 0;
  }

  emxInit_real32_T(&b_st, &U1, 2, &cf_emlrtRTEI, true);
  r3 = U1->size[0] * U1->size[1];
  U1->size[0] = nx;
  U1->size[1] = ((input_sizes_idx_1 + reshapes_f2->size[1]) + reshapes_f3->size
                 [1]) + b_input_sizes_idx_1;
  emxEnsureCapacity_real32_T(&b_st, U1, r3, &af_emlrtRTEI);
  r2 = input_sizes_idx_1;
  for (r3 = 0; r3 < r2; r3++) {
    for (r1 = 0; r1 < nx; r1++) {
      U1->data[r1 + U1->size[0] * r3] = points1->data[r1 + nx * r3];
    }
  }

  emxFree_real32_T(&points1);
  r2 = reshapes_f2->size[1];
  for (r3 = 0; r3 < r2; r3++) {
    loop_ub = reshapes_f2->size[0];
    for (r1 = 0; r1 < loop_ub; r1++) {
      U1->data[r1 + U1->size[0] * (r3 + input_sizes_idx_1)] = reshapes_f2->
        data[r1 + reshapes_f2->size[0] * r3];
    }
  }

  r2 = reshapes_f3->size[1];
  for (r3 = 0; r3 < r2; r3++) {
    loop_ub = reshapes_f3->size[0];
    for (r1 = 0; r1 < loop_ub; r1++) {
      U1->data[r1 + U1->size[0] * ((r3 + input_sizes_idx_1) + reshapes_f2->size
        [1])] = reshapes_f3->data[r1 + reshapes_f3->size[0] * r3];
    }
  }

  r2 = b_input_sizes_idx_1;
  for (r3 = 0; r3 < r2; r3++) {
    for (r1 = 0; r1 < nx; r1++) {
      U1->data[r1 + U1->size[0] * ((input_sizes_idx_1 + reshapes_f2->size[1]) +
        reshapes_f3->size[1])] = varargin_1->data[r1];
    }
  }

  emxFree_int8_T(&reshapes_f3);
  emxFree_int8_T(&reshapes_f2);
  emxFree_real32_T(&varargin_1);
  iv7[0] = r15->size[0];
  iv7[1] = 5;
  emlrtSubAssignSizeCheckR2012b(&iv7[0], 2, &(*(int32_T (*)[2])U1->size)[0], 2,
    &i_emlrtECI, sp);
  nx = r15->size[0];
  for (r3 = 0; r3 < 5; r3++) {
    for (r1 = 0; r1 < nx; r1++) {
      constraints->data[r15->data[r1] + constraints->size[0] * r3] = U1->data[r1
        + U1->size[0] * r3];
    }
  }

  emxFree_int32_T(&r15);
  st.site = &rg_emlrtRSI;
  b_st.site = &fh_emlrtRSI;
  c_st.site = &ih_emlrtRSI;
  d_st.site = &jh_emlrtRSI;
  nx = constraints->size[0] * 5;
  empty_non_axis_sizes = true;
  e_st.site = &kh_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    f_st.site = &mb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (b_loop_ub = 0; b_loop_ub < nx; b_loop_ub++) {
    if (empty_non_axis_sizes) {
      maxval = constraints->data[b_loop_ub];
      if ((!muSingleScalarIsInf(maxval)) && (!muSingleScalarIsNaN(maxval))) {
        empty_non_axis_sizes = true;
      } else {
        empty_non_axis_sizes = false;
      }
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (empty_non_axis_sizes) {
    b_st.site = &gh_emlrtRSI;
    svd(&b_st, constraints, U1, s1_data, s1_size, V1);
  } else {
    unnamed_idx_0 = (uint32_T)constraints->size[0];
    r3 = r16->size[0] * r16->size[1];
    r16->size[0] = (int32_T)unnamed_idx_0;
    r16->size[1] = 5;
    emxEnsureCapacity_real32_T(&st, r16, r3, &bf_emlrtRTEI);
    r2 = (int32_T)unnamed_idx_0 * 5;
    for (r3 = 0; r3 < r2; r3++) {
      r16->data[r3] = 0.0F;
    }

    b_st.site = &hh_emlrtRSI;
    svd(&b_st, r16, U1, s1_data, s1_size, V1);
    for (r3 = 0; r3 < 25; r3++) {
      V1[r3] = rtNaNF;
    }
  }

  emxFree_real32_T(&U1);
  emxFree_real32_T(&r16);
  emxFree_real32_T(&constraints);
  T[3] = -V1[21] / V1[24];
  T_tmp = V1[20] / V1[24];
  T[4] = T_tmp;
  T[5] = V1[23] / V1[24];
  T[0] = T_tmp;
  T[6] = 0.0F;
  T[1] = V1[21] / V1[24];
  T[7] = 0.0F;
  T[2] = V1[22] / V1[24];
  T[8] = 1.0F;
  st.site = &sg_emlrtRSI;
  b_st.site = &gi_emlrtRSI;
  for (r3 = 0; r3 < 3; r3++) {
    B[3 * r3] = normMatrix2[r3];
    B[1 + 3 * r3] = normMatrix2[r3 + 3];
    B[2 + 3 * r3] = normMatrix2[r3 + 6];
  }

  c_st.site = &hi_emlrtRSI;
  d_st.site = &ii_emlrtRSI;
  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muSingleScalarAbs(B[0]);
  a21 = muSingleScalarAbs(B[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (muSingleScalarAbs(B[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  B[r2] /= B[r1];
  B[r3] /= B[r1];
  B[3 + r2] -= B[r2] * B[3 + r1];
  B[3 + r3] -= B[r3] * B[3 + r1];
  B[6 + r2] -= B[r2] * B[6 + r1];
  B[6 + r3] -= B[r3] * B[6 + r1];
  if (muSingleScalarAbs(B[3 + r3]) > muSingleScalarAbs(B[3 + r2])) {
    nx = r2;
    r2 = r3;
    r3 = nx;
  }

  B[3 + r3] /= B[3 + r2];
  B[6 + r3] -= B[3 + r3] * B[6 + r2];
  if ((B[r1] == 0.0F) || (B[3 + r2] == 0.0F) || (B[6 + r3] == 0.0F)) {
    e_st.site = &ji_emlrtRSI;
    f_st.site = &ki_emlrtRSI;
    warning(&f_st);
  }

  normMatrix2[3 * r1] = T_tmp / B[r1];
  maxval = B[3 + r1];
  normMatrix2[3 * r2] = T[3] - normMatrix2[3 * r1] * maxval;
  a21 = B[6 + r1];
  normMatrix2[3 * r3] = 0.0F - normMatrix2[3 * r1] * a21;
  normMatrix2[3 * r2] /= B[3 + r2];
  normMatrix2_tmp = B[6 + r2];
  normMatrix2[3 * r3] -= normMatrix2[3 * r2] * normMatrix2_tmp;
  normMatrix2[3 * r3] /= B[6 + r3];
  b_normMatrix2_tmp = B[3 + r3];
  normMatrix2[3 * r2] -= normMatrix2[3 * r3] * b_normMatrix2_tmp;
  normMatrix2[3 * r1] -= normMatrix2[3 * r3] * B[r3];
  normMatrix2[3 * r1] -= normMatrix2[3 * r2] * B[r2];
  nx = 1 + 3 * r1;
  normMatrix2[nx] = T[1] / B[r1];
  b_loop_ub = 1 + 3 * r2;
  normMatrix2[b_loop_ub] = T_tmp - normMatrix2[nx] * maxval;
  loop_ub = 1 + 3 * r3;
  normMatrix2[loop_ub] = 0.0F - normMatrix2[nx] * a21;
  normMatrix2[b_loop_ub] /= B[3 + r2];
  normMatrix2[loop_ub] -= normMatrix2[b_loop_ub] * normMatrix2_tmp;
  normMatrix2[loop_ub] /= B[6 + r3];
  normMatrix2[b_loop_ub] -= normMatrix2[loop_ub] * b_normMatrix2_tmp;
  normMatrix2[nx] -= normMatrix2[loop_ub] * B[r3];
  normMatrix2[nx] -= normMatrix2[b_loop_ub] * B[r2];
  nx = 2 + 3 * r1;
  normMatrix2[nx] = T[2] / B[r1];
  b_loop_ub = 2 + 3 * r2;
  normMatrix2[b_loop_ub] = T[5] - normMatrix2[nx] * maxval;
  loop_ub = 2 + 3 * r3;
  normMatrix2[loop_ub] = 1.0F - normMatrix2[nx] * a21;
  normMatrix2[b_loop_ub] /= B[3 + r2];
  normMatrix2[loop_ub] -= normMatrix2[b_loop_ub] * normMatrix2_tmp;
  normMatrix2[loop_ub] /= B[6 + r3];
  normMatrix2[b_loop_ub] -= normMatrix2[loop_ub] * b_normMatrix2_tmp;
  normMatrix2[nx] -= normMatrix2[loop_ub] * B[r3];
  normMatrix2[nx] -= normMatrix2[b_loop_ub] * B[r2];
  for (r3 = 0; r3 < 3; r3++) {
    for (r1 = 0; r1 < 3; r1++) {
      nx = r3 + 3 * r1;
      T[nx] = 0.0F;
      T[nx] = (normMatrix1[3 * r3] * normMatrix2[3 * r1] + normMatrix1[1 + 3 *
               r3] * normMatrix2[1 + 3 * r1]) + normMatrix1[2 + 3 * r3] *
        normMatrix2[2 + 3 * r1];
    }
  }

  maxval = T[8];
  for (r3 = 0; r3 < 9; r3++) {
    T[r3] /= maxval;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void estimateGeometricTransform(const emlrtStack *sp, const emxArray_real32_T
  *matchedPoints1, const emxArray_real32_T *matchedPoints2, real_T
  *tform_Dimensionality, real32_T tform_T_data[], int32_T tform_T_size[2],
  emxArray_real32_T *inlierPoints1, emxArray_real32_T *inlierPoints2)
{
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  int32_T status;
  int32_T i12;
  int8_T failedMatrix[9];
  emxArray_boolean_T *inliers;
  emxArray_real32_T *points;
  uint32_T ysize_idx_0;
  int32_T loop_ub;
  int32_T tmatrix_size[2];
  real32_T tmatrix_data[9];
  int32_T iy;
  emxArray_int32_T *r12;
  emxArray_boolean_T *b_inliers;
  real32_T A_data[6];
  emxArray_int32_T *r13;
  real32_T x1;
  boolean_T guard1 = false;
  int8_T input_sizes_idx_1;
  boolean_T tmp_data[9];
  int32_T tmp_size[1];
  boolean_T b_tmp_data[9];
  emxArray_boolean_T c_tmp_data;
  boolean_T d_tmp_data[9];
  int32_T b_tmatrix_size[1];
  real32_T b_tmatrix_data[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &kf_emlrtRSI;
  b_st.site = &qf_emlrtRSI;
  c_st.site = &rf_emlrtRSI;
  d_st.site = &tf_emlrtRSI;
  e_st.site = &uf_emlrtRSI;
  f_st.site = &vf_emlrtRSI;
  g_st.site = &dc_emlrtRSI;
  h_st.site = &q_emlrtRSI;
  if (!size_check(matchedPoints1)) {
    emlrtErrorWithMessageIdR2018a(&h_st, &vh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesincorrectSize",
      "MATLAB:estimateGeometricTransform:incorrectSize", 3, 4, 14,
      "MATCHEDPOINTS1");
  }

  c_st.site = &sf_emlrtRSI;
  d_st.site = &tf_emlrtRSI;
  e_st.site = &uf_emlrtRSI;
  f_st.site = &vf_emlrtRSI;
  g_st.site = &dc_emlrtRSI;
  h_st.site = &q_emlrtRSI;
  if (!size_check(matchedPoints2)) {
    emlrtErrorWithMessageIdR2018a(&h_st, &vh_emlrtRTEI,
      "Coder:toolbox:ValidateattributesincorrectSize",
      "MATLAB:estimateGeometricTransform:incorrectSize", 3, 4, 14,
      "MATCHEDPOINTS2");
  }

  varargin_1[0] = (uint32_T)matchedPoints1->size[0];
  varargin_2[0] = (uint32_T)matchedPoints2->size[0];
  varargin_1[1] = (uint32_T)matchedPoints1->size[1];
  varargin_2[1] = (uint32_T)matchedPoints2->size[1];
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((int32_T)varargin_1[k] != (int32_T)varargin_2[k]) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (!p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &ei_emlrtRTEI,
      "vision:points:numPtsMismatch", "vision:points:numPtsMismatch", 6, 4, 14,
      "MATCHEDPOINTS1", 4, 14, "MATCHEDPOINTS2");
  }

  status = (matchedPoints1->size[0] < 2);
  for (i12 = 0; i12 < 9; i12++) {
    failedMatrix[i12] = 0;
  }

  failedMatrix[0] = 1;
  failedMatrix[4] = 1;
  failedMatrix[8] = 1;
  emxInit_boolean_T(sp, &inliers, 2, &ge_emlrtRTEI, true);
  if (status == 0) {
    emxInit_real32_T(sp, &points, 3, &he_emlrtRTEI, true);
    st.site = &lf_emlrtRSI;
    ysize_idx_0 = (uint32_T)matchedPoints1->size[0];
    i12 = points->size[0] * points->size[1] * points->size[2];
    points->size[0] = (int32_T)ysize_idx_0;
    points->size[1] = 2;
    points->size[2] = 2;
    emxEnsureCapacity_real32_T(&st, points, i12, &ce_emlrtRTEI);
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (points->size[k] != matchedPoints1->size[k]) {
        emlrtErrorWithMessageIdR2018a(&st, &fi_emlrtRTEI,
          "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
      } else {
        k++;
      }
    }

    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (points->size[k] != matchedPoints2->size[k]) {
        emlrtErrorWithMessageIdR2018a(&st, &fi_emlrtRTEI,
          "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
      } else {
        k++;
      }
    }

    iy = -1;
    loop_ub = matchedPoints1->size[0] << 1;
    b_st.site = &wf_emlrtRSI;
    if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
      c_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k < loop_ub; k++) {
      iy++;
      points->data[iy] = matchedPoints1->data[k];
    }

    loop_ub = matchedPoints2->size[0] << 1;
    b_st.site = &wf_emlrtRSI;
    if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
      c_st.site = &mb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (k = 0; k < loop_ub; k++) {
      iy++;
      points->data[iy] = matchedPoints2->data[k];
    }

    emxInit_boolean_T(&st, &b_inliers, 1, &de_emlrtRTEI, true);
    st.site = &mf_emlrtRSI;
    msac(&st, points, &p, tmatrix_data, tmatrix_size, b_inliers);
    i12 = inliers->size[0] * inliers->size[1];
    inliers->size[0] = b_inliers->size[0];
    inliers->size[1] = 1;
    emxEnsureCapacity_boolean_T(sp, inliers, i12, &ge_emlrtRTEI);
    loop_ub = b_inliers->size[0];
    emxFree_real32_T(&points);
    for (i12 = 0; i12 < loop_ub; i12++) {
      inliers->data[i12] = b_inliers->data[i12];
    }

    emxFree_boolean_T(&b_inliers);
    if (!p) {
      status = 2;
    }

    st.site = &nf_emlrtRSI;
    x1 = det(&st, tmatrix_data, tmatrix_size);
    p = false;
    b_p = true;
    if (!(x1 == 0.0F)) {
      b_p = false;
    }

    if (b_p) {
      p = true;
    }

    guard1 = false;
    if (p) {
      guard1 = true;
    } else {
      k = tmatrix_size[0] * tmatrix_size[1];
      for (i12 = 0; i12 < k; i12++) {
        tmp_data[i12] = muSingleScalarIsInf(tmatrix_data[i12]);
      }

      for (i12 = 0; i12 < k; i12++) {
        b_tmp_data[i12] = muSingleScalarIsNaN(tmatrix_data[i12]);
      }

      tmp_size[0] = k;
      for (i12 = 0; i12 < k; i12++) {
        d_tmp_data[i12] = (tmp_data[i12] || b_tmp_data[i12]);
      }

      c_tmp_data.data = &d_tmp_data[0];
      c_tmp_data.size = &tmp_size[0];
      c_tmp_data.allocatedSize = 9;
      c_tmp_data.numDimensions = 1;
      c_tmp_data.canFreeData = false;
      st.site = &nf_emlrtRSI;
      if (any(&st, &c_tmp_data)) {
        guard1 = true;
      }
    }

    if (guard1) {
      status = 2;
      tmatrix_size[0] = 3;
      tmatrix_size[1] = 3;
      for (i12 = 0; i12 < 9; i12++) {
        tmatrix_data[i12] = failedMatrix[i12];
      }
    }
  } else {
    i12 = inliers->size[0] * inliers->size[1];
    inliers->size[0] = matchedPoints1->size[0];
    inliers->size[1] = matchedPoints1->size[0];
    emxEnsureCapacity_boolean_T(sp, inliers, i12, &be_emlrtRTEI);
    loop_ub = matchedPoints1->size[0] * matchedPoints1->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      inliers->data[i12] = false;
    }

    tmatrix_size[0] = 3;
    tmatrix_size[1] = 3;
    for (i12 = 0; i12 < 9; i12++) {
      tmatrix_data[i12] = failedMatrix[i12];
    }
  }

  if (status == 0) {
    loop_ub = inliers->size[0] * inliers->size[1] - 1;
    k = 0;
    for (iy = 0; iy <= loop_ub; iy++) {
      if (inliers->data[iy]) {
        k++;
      }
    }

    emxInit_int32_T(sp, &r12, 1, &de_emlrtRTEI, true);
    i12 = r12->size[0];
    r12->size[0] = k;
    emxEnsureCapacity_int32_T(sp, r12, i12, &de_emlrtRTEI);
    k = 0;
    for (iy = 0; iy <= loop_ub; iy++) {
      if (inliers->data[iy]) {
        r12->data[k] = iy + 1;
        k++;
      }
    }

    k = matchedPoints1->size[0];
    i12 = inlierPoints1->size[0] * inlierPoints1->size[1];
    inlierPoints1->size[0] = r12->size[0];
    inlierPoints1->size[1] = 2;
    emxEnsureCapacity_real32_T(sp, inlierPoints1, i12, &ee_emlrtRTEI);
    loop_ub = r12->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      iy = r12->data[i12];
      if ((iy < 1) || (iy > k)) {
        emlrtDynamicBoundsCheckR2012b(iy, 1, k, &ib_emlrtBCI, sp);
      }

      inlierPoints1->data[i12] = matchedPoints1->data[iy - 1];
    }

    loop_ub = r12->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      iy = r12->data[i12];
      if ((iy < 1) || (iy > k)) {
        emlrtDynamicBoundsCheckR2012b(iy, 1, k, &ib_emlrtBCI, sp);
      }

      inlierPoints1->data[i12 + inlierPoints1->size[0]] = matchedPoints1->data
        [(iy + matchedPoints1->size[0]) - 1];
    }

    emxFree_int32_T(&r12);
    loop_ub = inliers->size[0] * inliers->size[1] - 1;
    k = 0;
    for (iy = 0; iy <= loop_ub; iy++) {
      if (inliers->data[iy]) {
        k++;
      }
    }

    emxInit_int32_T(sp, &r13, 1, &de_emlrtRTEI, true);
    i12 = r13->size[0];
    r13->size[0] = k;
    emxEnsureCapacity_int32_T(sp, r13, i12, &de_emlrtRTEI);
    k = 0;
    for (iy = 0; iy <= loop_ub; iy++) {
      if (inliers->data[iy]) {
        r13->data[k] = iy + 1;
        k++;
      }
    }

    k = matchedPoints2->size[0];
    i12 = inlierPoints2->size[0] * inlierPoints2->size[1];
    inlierPoints2->size[0] = r13->size[0];
    inlierPoints2->size[1] = 2;
    emxEnsureCapacity_real32_T(sp, inlierPoints2, i12, &fe_emlrtRTEI);
    loop_ub = r13->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      iy = r13->data[i12];
      if ((iy < 1) || (iy > k)) {
        emlrtDynamicBoundsCheckR2012b(iy, 1, k, &kb_emlrtBCI, sp);
      }

      inlierPoints2->data[i12] = matchedPoints2->data[iy - 1];
    }

    loop_ub = r13->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      iy = r13->data[i12];
      if ((iy < 1) || (iy > k)) {
        emlrtDynamicBoundsCheckR2012b(iy, 1, k, &kb_emlrtBCI, sp);
      }

      inlierPoints2->data[i12 + inlierPoints2->size[0]] = matchedPoints2->data
        [(iy + matchedPoints2->size[0]) - 1];
    }

    emxFree_int32_T(&r13);
  } else {
    inlierPoints1->size[0] = 0;
    inlierPoints1->size[1] = 0;
    inlierPoints2->size[0] = 0;
    inlierPoints2->size[1] = 0;
    tmatrix_size[0] = 3;
    tmatrix_size[1] = 3;
    for (i12 = 0; i12 < 9; i12++) {
      tmatrix_data[i12] = failedMatrix[i12];
    }
  }

  emxFree_boolean_T(&inliers);
  st.site = &of_emlrtRSI;
  if (status == 1) {
    emlrtErrorWithMessageIdR2018a(&st, &gi_emlrtRTEI,
      "vision:points:notEnoughMatchedPts", "vision:points:notEnoughMatchedPts",
      8, 4, 14, "matchedPoints1", 4, 14, "matchedPoints2", 6, 2.0);
  }

  if (status == 2) {
    emlrtErrorWithMessageIdR2018a(&st, &hi_emlrtRTEI,
      "vision:points:notEnoughInlierMatches",
      "vision:points:notEnoughInlierMatches", 6, 4, 14, "matchedPoints1", 4, 14,
      "matchedPoints2");
  }

  st.site = &pf_emlrtRSI;
  loop_ub = tmatrix_size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    if (1 > tmatrix_size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, tmatrix_size[1], &jb_emlrtBCI, &st);
    }

    A_data[i12] = tmatrix_data[i12];
  }

  for (i12 = 0; i12 < loop_ub; i12++) {
    if (2 > tmatrix_size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, tmatrix_size[1], &jb_emlrtBCI, &st);
    }

    k = i12 + tmatrix_size[0];
    A_data[k] = tmatrix_data[k];
  }

  b_st.site = &fk_emlrtRSI;
  varargin_1[0] = (uint32_T)tmatrix_size[0];
  varargin_1[1] = 2U;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((int8_T)varargin_1[k] != 3 - k) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    c_st.site = &gk_emlrtRSI;
    d_st.site = &eh_emlrtRSI;
    e_st.site = &hf_emlrtRSI;
    if ((tmatrix_size[0] == 3) || (tmatrix_size[0] == 0)) {
    } else {
      emlrtErrorWithMessageIdR2018a(&e_st, &mh_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if (tmatrix_size[0] != 0) {
      input_sizes_idx_1 = 2;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (tmatrix_size[0] != 0) {
      k = 2;
    } else {
      k = 0;
    }

    tmatrix_size[0] = 3;
    tmatrix_size[1] = input_sizes_idx_1 + 1;
    loop_ub = input_sizes_idx_1;
    for (i12 = 0; i12 < loop_ub; i12++) {
      tmatrix_data[3 * i12] = A_data[3 * i12];
      iy = 1 + 3 * i12;
      tmatrix_data[iy] = A_data[iy];
      iy = 2 + 3 * i12;
      tmatrix_data[iy] = A_data[iy];
    }

    tmatrix_data[3 * k] = 0.0F;
    tmatrix_data[1 + 3 * k] = 0.0F;
    tmatrix_data[2 + 3 * k] = 1.0F;
  } else {
    tmatrix_size[1] = 2;
    loop_ub = tmatrix_size[0] << 1;
    if (0 <= loop_ub - 1) {
      memcpy(&tmatrix_data[0], &A_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real32_T)));
    }
  }

  c_st.site = &hk_emlrtRSI;
  validateattributes(&c_st, tmatrix_data, tmatrix_size);
  c_st.site = &ik_emlrtRSI;
  x1 = det(&c_st, tmatrix_data, tmatrix_size);
  p = false;
  b_p = true;
  if (!(x1 == 0.0F)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oh_emlrtRTEI,
      "images:geotrans:singularTransformationMatrix",
      "images:geotrans:singularTransformationMatrix", 0);
  }

  if (3 > tmatrix_size[1]) {
    emlrtDynamicBoundsCheckR2012b(3, 1, tmatrix_size[1], &emlrtBCI, &b_st);
  }

  loop_ub = tmatrix_size[0];
  b_tmatrix_size[0] = tmatrix_size[0];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_tmatrix_data[i12] = tmatrix_data[i12 + (tmatrix_size[0] << 1)];
  }

  if (!isequal(b_tmatrix_data, b_tmatrix_size, dv0)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &nh_emlrtRTEI,
      "images:geotrans:invalidAffineMatrix",
      "images:geotrans:invalidAffineMatrix", 0);
  }

  tform_T_size[0] = tmatrix_size[0];
  tform_T_size[1] = 3;
  loop_ub = tmatrix_size[0] * 3;
  if (0 <= loop_ub - 1) {
    memcpy(&tform_T_data[0], &tmatrix_data[0], (uint32_T)(loop_ub * (int32_T)
            sizeof(real32_T)));
  }

  *tform_Dimensionality = 2.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void evaluateTForm(const emlrtStack *sp, const real32_T tform[9], const
                   emxArray_real32_T *points, emxArray_real32_T *dis)
{
  int32_T i19;
  int32_T result;
  boolean_T empty_non_axis_sizes;
  int8_T input_sizes_idx_1;
  int8_T sizes_idx_1;
  cell_wrap_26 reshapes[2];
  int32_T loop_ub;
  emxArray_real32_T *pt1h;
  int32_T end;
  emxArray_real32_T *b_pt1h;
  real32_T alpha1;
  real32_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  emxArray_real32_T *w;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  char_T TRANSA;
  char_T TRANSB;
  emxArray_real32_T *delta;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T exitg1;
  emxArray_real32_T *pt;
  int32_T b_pt[2];
  int32_T iv11[2];
  emxArray_real32_T *b_delta;
  emxArray_real32_T *c_delta;
  emxArray_boolean_T *r17;
  emxArray_int32_T *r18;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ni_emlrtRSI;
  b_st.site = &eh_emlrtRSI;
  i19 = points->size[0];
  if (i19 != 0) {
    result = points->size[0];
  } else {
    i19 = points->size[0];
    if (i19 != 0) {
      result = points->size[0];
    } else {
      i19 = points->size[0];
      if (i19 > 0) {
        result = points->size[0];
      } else {
        result = 0;
      }

      i19 = points->size[0];
      if (i19 > result) {
        result = points->size[0];
      }
    }
  }

  c_st.site = &hf_emlrtRSI;
  i19 = points->size[0];
  if (i19 == result) {
  } else {
    i19 = points->size[0];
    if (i19 == 0) {
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
  }

  i19 = points->size[0];
  if (i19 == result) {
  } else {
    i19 = points->size[0];
    if (i19 == 0) {
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &mh_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes) {
    input_sizes_idx_1 = 2;
  } else {
    i19 = points->size[0];
    if (i19 != 0) {
      input_sizes_idx_1 = 2;
    } else {
      input_sizes_idx_1 = 0;
    }
  }

  if (empty_non_axis_sizes) {
    sizes_idx_1 = 1;
  } else {
    i19 = points->size[0];
    if (i19 != 0) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
  }

  emxInitMatrix_cell_wrap_26(&b_st, reshapes, &ye_emlrtRTEI, true);
  i19 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
  reshapes[1].f1->size[0] = result;
  reshapes[1].f1->size[1] = sizes_idx_1;
  emxEnsureCapacity_real32_T(&b_st, reshapes[1].f1, i19, &wf_emlrtRTEI);
  loop_ub = result * sizes_idx_1;
  for (i19 = 0; i19 < loop_ub; i19++) {
    reshapes[1].f1->data[i19] = 1.0F;
  }

  emxInit_real32_T(&b_st, &pt1h, 2, &xf_emlrtRTEI, true);
  i19 = pt1h->size[0] * pt1h->size[1];
  pt1h->size[0] = result;
  pt1h->size[1] = input_sizes_idx_1 + reshapes[1].f1->size[1];
  emxEnsureCapacity_real32_T(&b_st, pt1h, i19, &xf_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i19 = 0; i19 < loop_ub; i19++) {
    for (end = 0; end < result; end++) {
      pt1h->data[end + pt1h->size[0] * i19] = points->data[end + points->size[0]
        * i19];
    }
  }

  loop_ub = reshapes[1].f1->size[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    result = reshapes[1].f1->size[0];
    for (end = 0; end < result; end++) {
      pt1h->data[end + pt1h->size[0] * (i19 + input_sizes_idx_1)] = reshapes[1].
        f1->data[end + reshapes[1].f1->size[0] * i19];
    }
  }

  emxFreeMatrix_cell_wrap_26(reshapes);
  st.site = &oi_emlrtRSI;
  b_st.site = &bh_emlrtRSI;
  if (pt1h->size[1] != 3) {
    if ((pt1h->size[0] == 1) && (pt1h->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &li_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &mi_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  b_st.site = &ah_emlrtRSI;
  emxInit_real32_T(&b_st, &b_pt1h, 2, &xf_emlrtRTEI, true);
  if (pt1h->size[0] == 0) {
    i19 = b_pt1h->size[0] * b_pt1h->size[1];
    b_pt1h->size[0] = pt1h->size[0];
    b_pt1h->size[1] = 3;
    emxEnsureCapacity_real32_T(&b_st, b_pt1h, i19, &yf_emlrtRTEI);
    loop_ub = pt1h->size[0] * 3;
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_pt1h->data[i19] = 0.0F;
    }
  } else {
    c_st.site = &ch_emlrtRSI;
    c_st.site = &dh_emlrtRSI;
    alpha1 = 1.0F;
    beta1 = 0.0F;
    m_t = (ptrdiff_t)pt1h->size[0];
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)pt1h->size[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)pt1h->size[0];
    i19 = b_pt1h->size[0] * b_pt1h->size[1];
    b_pt1h->size[0] = pt1h->size[0];
    b_pt1h->size[1] = 3;
    emxEnsureCapacity_real32_T(&c_st, b_pt1h, i19, &bg_emlrtRTEI);
    TRANSA = 'N';
    TRANSB = 'N';
    sgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &pt1h->data[0], &lda_t,
          &tform[0], &ldb_t, &beta1, &b_pt1h->data[0], &ldc_t);
  }

  emxFree_real32_T(&pt1h);
  emxInit_real32_T(&b_st, &w, 1, &ag_emlrtRTEI, true);
  loop_ub = b_pt1h->size[0];
  i19 = w->size[0];
  w->size[0] = loop_ub;
  emxEnsureCapacity_real32_T(sp, w, i19, &ag_emlrtRTEI);
  for (i19 = 0; i19 < loop_ub; i19++) {
    w->data[i19] = b_pt1h->data[i19 + (b_pt1h->size[0] << 1)];
  }

  emxInit_real32_T(sp, &delta, 2, &eg_emlrtRTEI, true);
  st.site = &pi_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  c_st.site = &hf_emlrtRSI;
  i19 = delta->size[0] * delta->size[1];
  delta->size[0] = w->size[0];
  delta->size[1] = 2;
  emxEnsureCapacity_real32_T(&b_st, delta, i19, &cg_emlrtRTEI);
  loop_ub = w->size[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    delta->data[i19] = w->data[i19];
  }

  loop_ub = w->size[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    delta->data[i19 + delta->size[0]] = w->data[i19];
  }

  st.site = &pi_emlrtRSI;
  i19 = b_pt1h->size[0];
  varargin_1[0] = (uint32_T)i19;
  varargin_1[1] = 2U;
  varargin_2[0] = (uint32_T)delta->size[0];
  varargin_2[1] = (uint32_T)delta->size[1];
  empty_non_axis_sizes = false;
  p = true;
  result = 0;
  exitg1 = false;
  while ((!exitg1) && (result < 2)) {
    if ((int32_T)varargin_1[result] != (int32_T)varargin_2[result]) {
      p = false;
      exitg1 = true;
    } else {
      result++;
    }
  }

  if (p) {
    empty_non_axis_sizes = true;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&st, &bi_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxInit_real32_T(&st, &pt, 2, &dg_emlrtRTEI, true);
  loop_ub = b_pt1h->size[0];
  i19 = pt->size[0] * pt->size[1];
  pt->size[0] = loop_ub;
  pt->size[1] = 2;
  emxEnsureCapacity_real32_T(&st, pt, i19, &dg_emlrtRTEI);
  for (i19 = 0; i19 < loop_ub; i19++) {
    pt->data[i19] = b_pt1h->data[i19] / delta->data[i19];
  }

  for (i19 = 0; i19 < loop_ub; i19++) {
    pt->data[i19 + pt->size[0]] = b_pt1h->data[i19 + b_pt1h->size[0]] /
      delta->data[i19 + delta->size[0]];
  }

  i19 = points->size[0];
  b_pt[0] = pt->size[0];
  b_pt[1] = pt->size[1];
  iv11[0] = i19;
  iv11[1] = 2;
  if ((b_pt[0] != i19) || (b_pt[1] != 2)) {
    emlrtSizeEqCheckNDR2012b(&b_pt[0], &iv11[0], &j_emlrtECI, sp);
  }

  i19 = delta->size[0] * delta->size[1];
  delta->size[0] = pt->size[0];
  delta->size[1] = 2;
  emxEnsureCapacity_real32_T(sp, delta, i19, &eg_emlrtRTEI);
  loop_ub = pt->size[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    delta->data[i19] = pt->data[i19] - points->data[i19 + (points->size[0] << 1)];
  }

  loop_ub = pt->size[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    delta->data[i19 + delta->size[0]] = pt->data[i19 + pt->size[0]] -
      points->data[(i19 + points->size[0]) + (points->size[0] << 1)];
  }

  emxFree_real32_T(&pt);
  emxInit_real32_T(sp, &b_delta, 1, &gg_emlrtRTEI, true);
  st.site = &qi_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  c_st.site = &ti_emlrtRSI;
  i19 = delta->size[0];
  end = w->size[0];
  w->size[0] = i19;
  emxEnsureCapacity_real32_T(&c_st, w, end, &fg_emlrtRTEI);
  loop_ub = delta->size[0];
  end = b_delta->size[0];
  b_delta->size[0] = loop_ub;
  emxEnsureCapacity_real32_T(&c_st, b_delta, end, &gg_emlrtRTEI);
  for (end = 0; end < loop_ub; end++) {
    b_delta->data[end] = delta->data[end];
  }

  emxInit_real32_T(&c_st, &c_delta, 1, &hg_emlrtRTEI, true);
  loop_ub = delta->size[0];
  end = c_delta->size[0];
  c_delta->size[0] = loop_ub;
  emxEnsureCapacity_real32_T(&c_st, c_delta, end, &hg_emlrtRTEI);
  for (end = 0; end < loop_ub; end++) {
    c_delta->data[end] = delta->data[end + delta->size[0]];
  }

  if (!dimagree(w, b_delta, c_delta)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ki_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxFree_real32_T(&c_delta);
  emxFree_real32_T(&b_delta);
  end = dis->size[0];
  dis->size[0] = w->size[0];
  emxEnsureCapacity_real32_T(&b_st, dis, end, &ig_emlrtRTEI);
  c_st.site = &sc_emlrtRSI;
  d_st.site = &ui_emlrtRSI;
  empty_non_axis_sizes = ((1 <= w->size[0]) && (w->size[0] > 2147483646));
  if (empty_non_axis_sizes) {
    e_st.site = &mb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (result = 0; result < i19; result++) {
    dis->data[result] = muSingleScalarHypot(delta->data[result], delta->
      data[result + delta->size[0]]);
  }

  emxFree_real32_T(&delta);
  st.site = &ri_emlrtRSI;
  b_st.site = &vi_emlrtRSI;
  i19 = b_pt1h->size[0];
  end = b_pt1h->size[0];
  result = w->size[0];
  w->size[0] = end;
  emxEnsureCapacity_real32_T(&b_st, w, result, &jg_emlrtRTEI);
  c_st.site = &wi_emlrtRSI;
  end = b_pt1h->size[0];
  if (1 > end) {
    empty_non_axis_sizes = false;
  } else {
    end = b_pt1h->size[0];
    empty_non_axis_sizes = (end > 2147483646);
  }

  if (empty_non_axis_sizes) {
    d_st.site = &mb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (result = 0; result < i19; result++) {
    w->data[result] = muSingleScalarAbs(b_pt1h->data[result + (b_pt1h->size[0] <<
      1)]);
  }

  emxFree_real32_T(&b_pt1h);
  emxInit_boolean_T(&b_st, &r17, 1, &lg_emlrtRTEI, true);
  i19 = r17->size[0];
  r17->size[0] = w->size[0];
  emxEnsureCapacity_boolean_T(sp, r17, i19, &kg_emlrtRTEI);
  loop_ub = w->size[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    r17->data[i19] = (w->data[i19] < 1.1920929E-7F);
  }

  emxFree_real32_T(&w);
  end = r17->size[0] - 1;
  result = 0;
  for (loop_ub = 0; loop_ub <= end; loop_ub++) {
    if (r17->data[loop_ub]) {
      result++;
    }
  }

  emxInit_int32_T(sp, &r18, 1, &lg_emlrtRTEI, true);
  i19 = r18->size[0];
  r18->size[0] = result;
  emxEnsureCapacity_int32_T(sp, r18, i19, &lg_emlrtRTEI);
  result = 0;
  for (loop_ub = 0; loop_ub <= end; loop_ub++) {
    if (r17->data[loop_ub]) {
      r18->data[result] = loop_ub + 1;
      result++;
    }
  }

  emxFree_boolean_T(&r17);
  loop_ub = r18->size[0] - 1;
  i19 = dis->size[0];
  for (end = 0; end <= loop_ub; end++) {
    result = r18->data[end];
    if ((result < 1) || (result > i19)) {
      emlrtDynamicBoundsCheckR2012b(result, 1, i19, &sb_emlrtBCI, sp);
    }

    dis->data[result - 1] = rtInfF;
  }

  emxFree_int32_T(&r18);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (estimateGeometricTransform.c) */
