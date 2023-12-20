/* Test __atomic routines for execution on 1 byte values with each valid memory model.  */
/* { dg-do run } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv64g_zabha" { target { rv64 } } } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv32g_zabha" { target { rv32 } } } */

#include "inline-atomics-3.c"

