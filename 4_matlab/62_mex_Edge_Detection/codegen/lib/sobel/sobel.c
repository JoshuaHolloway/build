/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sobel.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 14-Mar-2019 21:04:51
 */

/* Include Files */
#include "sobel.h"
#include "sobel_emxutil.h"
#include "sqrt.h"
#include "conv2.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *originalImage
 *                double threshold
 *                emxArray_uint8_T *edgeImage
 * Return Type  : void
 */
void sobel(const emxArray_real_T *originalImage, double threshold,
           emxArray_uint8_T *edgeImage)
{
  emxArray_real_T *H;
  emxArray_real_T *V;
  int i0;
  int loop_ub;
  emxInit_real_T(&H, 2);
  emxInit_real_T(&V, 2);

  /*  edgeImage = sobel(originalImage, threshold) */
  /*  Sobel edge detection. Given a normalized image (with double values) */
  /*  return an image where the edges are detected w.r.t. threshold value. */
  conv2(originalImage, H);
  b_conv2(originalImage, V);
  i0 = H->size[0] * H->size[1];
  loop_ub = H->size[0] * H->size[1];
  emxEnsureCapacity_real_T(H, loop_ub);
  loop_ub = i0 - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    H->data[i0] = H->data[i0] * H->data[i0] + V->data[i0] * V->data[i0];
  }

  emxFree_real_T(&V);
  b_sqrt(H);
  i0 = edgeImage->size[0] * edgeImage->size[1];
  edgeImage->size[0] = H->size[0];
  edgeImage->size[1] = H->size[1];
  emxEnsureCapacity_uint8_T(edgeImage, i0);
  loop_ub = H->size[0] * H->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    edgeImage->data[i0] = (unsigned char)((H->data[i0] > threshold) * 255U);
  }

  emxFree_real_T(&H);
}

/*
 * File trailer for sobel.c
 *
 * [EOF]
 */
