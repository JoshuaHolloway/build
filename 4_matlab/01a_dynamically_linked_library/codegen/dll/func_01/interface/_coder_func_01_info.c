/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_func_01_info.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 15-Feb-2019 17:33:15
 */

/* Include Files */
#include "_coder_func_01_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[10] = {
    "789ced5acf6fe344149ea2526585f871000e881bd20a5414a7cd2a8a565a29699ab409c9a6bf76370b82741c4f88d3f18c6b3bd9b4177ae4c81fc0618f1cb981"
    "3820f823e01fe0c08533074ec44e5e1a5b1dd924c16dd3795234797ace7ccf5f9ebf99bc095a29d75610426f0c5fee98c820cf5e1f0de8adf1f80af25b30be32",
    "1eef057cb057d1aaef7310ff763cb63873c8c019395467e471cf508935741836c8641a8d1b3ac3cc393a3309b288cd699f685ea4ad5372a41ba4caa79c5d7de8"
    "18a5a9d0c47143eefb4287b44e0e7b06b23af665ba74da4153fcbc14dcff6a447e1e0af871affbe7abcbf867c5cf0b0f158df415b5a7534d79d034b043b1aaa4",
    "36c6ef9a0e6ff6ed665fc74d8d52a5dd63ad666a2369f8f33d16e4b31631dfe008760f25a6dd5c185e547e56033e9a5cb7eaf1639f5a5e912c0a6f2de05fe2ad"
    "79781aefa9945cc3f75fae36bc12a8e58faaf92de56033b59155158773aaf281420caa505d55c64541e8f0eb575c6ee2fffe73bf3eb9ff5b3ee67a8bbbbeaf0d",
    "6f20982f6abdbd2bc0837a83f8839d62bb93ca94bbf562baececed33d62f6cef5ee6b1178213960712f871cdff52f0f9bbfbdcba767fa2db1782f9a2f2f3be00"
    "0ff881788b6bc44aeac3c5de629826757b9b1b586745cbe2ee623fb97f73ce7cde0cc907e2eeb2e9e89c353b986943a107fcefe6c4df09c18778847a715feb1e",
    "6fca3a10a7f8881b164f7c7573f1d35feaef52efff27bcb8f49ed60ccd38b148cd2c3c73b2bca7b59ff7f4ade5d17bf9fcfacd5f6f9985edd713011f4dae4b78"
    "3ce9b66d62cb26b775bf9e13e28dea00e2ff6ddd773971577e602769c4b85f4f3cfa42eaf76dd7ef17cfca76899e3c2d6db6ad43daefd62bec7cbf20f5fb6ee8",
    "f7a3897e7f2d982f2a4f1f08f080278807f6edb8cf752d6f59f8ac44b1e310a6b32fbdebe6d5f9a089f20203bcef67c483f91f87e0417cd67ab98a30f7375f8c"
    "7573f1b7dcb7df7add3fafeca60b4fcc86b1afd6b57ca3bd5b1b1875d9a759f23ecd87b945d5d9db023ce007e201bd27c1feccf19c7984f5f95b1decc39b57df",
    "2b42bcd17d433ca42eec615a445346ea3ed6f8a0d493f196004de77f2cc86f817d999f3f792ef5fdb6ebfb80edbf38af99c6d6cee976c9ce162aa77d9eda96fa"
    "bedcfa9e5c581ffe3d011ef003f180bedb2d4cb19584d3d5ebdbc7cffbbbaf148207f159f7f1eb23a626b5125f9dfcf2c31f7fca73d69baaefef08f0a0ee209e",
    "ed550f534fd3f5bc554e1759a3729061071924f5fdaee8fb3782f9a2f2f391000ff88178b05f639af4ecd093aed2f8c4b3ccf6286ec15fab6ecab9eb8f73e21f"
    "85e0437ce63e8e90c85165c5b81ea8af75e57effa6ae0751f7fb1c57bb2ac63b052d9dedda8d4d52fbd43c5ba2fdbe7c9eaf1ec1fcf5f7b13c978d889713e2c9",
    "73d9687823bb2b78f25c7631f34b3dbf7a045bf6beceac7a2ffb3a7e937d9d78f0645f67bef9ff053e623d86",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 13856U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("func_01"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\dev\\build\\4_matlab\\01_matlab_to_vs_via_dll\\func_01.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737471.73140046292));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_func_01_info.c
 *
 * [EOF]
 */
