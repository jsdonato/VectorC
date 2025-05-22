#include "test_vec_int.h"
#include "test_vec_double.h"
#include "test_vec_float.h"
#include "test_vec_char.h"

int main() {
  const int num_tests = 4;
  int tests[num_tests];

  tests[0] = test_vec_int();
  tests[1] = test_vec_double();
  tests[2] = test_vec_float();
  tests[3] = test_vec_char();

  for (int i = 0; i < num_tests; ++i) {
    if (tests[i] == EXIT_FAILURE) {
      return 1;
    }
  }

  return 0;
}
