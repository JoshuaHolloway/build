/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_averaging_filter_info.c
 *
 * Code generation for function '_coder_averaging_filter_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "averaging_filter.h"
#include "_coder_averaging_filter_info.h"

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
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("averaging_filter"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\dev\\build\\4_matlab\\61_mex_Averaging Filter\\averaging_filter.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737119.30704861111));
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
  const char * data[22] = {
    "789ced5dcd6f234915ef2c33c38cd04024b4ec22249819d008b428fe8a13679745711cdbb1378e1d3b1f4e06d6e98fb25d767fb9bbed38969072dc0307c4690f"
    "1c72415a2181e0c448700837b82240880b1ce0c01f0067dc6e97e336ae75c7eeb4d3ed7ad24ca5eab9eb57fdfcfa57af5f97aba9a5546689a2a8cf53867cf407",
    "a37cdaaf2ff7cb3728b38cea97fae58b913a9287d4835edbd311fd4ffa252b891a686b46858722d86b0a0c50ba159116c0a01b4e12a0488bdac1850c2805a812"
    "df025c4f53863c388002d895862a3bb05b111243aa414557e97fc7aa80ad179a02a554d59be1f2c3156ac83e9f60ceff8145fbc430f659eeb721fdabf8f763ef",
    "fa38d0f2314dc873bed592406b3ccdf8d6022501b44bd11650e80a142bcfba27a101c547a38652b9d7b02298c67d8619d7238be31e2d913ca11e0fd5429b93f0"
    "acdae93318bce5ae466f539bd6cecf2adea391fa0ddea35e1b2735191edce05dcd88f71e16cf6843fa57a9dd62cf1532d183dde8962f1ff407228c4f93249e91",
    "da3e20f03e1e32bebe7370b446979ba2af6b1dc7bfffeb375f717f8e3aeb6f4efbf7fcf0da98feacfadb9b183ce46f489f2940aed8386d97773b6aa5dcced452"
    "55b131348edc049c49e3a03075a7fabfc21cbfb8d7ad2ecf36edf2b3b73178c83e48cf4a5c778e82dd495f11697e45a495eedcc556ebb3f2f9a8e0c68104e1fd",
    "724a3cd4d7de043ca49fe0176a955600e7eb59a7ffff3bfd02d9ca37b095ee2acef9c9e517dfcdff89f0fb1de1cd7add7d098387fc0fe92fdae7a90d3a51ae84"
    "fd6c362e156a89e6fa79dc3bfceef6eb18e70756fd0e17373fe9976f9b5a5f6c1ae5cb7ef96ddbe2f78798712c77357a5b999724fdee8ec4efc37100e0f528a0",
    "671be7e380df1dbe24f1bbdbf93dd258cf1e34f8ed707dab7ab09f2c688ded6d36e11d7ebfc21cbfc0d72d351cbf5f62fab36a9faf61f0907d907e247e87ea56"
    "13f25a4adc6b0a4081ecdc787dd6f93f8dc533da90de827fe8fffe6fd21f3554df5d9c8ce37ffd9fbf119e773bcf675b8d58b4bcd38a1cecaf5eb071410c264e",
    "f91dc2f3dee6f96fd8c6f35fc1e021fb20fd08cfab2ccdd3ca0a8ade678fdf47c56abe66d6e730c90978483f2dcfbf63586ae02b0ef2fbcf8ebf4cf8ddedfcce"
    "54d7724591d7b88224c49be24e88896fa59384df1785df7f84e9cfaa7dbe85c143f641fa117ea76599bf28f4a82bd114590d4a624accf1348b1ec1a3f1c9338e",
    "ef0b13c687f4e5fe284a555ae4ba813ec27f3d23fec1047ca49f96fff186341ccbc1e7b2cce76a7f21f3c11de139351f48f46e8da1e9648c0b456a6a310832a7"
    "f2c5b677e603723d8f2f9198fdcfbe3cfde3913a35f8dce35e1b5455995654e0d63cfd2616cf6843fadbc509ba4df4480159674570eefbdf7cfcfe8784cfddce",
    "e7e7c72935c1d78f12c1b252e05bb56c5aececc7089f2f269faf782eaf332ddf93bc8e59485ec7193c92d7b1a7ff2bccf18bbdbef2856df1fa673178cb5d8dde"
    "d63d43599138dbf8fbc148fd06cff83d075ba57b13865dfcbd83c533da905efffe73b7770059812d5a03bebe991c8ddb1ffd93c4edaee76f76b5259dec16c385",
    "b56435156957611e48e71ee26f72fd9ac5ec6f2fc93af929f1505ff35e5f7b86191f5927ef0e3cb24ede9efe09cf9bc5ec6f41b29eb2df3e2bdf93f59476e319"
    "b22878643da53dfd13be378bd9dfc2b6c5f556fdad7b962c50d552ff844b50949b9a6a5fdefdb6799b599fd71c63f18c36a49fd13fc69bcdd13c3cf5ef9f8a24",
    "8fe376be074aad412736c2a9220c32eb89930da80418b29e6611af676a38de27799ddbe191bcce5de119b2287824af634fff84f7c79748ccfef7de80f73fc2f4"
    "67d56e5fc7e021bb21fd08efb392a86a7b9258806285079a246e436bcfa7ef6bbec7a679009bef19673067e7014afdfb2189ffdd3e0fa4cbbbcde05698bed813",
    "3a6a5dd12a471b55bf87d65f92eb78fcf8cd7e1721ebe82de26d62f18c36a427ebe87178862c0a1e59476f4fff249e1f5f2231fb5fc2b63cce5b183c6437a41f"
    "bb8e3e5e71edfaf92d2c9ed186f4d3cefbc84073784efb8b9784ef5dcff7fe7c25d0d2d21b9252a9aa85045dd94aa45a1ecadb93ebd72c267fbbcc0cf85dc6f4",
    "67d54e4f47ead4d0e79686f450158d85259afec601f7fe2e2a8ac533da90de62fc5e866dc0c952d72d7c260b21b770d22f7e4e7e17e57e5e4f86ea17854605f2"
    "b183583ddfd8aa1cd40fe384d7178ed77178f6e561cab07b0f53756b1ee63b583ca30de9a7e171c3328efffe99f0f71de239f5de905603c4e516ab6e14cf4392",
    "94530b81d0c929e51dfe9e359f7ed7eba06ff8fb79192aaa5686e6f19f61c667abdffde3cc361e9fb47e51672bbd3e2f1eff7846bc0816cf6843fae978dcd1f5"
    "b3afc9faf7fbcbdf56e3efc2850c8570237f1c800cb79a3addcf65025ecaab90eb75d8bffc9ec9a338bd3f01c9a3d886d79345c12379147bfa77511cde018a84",
    "5e53eaacdf5d7fcfb138bcdce479bd4ef229e3d6b5e8d6713a9f72f92bc2e3eee7716d2d28e4b78f93d5d390d4696919219109681ee271f27b54b398fdedbbb6"
    "f1f7a4fdc2a00a1a4d9a772d7fbf8fc533da90feb6ef01e8fee1ebdba647e00eae4bfce3273f24eb54ee2b7f5bcd87a7e54ea0b19ee50e4f027c10e4c1f1a916",
    "daa0bcc3df5798e317f7bad5e5996d7915dcf781ec83f45d0394fae75b6225656eebcb67bd2fcb62f18c36a4bfe57c6e38049acd478de5e8fad4cd8f09afdf5f"
    "5eb79c5f0947db30bf5e6bf90f1b6bfe50ac92c9c7d6b6bcc3ebe43a1e3f7eb3df7d93ec1730251eeacba6df9791fd02ee09ff3a8d47f60bb0a77f9287318bd9",
    "df72b6f1bcd5fb46561218288223c06a9212e78100447d5b30caaefb8a79bf77ef68023ed2cfe82f63cde82cff5f777efc0312efbb9dffe9f5938d64331c0191"
    "18d301e923297a9c2d78280f4faee7f12512f33af5f4dcf2f2f3e6fdab19f1bd97ef2379fabbc423797a7bfabfc21cbfb8d7ad2ef7274f3f6f5e27f9bef1e327",
    "797b67f048dede9efe491c3fbe44625e1f5918f0ff9cf67da45b12e4a28a425f24785ad38008c54aef730b9ecfc7bfaf778cc11cf69bcbff32641e70fb3cd049"
    "ef8462877251d867b25cb458dec9b485ac87def341e681f12512f33cf0a183fb0e90fd1fc9fe8f84cfc9fe8fb7ebfff798e3addab182e91fd911e9ef86cf9fb3",
    "129fa16b92a2076da96e2837319f6dd51fdfc09cd79391cff7e49add34fee06c7b9e3be5fe90fa436c1576c0cc71feb4f3c07ddf87081988bcc7cf5b784ecd07"
    "f546612f2aa7982c4cc97b87d5d661c4dfd03c94e7f1ea7c708619b7adfef8ac3ae0ff4b4c7f56edf8550c1eb223d2f752d7a2562a4b0a2f4972496a01a5cc4b",
    "e725b60ad8fafcf23db3de27e627e021fd2d9f0b19d3c2a758ccf979e1fab7ff7a48ee13dc3e2fa81fc4dbf1ed4e27976e075733417f6c3f1af07b681de75f31"
    "c75bb5637ba44e0d7d6e69486ffff5fcfcd33f50aa025e068ab3fe99746cff84d17dcce6745f02450eb453a246f64bea0bd9dfcc193cb2bf993dfd13feb7769e",
    "d6fc33651bff4fcacf744f5ca0dbf3db0fed6a46bcbbd93fa7bf3eac671ba7f7cfb97efdd61312efbb9def95865fae4175352aace5d6c51c530c7d70a47a280f"
    "44f8deda795af2cf4b67f91e8a84ef717c0f45c7f9fe3784efddcff715fa643d1b3ade6bac33512d16a6b3ab60753fe97ebeff1ff85631e8",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 51616U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_averaging_filter_info.c) */
