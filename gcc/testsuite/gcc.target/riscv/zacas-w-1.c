/* { dg-do compile } */
/* Verify that zacas atomics do generate 32-bit amocas instruction  */
/* { dg-options "-march=rv64g_zacas" { target { rv64 } } } */
/* { dg-options "-march=rv32g_zacas" { target { rv32 } } } */
/* { dg-final { scan-assembler-not "\tlr.w" } } */
/* { dg-final { scan-assembler-not "\tsc.w" } } */
/* { dg-final { scan-assembler "\tamocas.w" } } */

#include <stdint.h>

uint32_t foo;

int
main ()
{
  __sync_bool_compare_and_swap (&foo, 1, 2);
}
