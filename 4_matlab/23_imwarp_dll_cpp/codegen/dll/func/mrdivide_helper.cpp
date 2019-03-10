/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.cpp
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include <cmath>
#include <string.h>
#include "func.h"
#include "mrdivide_helper.h"

/* Function Definitions */
void mrdivide_helper(const double A[9], const double B[9], double y[9])
{
  double b_A[9];
  int r2;
  int r3;
  double y_tmp;
  double b_y_tmp;
  double c_y_tmp;
  double d_y_tmp;
  int e_y_tmp;
  int f_y_tmp;
  memcpy(&b_A[0], &B[0], 9U * sizeof(double));
  r2 = 1;
  r3 = 2;
  b_A[1] = B[1] / B[0];
  b_A[2] = B[2] / B[0];
  b_A[4] = B[4] - b_A[1] * B[3];
  b_A[5] = B[5] - b_A[2] * B[3];
  b_A[7] = 0.0 - b_A[1] * B[6];
  b_A[8] = B[8] - b_A[2] * B[6];
  if (std::abs(b_A[5]) > std::abs(b_A[4])) {
    r2 = 2;
    r3 = 1;
  }

  b_A[3 + r3] /= b_A[3 + r2];
  b_A[6 + r3] -= b_A[3 + r3] * b_A[6 + r2];
  y[0] = A[0] / b_A[0];
  y[3 * r2] = A[3] - y[0] * b_A[3];
  y[3 * r3] = A[6] - y[0] * b_A[6];
  y_tmp = b_A[3 + r2];
  y[3 * r2] /= y_tmp;
  b_y_tmp = b_A[6 + r2];
  y[3 * r3] -= y[3 * r2] * b_y_tmp;
  c_y_tmp = b_A[6 + r3];
  y[3 * r3] /= c_y_tmp;
  d_y_tmp = b_A[3 + r3];
  y[3 * r2] -= y[3 * r3] * d_y_tmp;
  y[0] -= y[3 * r3] * b_A[r3];
  y[0] -= y[3 * r2] * b_A[r2];
  y[1] = A[1] / b_A[0];
  e_y_tmp = 1 + 3 * r2;
  y[e_y_tmp] = A[4] - y[1] * b_A[3];
  f_y_tmp = 1 + 3 * r3;
  y[f_y_tmp] = A[7] - y[1] * b_A[6];
  y[e_y_tmp] /= y_tmp;
  y[f_y_tmp] -= y[e_y_tmp] * b_y_tmp;
  y[f_y_tmp] /= c_y_tmp;
  y[e_y_tmp] -= y[f_y_tmp] * d_y_tmp;
  y[1] -= y[f_y_tmp] * b_A[r3];
  y[1] -= y[e_y_tmp] * b_A[r2];
  y[2] = A[2] / b_A[0];
  e_y_tmp = 2 + 3 * r2;
  y[e_y_tmp] = A[5] - y[2] * b_A[3];
  f_y_tmp = 2 + 3 * r3;
  y[f_y_tmp] = A[8] - y[2] * b_A[6];
  y[e_y_tmp] /= y_tmp;
  y[f_y_tmp] -= y[e_y_tmp] * b_y_tmp;
  y[f_y_tmp] /= c_y_tmp;
  y[e_y_tmp] -= y[f_y_tmp] * d_y_tmp;
  y[2] -= y[f_y_tmp] * b_A[r3];
  y[2] -= y[e_y_tmp] * b_A[r2];
}

/* End of code generation (mrdivide_helper.cpp) */
