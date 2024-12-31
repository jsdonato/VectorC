#include "test_vec_int.h"

void test_vec_int() {
  printf("=== BEGIN VECTOR INT TESTS ===\n");

  vector_int vec;

  // test init
  init(&vec);
  assert(vec.size == 0);
  assert(vec.capacity == 1);
  clear(&vec);

  // test push_back
  init(&vec);
  push_back(&vec, 2);
  push_back(&vec, 3);
  push_back(&vec, 5);
  push_back(&vec, 7);
  push_back(&vec, 11);
  push_back(&vec, 13);
  push_back(&vec, 17);
  push_back(&vec, 19);

  assert(at(&vec, 0) == 2);
  assert(at(&vec, 1) == 3);
  assert(at(&vec, 2) == 5);
  assert(at(&vec, 3) == 7);
  assert(at(&vec, 4) == 11);
  assert(at(&vec, 5) == 13);
  assert(at(&vec, 6) == 17);
  assert(at(&vec, 7) == 19);

  assert(vec.size == 8);

  printf("=== END VECTOR INT TESTS ===\n");
}
