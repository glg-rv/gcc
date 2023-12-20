/* Test __atomic CAS routines for existence on 2 byte values with each valid memory model.  */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv64g_zabha_zacas" { target { rv64 } } } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv32g_zabha_zacas" { target { rv32 } } } */
/* { dg-compile } */
/* { dg-final { scan-assembler "\tamocas.h" } } */
/* { dg-final { scan-assembler "\tamocas.h.aq" } } */
/* { dg-final { scan-assembler "\tamocas.h.aqrl" } } */

#include "inline-atomics-6.c"
