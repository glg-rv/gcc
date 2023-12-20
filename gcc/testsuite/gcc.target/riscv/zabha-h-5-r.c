/* Check execution of  ZABHA half-word exchange operations. */
/* { dg-do run } */
/* { dg-options "-march=rv64g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv64 } } } */
/* { dg-options "-march=rv32g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv32 } } } */

#include "inline-atomics-8.c"
