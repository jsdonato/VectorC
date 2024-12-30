#include "test_vec_int.h"

void test_vec_int() {
  printf("=== BEGIN VECTOR INT TESTS ===\n");

  vector_int vec;

  // test init
  init(&vec);
  assert(vec.size == 0);
  assert(vec.capacity == 1);
  clear(&vec);

  printf("=== END VECTOR INT TESTS ===\n");
}
