/* { dg-do compile } */
/* Verify that non-zacas atomics generate LR/SC pair on 32-bit CAS. */
/* { dg-options "-march=rv64g" { target { rv64 } } } */
/* { dg-options "-march=rv32g" { target { rv32 } } } */
/* { dg-final { scan-assembler "\tlr.w" } } */
/* { dg-final { scan-assembler "\tsc.w" } } */
/* { dg-final { scan-assembler-not "\tamocas.w" } } */

#include "zacas-w-1.c"



