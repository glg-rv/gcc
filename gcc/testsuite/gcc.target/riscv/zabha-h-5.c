/* Check compilation of  ZABHA half-word exchange operations. */
/* { dg-do compile } */
/* { dg-options "-march=rv64g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv64 } } } */
/* { dg-options "-march=rv32g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv32 } } } */
/* { dg-final { scan-assembler "\tamoswap.h" } } */
/* { dg-final { scan-assembler "\tamoswap.h.aq" } } */
/* { dg-final { scan-assembler "\tamoswap.h.aqrl" } } */
/* { dg-final { scan-assembler "\tamoswap.h.rl" } } */

#include "inline-atomics-8.c"
