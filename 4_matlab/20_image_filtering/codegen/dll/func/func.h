/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * func.h
 *
 * Code generation for function 'func'
 *
 */

#ifndef FUNC_H
#define FUNC_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "omp.h"
#include "func_types.h"

/* Function Declarations */
#ifdef __cplusplus

extern "C" {

#endif

  extern void func(const double x[262144], const double h[9], double y[262144]);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (func.h) */
