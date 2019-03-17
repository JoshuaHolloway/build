/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_gaussianFilter_info.c
 *
 * Code generation for function '_coder_gaussianFilter_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "gaussianFilter.h"
#include "_coder_gaussianFilter_info.h"

/* Function Definitions */
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
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("gaussianFilter"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\dev\\build\\4_matlab\\71_using_C_Cpp_Code_with_MATLAB\\gaussianFilter.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737500.68104166666));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[31] = {
    "789ced5ddd8fe35615cf96b6cc820a0b8576a1055a28e5a36832992433932d857c67321f4926c9243353b51927711227fe8aed6492790a6f8010e211894acd13"
    "4220a4e5894af030fd0f780084e0a542e2813f8077fc919b9978731b27f138e3e41c69d7eb7becfbbb3e39fef9ecf1b9d78e7bf1c37b0e87e333f21f65fbd1a6",
    "f2b7c3f19c43930783ed538e51d1ebef0db61edd3e92671c4fab6dcfe9f4ef0db6258e95c88ea4edd0144b265a4c9114e41d9660c86137658ea1588295b25d9e"
    "7408a4c8d16db2ac6a2a144d6629863ce06eecec52f20e13bda11aee282ae5dfa11a596a645a8c43a889d7c3a56fee386ed8e731e6fa9f36689f38c63e0f066d",
    "48ff76e49dd02367996c3b8b2d8a2e3b3d05869068a2e8dc76155a22c5560ba14288e70b21ae4c162e28a956380c640f0241679568892245b0f2b549a4b0cee8"
    "c67f8e19dfb306c7afdf22b9ef58bbb1b7ee9f8467d45e9fc4e03d90354a5b85172856aa4cbc3ea3784febf6aff134ff2dd508c5298778fd39f1dec2e2696d48",
    "ff76fce0447589c1cf9cdedc70ed149d12c7d145aee32419da495345e7c04928aed2629d03dba83e60ddef7ff58787b5bf07acf537abfd7b71781d4c7f46fded"
    "050c1ef237a43f604ebb1d5792f7baf6820d61ff423cdd3bf085afc7919a8033691c0eccbe55fdf731e7dfd5fb96c78cc7a89f3da5db47725f77bc265b7e75d3",
    "8bf8cdf2bb87187c642fa42fc9cf33615dbe7c5260097a9d25842ac5966a8d79f95d2fb8712031eb799f988087f413fc44941f3b64d9a95a67f0f71b830db295"
    "73682bc571ace3a7def38fd27f05bebf253cabf8bedbb988fb8868a5eadd2825235ca61e6d6d5f449687efed7e1fe3fcc0a8df7d02337ec4ff0f475abfeed7b6",
    "af0fb6df332d9e7f06338e07b2468de7698e53026cb3f09ed5ed5fe33dabb695b9569126cd8b0bdec4e2696d483f5d5c40d26a5ca0d866f03f3a0bf9e8c3e3d7"
    "ff06fc7e4b7856f1fb4e733b996dd2616f2358cb1ec53252331c2e459787dffb98f357f8be95e595216ff730fd19b5cfd73078c83e48af8bdf2931d8a26829ce",
    "265a0c2950a585f1fabccfff3d2c9ed686f406fc43f9f3c4435f6f2894b8b3308effe3fffe093c6f779e4fb69ba14065b7bd933df2744b1186dd8c9ed1bbc0f3"
    "cbcdf3af99c6f32f61f0907d905ec7f36289a009611d45eff3c7ef7ac18d0709c2fbcd8c78a8afd8043ca49f95e7dfd02c35f4150bf9fdb7f92f01bfdb9ddf8b",
    "b5add4094b4be50cc7445aecaebb1809eec580df5785df7f81e9cfa87dbe83c143f6417a1dbf133c4f77332a75455b6c49a23836cea668a2845ecd4f7a4f6174"
    "7c9f9d303ea4af0c4651a8116c590ef411fe0773e26727e023fdacfc8f37a4e65816bea72d7eba0eef69edfe3ce088837a912062a1b27ba72e9e6c9287677c77",
    "89ded3c2fd3c7e8b64d4ffcccbd3afe9f61dc3e3d6d4364a1479421049bbe6e9fd583cad0de9a78b13149b289102b2ce3a63ddefef5f7beb5de073bbf3f9453e"
    "2e46e9462eba59113274bb9edc632f8f42c0e7abc9e7eb4b97d79995ef21af332a90d7b1060ff23ae6f4dfc79c7f57eb2dcf31e331d5cf7a01dbd6c95b1daf2f",
    "dfef0f75f2b7890775f2e6f4dfc79cbfbaf7ad2cbda86579960a555667a8ad42dc9d9ad601e4dfbf4d48a41319c9d2b8dbff18e26efbf37727e5c95de6734c2e"
    "e73e2defa62b671b890eb14475ef7dccf9abcddf7b96d5b3b7789e34b39eddeaf9a9dfc7e2696d483f659e5c52d3e4aa71acceabf93ff52e09bc6d77deaeb959",
    "e63499ddbd8ced873d174c8ace87cb4410787b79ef5b455ca6cd47fd02060fd907e9650314e4ab56165c900482152b9c60e8ba6f8bcf1fcf89b78fc5d3da907e"
    "26bf18672ccbeba57ae7efc481dfedceef44653758f4a44a99f6d6aecb158fc6a31d4f7389f81deee3f1e3c7d53dfe18d39f517bbd86c143f6427a7ddda32892",
    "8294911f789c2091e58c6a14e538bbf27f128ba7b521fdccefcfc719ccdaf7a139e07ffbf37fc517f78aa444345c45a67e4c258e2b89adc412bd0f85fb78fcf8"
    "47fdee65587f66463cd45762021ed2c3fa3346f13459153c587fc69cfee7ad7bcc63fa4776447a93f9fe558a95ff0350252df63fbf69bc6fd4ff74bcaf84dd0c",
    "d1b1ef3cd6c0043ca49fd55f06065ac0faa2fe4b88efedcff7c45983f0a493c7e17c2d74dc3c38dddd6236a525aa9b81fb775470713d0ecfac7a16f9824de1f1"
    "7bbae39ec4b3d3fb579296ffe1d46c63f9bcd30f5ebc0f758f76e76fa1b9c1d729d11360b652db6caa78e2decf894b949f87787dfc16c9683dcd75bcdec3f467",
    "d46e5fc5e021bb21bdf28a423646a1c20934c7f105ae4d0a159abb28949442c0c5c5edf3fa4d7a021ed24fc9f79a1b7d8cc5ac5f6feceacfff79069e03767f0e"
    "88fb914e247c7999daeb6c7a0e3737424701d7c612e56dfe8139dfa81d3bba7dc78de36efe4ee6dfcfaf7efc01851a49f3a460ad7fc64c8bfb27c5e1945851be",
    "fd62dafdf022164f6b437afdfa976c99ecc45969388e5fce398e9d09e3407a83fe54a13a6499e7e4f13a158b59b95e81e303586fd2fefc9fe9f214e36da6f32e"
    "aa58f6c4cf8e5287aef612e571e07ebde95f1b43fee631fd19b5cb73ba7dc78de3eeddd05322ab2d882b295ffc5a5c1ee70ee5f39ef0831b165a443eeff7300f",
    "cafe3c1e7337ba996695a243d95023dd0c56b38de3c812f138c4f1c6aed3987fc6217f6f100ff2f7f3e269b22a7890bf37a77fe07b63d769c83f7bd6f23dc502"
    "dfe3f89e622de7fb3f01dfdb9fefabc4e976d29d4f34b78b0129e425921ed27304f5f4c3fe56a39efe7a3d49a8ab9c0e0ff515988087f4f6abcb82bacadbc483",
    "ba4a73fa9f97e75763deecb781e767c4039e371b4f9355c1039e37a77fe0f9f1e3bfadef7d4c5ac7acc4d11cebb02e2f2313a5fa6adcacbc8c0f8ba7b521fd74"
    "fec0f1a253b5cc2278fcbd7f7f03f23276e7f1d065958e13eefd93ec1e7f59776d5014b17706dfe55ed87dcb63c663d4cf9ec28cf7beee784ddc7e75d30b9956",
    "3f0fdfe9c6e1696df09dee69f13459153cf84eb739fdf731e7df55de3fc78cc75c3ff341bc6e106ff97e7f88d76f130fe27573faef63ce5fddfb56965e7869e3"
    "f369791de2f3f1e387f8dc1a3c88cfcde9bf8f39ffaef2bca579995edaaf6eafd296c5ebe80bab8bcabbf4e7c47b138ba7b521fdb4758fea776206df5455c442",
    "def9f0f875e071bbf3f84e733b996dd2616f2358cb1ec53252331c2e2d51bc3e6f9d4318d33fb223d2cfcce3afaa55ebdaa2340e8bfd2dd586ba75837850b73e"
    "2f9e26ab820775ebe6f40ffc3d2a23fe766e2d7fc33c539867ba2a7830cfd49cfee75def2f87e91fd911e967e7efc17452b24a0a05b5ad50a6449e90645e17ac",
    "f6bf77201e378807f1f8bc789aac0a1ec4e3e6f40f7c3e7e8b64917c0ef139c4e7ab8207f1b939fd039f8fdf2219ad73b9e6f305cd1ba544e258de595cdde25d"
    "9f373a30d002eaa0aebc6b3f82efecd99defc946a4949632de0693ea864fdc1b9160e0b81e02beb78eef47b99e26d9aa542bb01ccb92d5b2c5fed7674dab6b7c",
    "198387ec86f43abe6fb1225565c97288264451d12f2abe9f97f763583cad0de967e5fd114359ba6e90ff77b0beefdde5fd2f62f090df217dea503a8b55ea47fb"
    "5b89686dc757ef264f8a5107f0fe5de37d1e33ce5ba973bc62fdeaf6a3ebe7c039a67fc8e36802799c79f13459153cc8e398d3ffb2f0fb39669ce6fa1f07799c",
    "39f102583cad0de9218f33094f9355c1833c8e39fd03df8fdf2219f1bfbff0a6f1fd430c1eb21bd28ffbce5d8a6e898b9abf342fdf87b0785a1bd2cfccf7c840"
    "d6cf63ca7d5e02beb73bdfef66764f4e32ee645e8a11c9463dbe7f58f55e40ddcdb0bfdbf96eb2fe3dad96831d7d5d3b7a1de798719a9bb72f9a96b787ef6d7f",
    "3c1e7c6f7b563c4d56050fbeb76d4eff8f31e7c3babfb7b3eeefb4f9f3dbc6337b1db1db599760e00f8a712cfffdafde2763c0e376e7f17c9208ec76d97091f5"
    "750335a27611167391255a97a08f397f75ef5b45bebbe83c0d4b08558a2dd51a8b8ad7e77dbe2726e021fd04bf10650f20cb4e2d4b33c8d5e85336435b29ae62",
    "9d9ff49e7f94867c8dddf9bddbb988fb8868a5eadd2825235ca61e6d6d5f2c519cdec79cbfdafcfe68d1f594ca958708510a695999c5e565ee7a3de588a12cad"
    "a7bcfad7af7e0ef1bbddf99d70519784ef88cffbcef6f96c305c895d72e125fafe12dcbfa332ea6f2ed3781ed603c6e1696db01ef0b4789aac0a1eac076c4eff",
    "c0f7a332ea6f5ed3f8fe2b183c6427a47f82efe3da3b673451caaef3a476b1785a1bd2cfcef7370db5ce58384fea672f401dbded793eca1ea482817ce292623a"
    "c93a5f669252a2bb447595c0f3a332ea6f5b300fca201ecc839a174f9355c1837950e6f4dfc79c6fd48e6f61fa477644fae9ee5b8a53bfd3c00bf2ad5b516f5c",
    "6bfd6c7fd1f918f5ca0bbcc0954851a4d8eac278fdaee763f486b23e1fe378ff610d78deee3c4fb0e98ea7554e36728dcb54aae33d4c96aa8125aa8787fb78fc"
    "f847fd6e7bd17919890bc9041caf64d4aa5007e46570fe326a282bf3323dc8cbdc229e557c7f96f3e65c642dd0719f9e46c56acddb4de7b79728ae87fb775446",
    "fded15d3f2326bba7dc7f0b835b58d12b5027fbbe6657e88c5d3da907ea6ba2a641c6bd71ffb6903f8dbf6fccd675b59ca53ce05f846723f717a102deeb0e525"
    "aa7787787dfcf847fd2e685abcfe12060fd90be99f788f9aca67222c51a4c9b2aab76b7d6474021ed2cffe1ef5da50d6d6bf5ffde49baf01dfdb9def53ed4c24",
    "79d0152e639b7ba184c4070e76881cf0fd6af17d2f3ce4fb1f63fa336aaf6f61f090bd905ec7f76d82a6ca844416347b1042b5c590ac242e2c4f7387d62b18eb"
    "37388359ef3ffeec0f2ee13960f7e7403574742a35f662f1ad9837cd3503f95c558a2f51dd641f73fe4abf8fed1d9836cff573183c641fa4a7c4284593f164a4",
    "a3642844aa3468b7eb3cd7946e5f8f87f48a5fa4a6750cd92fda32c73b9f309aa579f9ff7e19d631b03dbf1f252ecad5f646da4793115f8c38e3b6da4137c4f9"
    "2b741f2bf2b269791da3eb91e9e7bd12ecb148de20ff45f1febcf17d76021ed29bb0be81ce6656d75b3a3ee47e0dfc6f77fef7ed4bbe13d77ef5848915c9ed30",
    "416fb84ba74b542fdfc79cbfd2f1bd230975378363e0bdfda840dd8d35785077335fffff0712216ae7",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 78584U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_gaussianFilter_info.c) */
