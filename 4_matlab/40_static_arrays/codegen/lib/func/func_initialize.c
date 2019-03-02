/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: func_initialize.c
 *
 * MATLAB Coder version            : 4.1
 * C/C++ source code generated on  : 01-Mar-2019 21:43:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "func.h"
#include "func_initialize.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void func_initialize(void)
{
  rt_InitInfAndNaN(8U);
}

/*
 * File trailer for func_initialize.c
 *
 * [EOF]
 */
