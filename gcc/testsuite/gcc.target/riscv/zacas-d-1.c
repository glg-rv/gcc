/* { dg-do compile { target { rv64 } } }*/
/* Verify that zacas atomics does generate 64-bit amocas instruction  */
/* { dg-options "-march=rv64g_zacas" } */
/* { dg-final { scan-assembler-not "\tlr.d" } } */
/* { dg-final { scan-assembler-not "\tsc.d" } } */
/* { dg-final { scan-assembler "\tamocas.d" } } */


#include <stdint.h>

uint64_t foo;

int
main ()
{
  __sync_bool_compare_and_swap (&foo, 1, 2);
}
