#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <stdlib.h>
#include "vector_char.h"
#include "vector_double.h"
#include "vector_float.h"
#include "vector_int.h"

#define ASSERT_TRUE(b) { \
  if (!(b)) { \
    fprintf(stderr, "FAIL: in file %s on line %d\n", __FILE__, __LINE__); \
    return EXIT_FAILURE; \
  } \
} \

int test_vec_char();
int test_vec_double();
int test_vec_float();
int test_vec_int();

#endif
