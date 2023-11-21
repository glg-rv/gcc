/* { dg-do compile } */
/* Verify that subword atomics do not generate calls.  */
/* { dg-options "-minline-atomics -march=rv64g_zabha" { target { rv64 } } } */
/* { dg-options "-minline-atomics -march=rv32g_zabha" { target { rv32 } } } */
/* { dg-final { scan-assembler-not "\tcall\t__sync_fetch_and_add_1" } } */
/* { dg-final { scan-assembler-not "\tcall\t__sync_bool_compare_and_swap_1" } } */
/* { dg-final { scan-assembler "\tamoadd.b.aqrl" } } */
/* { dg-final { scan-assembler "\tamocas.b" } } */

#include "zabha-b-1.c"
