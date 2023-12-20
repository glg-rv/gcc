/* Test __atomic routines for existence on 1 byte values with each valid memory model.  */
/* { dg-do compile } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv64g_zabha" { target { rv64 } } } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv32g_zabha" { target { rv32 } } } */
/* { dg-final { scan-assembler "\tamoadd.b" } } */
/* { dg-final { scan-assembler "\tamoadd.b.aq" } } */
/* { dg-final { scan-assembler "\tamoadd.b.rl" } } */
/* { dg-final { scan-assembler "\tamoadd.b.aqrl" } } */
/* { dg-final { scan-assembler "\tamoand.b" } } */
/* { dg-final { scan-assembler "\tamoand.b.aq" } } */
/* { dg-final { scan-assembler "\tamoand.b.rl" } } */
/* { dg-final { scan-assembler "\tamoand.b.aqrl" } } */
/* { dg-final { scan-assembler "\tamoxor.b" } } */
/* { dg-final { scan-assembler "\tamoxor.b.aq" } } */
/* { dg-final { scan-assembler "\tamoxor.b.rl" } } */
/* { dg-final { scan-assembler "\tamoxor.b.aqrl" } } */
/* { dg-final { scan-assembler "\tamoor.b" } } */
/* { dg-final { scan-assembler "\tamoor.b.aq" } } */
/* { dg-final { scan-assembler "\tamoor.b.rl" } } */
/* { dg-final { scan-assembler "\tamoor.b.aqrl" } } */

#include "inline-atomics-3.c"

