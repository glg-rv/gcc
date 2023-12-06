/* { dg-do compile } */
/* Verify that subword atomics do not generate calls.  */
/* { dg-options "-minline-atomics -march=rv64g_zabha_zacas" { target { rv64 } } } */
/* { dg-options "-minline-atomics -march=rv32g_zabha_zacas" { target { rv32 } } } */
/* { dg-final { scan-assembler-not "\tcall\t__sync_fetch_and_add_2" } } */
/* { dg-final { scan-assembler-not "\tcall\t__sync_bool_compare_and_swap_2" } } */
/* { dg-final { scan-assembler "\tamoadd.h.aqrl" } } */
/* { dg-final { scan-assembler "\tamocas.h" } } */

#include "zabha-h-1.c"
