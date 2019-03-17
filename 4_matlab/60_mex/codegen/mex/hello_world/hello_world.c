/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hello_world.c
 *
 * Code generation for function 'hello_world'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "hello_world.h"

/* Function Definitions */
void hello_world(char_T y[12])
{
  int32_T i0;
  static const char_T cv0[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r',
    'l', 'd', '!' };

  for (i0 = 0; i0 < 12; i0++) {
    y[i0] = cv0[i0];
  }
}

/* End of code generation (hello_world.c) */
