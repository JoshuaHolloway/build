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
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "func_types.h"

/* Function Declarations */
extern real_T imref2d_get_PixelExtentInWorldX(const real_T obj_XWorldLimits[2],
  const real_T obj_ImageSizeAlias[2]);
extern real_T imref2d_get_PixelExtentInWorldY(const real_T obj_YWorldLimits[2],
  const real_T obj_ImageSizeAlias[2]);

#endif

/* End of code generation (imref2d.h) */
