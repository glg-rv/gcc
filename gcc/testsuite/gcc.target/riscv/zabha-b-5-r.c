/* Check execution of  ZABHA byte exchange operations. */
/* { dg-options "-march=rv64g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv64 } } } */
/* { dg-options "-march=rv32g_zabha -minline-atomics -Wno-address-of-packed-member" { target { rv32 } } } */
/* { dg-do run } */

#include "inline-atomics-7.c"
