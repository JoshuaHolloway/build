/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imref2d.cpp
 *
 * Code generation for function 'imref2d'
 *
 */

/* Include files */
#include "func.h"
#include "imref2d.h"

/* Function Definitions */
double imref2d_get_PixelExtentInWorldX(const double obj_XWorldLimits[2], const
  double obj_ImageSizeAlias[2])
{
  return (obj_XWorldLimits[1] - obj_XWorldLimits[0]) / obj_ImageSizeAlias[1];
}

double imref2d_get_PixelExtentInWorldY(const double obj_YWorldLimits[2], const
  double obj_ImageSizeAlias[2])
{
  return (obj_YWorldLimits[1] - obj_YWorldLimits[0]) / obj_ImageSizeAlias[0];
}

/* End of code generation (imref2d.cpp) */
