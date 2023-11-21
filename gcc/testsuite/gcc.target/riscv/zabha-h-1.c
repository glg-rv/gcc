/* { dg-do compile } */
/* { dg-options "-mno-inline-atomics -march=rv64g_zabha" { target { rv64 } } } */
/* { dg-options "-mno-inline-atomics -march=rv32g_zabha" { target { rv32 } } } */
/* { dg-final { scan-assembler "\tcall\t__sync_fetch_and_add_2" } } */
/* { dg-final { scan-assembler "\tcall\t__sync_bool_compare_and_swap_2" } } */
/* { dg-final { scan-assembler-not "\tamoadd.h.aqrl" } } */
/* { dg-final { scan-assembler-not "\tamocas.w" } } */


short foo;
short bar;
short baz;

int
main ()
{
  __sync_fetch_and_add(&foo, 1);
  __sync_bool_compare_and_swap (&baz, 1, 2);
}
