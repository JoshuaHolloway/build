/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func_initialize.c
 *
 * Code generation for function 'func_initialize'
 *
 */

/* Include files */
#include "func.h"
#include "func_initialize.h"
#include "func_data.h"

/* Function Definitions */
void func_initialize(void)
{
  omp_init_nest_lock(&emlrtNestLockGlobal);
}

/* End of code generation (func_initialize.c) */
