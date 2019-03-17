/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func_terminate.c
 *
 * Code generation for function 'func_terminate'
 *
 */

/* Include files */
#include "func.h"
#include "func_terminate.h"
#include "func_data.h"

/* Function Definitions */
void func_terminate(void)
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
}

/* End of code generation (func_terminate.c) */
