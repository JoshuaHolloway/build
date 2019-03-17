/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imwarp.cpp
 *
 * Code generation for function 'imwarp'
 *
 */

/* Include files */
#include <cmath>
#include <string.h>
#include "func.h"
#include "imwarp.h"
#include "func_emxutil.h"
#include "mrdivide_helper.h"
#include "imref2d.h"
#include "libmwippgeotrans.h"

/* Function Definitions */
void imwarp(const double varargin_1[262144], const double varargin_2_T[9],
            emxArray_real_T *outputImage)
{
  double absx21;
  double absx31;
  int p1;
  int numCols;
  double absx11;
  static const double b_varargin_1[9] = { 0.75, 128.75, 256.75, 256.75, 384.75,
    512.75, 512.75, 640.75, 768.75 };

  int numRows;
  double xNudge;
  double yNudge;
  static const double c_varargin_1[9] = { 0.5, 256.5, 512.5, 0.5, 256.5, 512.5,
    0.5, 256.5, 512.5 };

  double outputRef_ImageSizeAlias[2];
  double b_xNudge[2];
  double b_yNudge[2];
  double t[9];
  int p2;
  double a[9];
  double tinv[9];
  int p3;
  static const signed char b_a[9] = { 1, 0, 1, 0, 1, 1, 0, 0, 1 };

  static const signed char b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static const signed char b_b[9] = { 1, 0, -1, 0, 1, -1, 0, 0, 1 };

  int itmp;
  absx21 = 0.75;
  absx31 = 0.5;
  for (p1 = 0; p1 < 8; p1++) {
    absx11 = b_varargin_1[p1 + 1];
    if (absx21 < absx11) {
      absx21 = absx11;
    }

    absx11 = c_varargin_1[p1 + 1];
    if (absx31 < absx11) {
      absx31 = absx11;
    }
  }

  numCols = (int)std::ceil(absx21 - 0.75);
  numRows = (int)std::ceil(absx31 - 0.5);
  xNudge = ((double)numCols - (absx21 - 0.75)) / 2.0;
  yNudge = ((double)numRows - (absx31 - 0.5)) / 2.0;
  outputRef_ImageSizeAlias[0] = numRows;
  outputRef_ImageSizeAlias[1] = numCols;
  b_xNudge[0] = 0.75 + -xNudge;
  b_yNudge[0] = 0.5 + -yNudge;
  b_xNudge[1] = absx21 + xNudge;
  b_yNudge[1] = absx31 + yNudge;
  absx11 = imref2d_get_PixelExtentInWorldX(b_xNudge, outputRef_ImageSizeAlias);
  t[0] = absx11;
  t[3] = 0.0;
  t[6] = 0.0;
  t[1] = 0.0;
  absx21 = imref2d_get_PixelExtentInWorldY(b_yNudge, outputRef_ImageSizeAlias);
  t[4] = absx21;
  t[7] = 0.0;
  t[2] = (0.75 + -xNudge) - absx11 * 0.5;
  t[5] = (0.5 + -yNudge) - absx21 * 0.5;
  t[8] = 1.0;
  for (p2 = 0; p2 < 3; p2++) {
    for (p3 = 0; p3 < 3; p3++) {
      p1 = p2 + 3 * p3;
      a[p1] = 0.0;
      a[p1] = ((double)b_a[p2] * t[3 * p3] + (double)b_a[p2 + 3] * t[1 + 3 * p3])
        + (double)b_a[p2 + 6] * t[2 + 3 * p3];
    }
  }

  mrdivide_helper(a, varargin_2_T, tinv);
  for (p2 = 0; p2 < 3; p2++) {
    for (p3 = 0; p3 < 3; p3++) {
      p1 = p2 + 3 * p3;
      t[p1] = 0.0;
      t[p1] = (tinv[p2] * (double)b[3 * p3] + tinv[p2 + 3] * (double)b[1 + 3 *
               p3]) + tinv[p2 + 6] * (double)b[2 + 3 * p3];
    }
  }

  for (p2 = 0; p2 < 3; p2++) {
    for (p3 = 0; p3 < 3; p3++) {
      p1 = p2 + 3 * p3;
      tinv[p1] = 0.0;
      tinv[p1] = (t[p2] * (double)b_b[3 * p3] + t[p2 + 3] * (double)b_b[1 + 3 *
                  p3]) + t[p2 + 6] * (double)b_b[2 + 3 * p3];
    }
  }

  for (p2 = 0; p2 < 2; p2++) {
    t[3 * p2] = tinv[3 * p2];
    p1 = 1 + 3 * p2;
    t[p1] = tinv[p1];
    p1 = 2 + 3 * p2;
    t[p1] = tinv[p1];
  }

  t[6] = 0.0;
  t[7] = 0.0;
  t[8] = 1.0;
  memcpy(&a[0], &t[0], 9U * sizeof(double));
  p1 = 0;
  p2 = 3;
  p3 = 6;
  absx11 = std::abs(t[0]);
  absx21 = std::abs(t[1]);
  absx31 = std::abs(t[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 3;
    p2 = 0;
    a[0] = t[1];
    a[1] = t[0];
    a[3] = t[4];
    a[4] = t[3];
    a[6] = 0.0;
  } else {
    if (absx31 > absx11) {
      p1 = 6;
      p3 = 0;
      a[0] = t[2];
      a[2] = t[0];
      a[3] = t[5];
      a[5] = t[3];
      a[6] = 1.0;
      a[8] = 0.0;
    }
  }

  a[1] /= a[0];
  a[2] /= a[0];
  a[4] -= a[1] * a[3];
  a[5] -= a[2] * a[3];
  a[7] = 0.0 - a[1] * a[6];
  a[8] -= a[2] * a[6];
  if (std::abs(a[5]) > std::abs(a[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    absx11 = a[1];
    a[1] = a[2];
    a[2] = absx11;
    absx11 = a[4];
    a[4] = a[5];
    a[5] = absx11;
    absx11 = a[7];
    a[7] = a[8];
    a[8] = absx11;
  }

  a[5] /= a[4];
  a[8] -= a[5] * a[7];
  absx11 = (a[5] * a[1] - a[2]) / a[8];
  absx21 = -(a[1] + a[7] * absx11) / a[4];
  tinv[p1] = ((1.0 - a[3] * absx21) - a[6] * absx11) / a[0];
  tinv[p1 + 1] = absx21;
  tinv[p1 + 2] = absx11;
  absx11 = -a[5] / a[8];
  absx21 = (1.0 - a[7] * absx11) / a[4];
  tinv[p2] = -(a[3] * absx21 + a[6] * absx11) / a[0];
  tinv[p2 + 1] = absx21;
  tinv[p2 + 2] = absx11;
  absx11 = 1.0 / a[8];
  absx21 = -a[7] * absx11 / a[4];
  tinv[p3] = -(a[3] * absx21 + a[6] * absx11) / a[0];
  tinv[p3 + 1] = absx21;
  tinv[p3 + 2] = absx11;
  tinv[6] = 0.0;
  tinv[7] = 0.0;
  tinv[8] = 1.0;
  p2 = outputImage->size[0] * outputImage->size[1];
  outputImage->size[0] = numRows;
  outputImage->size[1] = numCols;
  emxEnsureCapacity_real_T(outputImage, p2);
  absx11 = 0.0;
  b_xNudge[0] = 512.0;
  b_xNudge[1] = 512.0;
  ippgeotransCaller_real64(&outputImage->data[0], outputRef_ImageSizeAlias, 2.0,
    varargin_1, b_xNudge, 262144.0, *(double (*)[6])&tinv[0], 2, &absx11, true);
}

/* End of code generation (imwarp.cpp) */
