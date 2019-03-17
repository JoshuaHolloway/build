/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * visionRecovertformCodeGeneration_kernel_data.c
 *
 * Code generation for function 'visionRecovertformCodeGeneration_kernel_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visionRecovertformCodeGeneration_kernel.h"
#include "visionRecovertformCodeGeneration_kernel_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "visionRecovertformCodeGeneration_kernel",/* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 933878966U, 2751585356U, 3052266547U, 2808075253U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo n_emlrtRSI = { 128,        /* lineNo */
  "detectSURFFeatures",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\detectSURFFeatures.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 39,         /* lineNo */
  "validateImage",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\validateImage.m"/* pathName */
};

emlrtRSInfo p_emlrtRSI = { 49,         /* lineNo */
  "validateImage",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\validateImage.m"/* pathName */
};

emlrtRSInfo q_emlrtRSI = { 76,         /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

emlrtRSInfo r_emlrtRSI = { 12,         /* lineNo */
  "SURFPoints_cg",                     /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPoints_cg.m"/* pathName */
};

emlrtRSInfo s_emlrtRSI = { 25,         /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo t_emlrtRSI = { 26,         /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo u_emlrtRSI = { 202,        /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo v_emlrtRSI = { 204,        /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo w_emlrtRSI = { 205,        /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo x_emlrtRSI = { 206,        /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo y_emlrtRSI = { 211,        /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo ab_emlrtRSI = { 212,       /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo bb_emlrtRSI = { 240,       /* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 241,       /* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 245,       /* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 357,       /* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 323,       /* lineNo */
  "FeaturePointsImpl",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 224,       /* lineNo */
  "SURFPointsImpl",                    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 146,       /* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

emlrtRSInfo mb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 27,        /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 48,        /* lineNo */
  "checkPoints",                       /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\+inputValidation\\checkPoints.m"/* pathName */
};

emlrtRSInfo qc_emlrtRSI = { 49,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo rc_emlrtRSI = { 58,        /* lineNo */
  "power",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 65,        /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo tc_emlrtRSI = { 189,       /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 9,         /* lineNo */
  "sum",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

emlrtRSInfo vc_emlrtRSI = { 64,        /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

emlrtRSInfo wc_emlrtRSI = { 71,        /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo xc_emlrtRSI = { 80,        /* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

emlrtRSInfo yc_emlrtRSI = { 172,       /* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

emlrtRSInfo ad_emlrtRSI = { 158,       /* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

emlrtRSInfo bd_emlrtRSI = { 136,       /* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

emlrtRSInfo cd_emlrtRSI = { 12,        /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

emlrtRSInfo bf_emlrtRSI = { 506,       /* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

emlrtRSInfo gf_emlrtRSI = { 20,        /* lineNo */
  "cat",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

emlrtRSInfo hf_emlrtRSI = { 100,       /* lineNo */
  "cat",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

emlrtRSInfo kg_emlrtRSI = { 69,        /* lineNo */
  "randperm",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"/* pathName */
};

emlrtRSInfo lg_emlrtRSI = { 57,        /* lineNo */
  "randperm",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"/* pathName */
};

emlrtRSInfo mg_emlrtRSI = { 50,        /* lineNo */
  "randperm",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"/* pathName */
};

emlrtRSInfo ng_emlrtRSI = { 40,        /* lineNo */
  "randperm",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"/* pathName */
};

emlrtRSInfo yg_emlrtRSI = { 193,       /* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

emlrtRSInfo bh_emlrtRSI = { 21,        /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

emlrtRSInfo eh_emlrtRSI = { 25,        /* lineNo */
  "cat",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

emlrtRSInfo uh_emlrtRSI = { 7,         /* lineNo */
  "int",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\int.m"/* pathName */
};

emlrtRSInfo vh_emlrtRSI = { 8,         /* lineNo */
  "majority",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\majority.m"/* pathName */
};

emlrtRSInfo wh_emlrtRSI = { 31,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo xh_emlrtRSI = { 45,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo yh_emlrtRSI = { 48,        /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

emlrtRSInfo hi_emlrtRSI = { 33,        /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

emlrtRSInfo ii_emlrtRSI = { 61,        /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo ji_emlrtRSI = { 292,       /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo ki_emlrtRSI = { 90,        /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

emlrtRSInfo dj_emlrtRSI = { 40,        /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo tj_emlrtRSI = { 25,        /* lineNo */
  "colon",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo uj_emlrtRSI = { 78,        /* lineNo */
  "colon",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo vj_emlrtRSI = { 121,       /* lineNo */
  "colon",                             /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

emlrtRSInfo fk_emlrtRSI = { 114,       /* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

emlrtRSInfo gk_emlrtRSI = { 356,       /* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

emlrtRSInfo hk_emlrtRSI = { 362,       /* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

emlrtRSInfo ik_emlrtRSI = { 367,       /* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

emlrtRSInfo jk_emlrtRSI = { 284,       /* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

emlrtRSInfo kk_emlrtRSI = { 383,       /* lineNo */
  "affine2d",                          /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pathName */
};

emlrtRSInfo wk_emlrtRSI = { 42,        /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

emlrtRSInfo xk_emlrtRSI = { 46,        /* lineNo */
  "inv",                               /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

emlrtRSInfo yk_emlrtRSI = { 128,       /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

emlrtRSInfo al_emlrtRSI = { 151,       /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

emlrtRSInfo bl_emlrtRSI = { 152,       /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

emlrtRSInfo cl_emlrtRSI = { 354,       /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

emlrtRSInfo dl_emlrtRSI = { 376,       /* lineNo */
  "imref2d",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\+images\\+internal\\+coder\\imref2d.m"/* pathName */
};

emlrtRSInfo hm_emlrtRSI = { 26,        /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

emlrtRSInfo im_emlrtRSI = { 20,        /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

emlrtRSInfo jm_emlrtRSI = { 15,        /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

emlrtMCInfo b_emlrtMCI = { 46,         /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

emlrtMCInfo e_emlrtMCI = { 53,         /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

emlrtRTEInfo l_emlrtRTEI = { 24,       /* lineNo */
  17,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

emlrtRTEInfo m_emlrtRTEI = { 224,      /* lineNo */
  43,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

emlrtRTEInfo n_emlrtRTEI = { 224,      /* lineNo */
  61,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

emlrtRTEInfo lf_emlrtRTEI = { 58,      /* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

emlrtRTEInfo mf_emlrtRTEI = { 80,      /* lineNo */
  13,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

emlrtRTEInfo of_emlrtRTEI = { 65,      /* lineNo */
  27,                                  /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

emlrtRTEInfo lh_emlrtRTEI = { 13,      /* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

emlrtRTEInfo mh_emlrtRTEI = { 281,     /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

emlrtRTEInfo nh_emlrtRTEI = { 371,     /* lineNo */
  13,                                  /* colNo */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pName */
};

emlrtBCInfo emlrtBCI = { -1,           /* iFirst */
  -1,                                  /* iLast */
  371,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m",/* pName */
  0                                    /* checkKind */
};

emlrtRTEInfo oh_emlrtRTEI = { 367,     /* lineNo */
  13,                                  /* colNo */
  "affine2d",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\images\\images\\affine2d.m"/* pName */
};

emlrtRTEInfo qh_emlrtRTEI = { 331,     /* lineNo */
  17,                                  /* colNo */
  "FeaturePointsImpl",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\FeaturePointsImpl.m"/* pName */
};

emlrtRTEInfo rh_emlrtRTEI = { 224,     /* lineNo */
  13,                                  /* colNo */
  "SURFPointsImpl",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\vision\\vision\\+vision\\+internal\\SURFPointsImpl.m"/* pName */
};

emlrtRTEInfo sh_emlrtRTEI = { 12,      /* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

emlrtRTEInfo th_emlrtRTEI = { 13,      /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

emlrtRTEInfo uh_emlrtRTEI = { 13,      /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

emlrtRTEInfo vh_emlrtRTEI = { 15,      /* lineNo */
  37,                                  /* colNo */
  "validatesize",                      /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatesize.m"/* pName */
};

emlrtRTEInfo xh_emlrtRTEI = { 46,      /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

emlrtRTEInfo bi_emlrtRTEI = { 13,      /* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

emlrtRTEInfo ji_emlrtRTEI = { 17,      /* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

emlrtRTEInfo mi_emlrtRTEI = { 88,      /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

emlrtRTEInfo ni_emlrtRTEI = { 22,      /* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

const real_T dv0[3] = { 0.0, 0.0, 1.0 };

const char_T cv0[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a', 'x',
  's', 'i', 'z', 'e' };

emlrtRSInfo nm_emlrtRSI = { 46,        /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

emlrtRSInfo pm_emlrtRSI = { 53,        /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* End of code generation (visionRecovertformCodeGeneration_kernel_data.c) */
