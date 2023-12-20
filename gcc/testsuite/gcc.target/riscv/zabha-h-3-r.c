/* Test __atomic routines for execution on 2 byte values with each valid memory model.  */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv64g_zabha" { target { rv64 } } } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv32g_zabha" { target { rv32 } } } */
/* { dg-run } */

#include "inline-atomics-4.c"
