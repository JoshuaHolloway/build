/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imref2d.h
 *
 * Code generation for function 'imref2d'
 *
 */

#ifndef IMREF2D_H
#define IMREF2D_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "func_types.h"

/* Function Declarations */
extern double imref2d_get_PixelExtentInWorldX(const double obj_XWorldLimits[2],
  const double obj_ImageSizeAlias[2]);
extern double imref2d_get_PixelExtentInWorldY(const double obj_YWorldLimits[2],
  const double obj_ImageSizeAlias[2]);

#endif

/* End of code generation (imref2d.h) */
