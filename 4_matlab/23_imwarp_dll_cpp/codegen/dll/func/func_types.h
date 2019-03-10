/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func_types.h
 *
 * Code generation for function 'func'
 *
 */

#ifndef FUNC_TYPES_H
#define FUNC_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif

/* End of code generation (func_types.h) */
