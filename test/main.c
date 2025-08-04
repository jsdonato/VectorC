#include "test_vec_int.h"
#include "test_vec_double.h"
#include "test_vec_float.h"
#include "test_vec_char.h"

#define NUM_TESTS 4

int main() {
  int tests[NUM_TESTS];

  tests[0] = test_vec_int();
  tests[1] = test_vec_double();
  tests[2] = test_vec_float();
  tests[3] = test_vec_char();

  for (int i = 0; i < NUM_TESTS; ++i) {
    if (tests[i] == EXIT_FAILURE) {
      return 1;
    }
  }

  return 0;
}
