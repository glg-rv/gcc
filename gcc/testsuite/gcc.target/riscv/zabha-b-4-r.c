/* Test __atomic CAS routines for execution on 1 byte values with each valid memory model.  */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv64g_zabha_zacas" { target { rv64 } } } */
/* { dg-options "-minline-atomics -Wno-address-of-packed-member -march=rv32g_zabha_zacas" { target { rv32 } } } */
/* { dg-do run } */

#include "inline-atomics-5.c"
