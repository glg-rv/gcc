/* Test __atomic CAS routines for existence on 1 byte values with each valid memory model.  */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv64g_zabha_zacas" { target { rv64 } } } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv32g_zabha_zacas" { target { rv32 } } } */
/* { dg-do compile } */
/* { dg-final { scan-assembler "\tamocas.b" } } */
/* { dg-final { scan-assembler "\tamocas.b.aq" } } */
/* { dg-final { scan-assembler "\tamocas.b.aqrl" } } */

#include "inline-atomics-5.c"
