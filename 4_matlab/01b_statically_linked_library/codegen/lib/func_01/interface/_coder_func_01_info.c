/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_func_01_info.c
 *
 * Code generation for function 'func_01'
 *
 */

/* Include files */
#include "_coder_func_01_info.h"

/* Function Definitions */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[10] = {
    "789ced5acd6f1a47145f57ae4514f5e3d0f650f556294ae58ac5264228522430061b02c15f4948a314cfb243593c3bbb9e5d08f8121f7bec1fd0438e3df6d6aa"
    "87aafd23da7fa0875e7aeea1a7ee070fc3caa3dd02ddd8789e640d4f6f99dfdbdf3e7e33fbc6d24ab9b62249d2bb926f898c3fbe33f2df1f8d6f49d3168caf8c",
    "c65b011fec6d6975ea7b10ff7634b60c6ae381ed3b44a3f8514f5730731c8a743c9e4635748d226a1f0d4d2c316c19a48f552fd2d6083ed2745c35269c5dcd71"
    "f4d24468ecb821f773a1835b27873d5d621deb225d32e94813fcbce6dcff6a447e721c7edcebfe7975117f5e7c51b82fabb82f2b3d8da8f2bda68e6c821439b5",
    "a1342d1bd95a0b11326c3a549d60d5191486d8506ef768ab99da48ea90ef31279fb588f90647b05b5262d2cd85e145e56735e04be3eb563d7eac53e615c9a2f0"
    "d602fe05de9a87a71a3d85e0c53dfffb5c3cfff943fc79b9daf04aa0963faae6b7e483cdd44656916dc3208a3190b14e64e799cba3a2c0c479f0b2cb4d52f7bf",
    "1fdff3cffdfaf8ce6ff998eb2dc6fb7bb37803ce7c51ebed230e1ed41bc4efed14db9d54a6dcad17d3657b6f9fd27e617bf7228fbd109cb03c248e1fd7fcaf39"
    "dfbfb9bf5bd7ee8c75fb9c335f547e3ee1e0013f106f192a6649cd59ec194524a959db868e345a64cc7017fbf1fd9b73e6f35e483e1077174c5b3368b383a8ea",
    "083de07f3727fe4e083ec423d48bfbb7eef126af0371f214714ef1c45737e73ffda5fc2ef4fe7fc28b4bef494d57f513866b66e1a99d357a6afb594fdb5a1ebd"
    "17bfdf699baeb7ccc2f6eb89802f8daf4b783c6996652266e1ebba5fcf71f102ef6bff69dd773971577e6027cef7b55ce2c19742bfafbb7ebf7c5ab64ae4e449",
    "69b3cd0e49bf5bafd0b3fd82d0ef9ba1df0fc6fafd3567bea83c7dcac1039e201ed8b7a3bea1a979c6d0b044906d63aad1afbcebe6d5f9a0f1f20203bcef67c4"
    "83f91f85e0417cd67ab98c30f79d2fc6ba39ff5becdbafbdee9f5576d385c76643df57ea6abed1dead0df4bae8d32c799fe66e6e5175f601070ff8817840ef71",
    "b03f733c671e617dfe56074de1cdabef152e9e7fdf100fa90bcb490babb2afee238d0f4a3d1e6d09a4c9fc8f39f92db02ff3f3c36742dfafbbbe0fe8fecbb39a"
    "a96fed9c6e97ac6ca172da3752db42df975bdf930bebc37fccc1037e201ed077ab85086249385d7d73fbf879dffb4a2178109f751fbfee3335ae95f8eae4971f",
    "fef8539cb35e557dff9083077507f16caf7a987a92aee759395da48dca41861e6424a1ef3745dfbfe1cc17959fcf3878c00fc483fd1ad324c3434fba4aa313cf"
    "32dd23a805ff5a7555ce5d7f9c13ff28041fe233f771b844fa9515e37aa0dcee8afdfe555d0fa2eef70d54ed2a08ed14d474b66b353671ed0b73b844fb7df17b",
    "be7c049baebfcfc5b96c44bc1c174f9ccb46c3f3eda6e08973d9c5cc2ff4fcf2116cd9fb3ab3eabde8eb4c9be8ebc48327fa3af3cdff2f88633fb6",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 13856U, &nameCaptureInfo);
  return nameCaptureInfo;
}

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
    "C:\\dev\\build\\4_matlab\\01b_statically_linked_library\\func_01.m"));
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

/* End of code generation (_coder_func_01_info.c) */
