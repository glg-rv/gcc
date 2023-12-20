/* Check compilation of  ZABHA byte exchange operations. */
/* { dg-do compile } */
/* { dg-options "-march=rv64g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv64 } } } */
/* { dg-options "-march=rv32g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv32 } } } */
/* { dg-final { scan-assembler "\tamoswap.b" } } */
/* { dg-final { scan-assembler "\tamoswap.b.aq" } } */
/* { dg-final { scan-assembler "\tamoswap.b.aqrl" } } */
/* { dg-final { scan-assembler "\tamoswap.b.rl" } } */

#include "inline-atomics-7.c"
