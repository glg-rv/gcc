/* { dg-do compile { target { rv64 } } } */
/* Verify that non-zacas atomics generate LR/SC pair on 64-bit cas. */
/* { dg-options "-march=rv64g" } */
/* { dg-final { scan-assembler "\tlr.d" } } */
/* { dg-final { scan-assembler "\tsc.d" } } */
/* { dg-final { scan-assembler-not "\tamocas.d" } } */

#include "zacas-d-1.c"
