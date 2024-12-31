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

  clear(&vec);

  // test init size
  init_size(&vec, 5);

  assert(vec.size == 5);
  assert(vec.capacity == 10);

  set(&vec, 0, 23);
  set(&vec, 1, 29);
  set(&vec, 2, 31);
  set(&vec, 3, 37);
  set(&vec, 4, 41);

  assert(at(&vec, 0) == 23);
  assert(at(&vec, 1) == 29);
  assert(at(&vec, 2) == 31);
  assert(at(&vec, 3) == 37);
  assert(at(&vec, 4) == 41);

  clear(&vec);

  // test set size
  init(&vec);
  set_size(&vec, 5);

  set(&vec, 0, 43);
  set(&vec, 1, 47);
  set(&vec, 2, 53);
  set(&vec, 3, 59);
  set(&vec, 4, 61);

  assert(at(&vec, 0) == 43);
  assert(at(&vec, 1) == 47);
  assert(at(&vec, 2) == 53);
  assert(at(&vec, 3) == 59);
  assert(at(&vec, 4) == 61);

  clear(&vec);

  // test set capacity
  init(&vec);
  set_capacity(&vec, 5);

  assert(vec.size == 0);
  assert(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  set(&vec, 0, 67);
  set(&vec, 1, 71);

  assert(at(&vec, 0) == 67);
  assert(at(&vec, 1) == 71);

  push_back(&vec, 73);
  push_back(&vec, 79);

  assert(vec.size == 2);
  assert(vec.capacity == 5);

  assert(at(&vec, 0) == 73);
  assert(at(&vec, 1) == 79);

  clear(&vec);


  printf("=== END VECTOR INT TESTS ===\n");
}
