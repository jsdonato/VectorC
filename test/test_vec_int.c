#include "test_vec_int.h"

void test_vec_int() {
  printf("=== BEGIN VECTOR INT TESTS ===\n");

  vector_int vec;

  // test init
  vi_init(&vec);
  assert(vec.size == 0);
  assert(vec.capacity == 1);
  vi_clear(&vec);

  // test push_back
  vi_init(&vec);

  vi_push_back(&vec, 2);
  vi_push_back(&vec, 3);
  vi_push_back(&vec, 5);
  vi_push_back(&vec, 7);
  vi_push_back(&vec, 11);
  vi_push_back(&vec, 13);
  vi_push_back(&vec, 17);
  vi_push_back(&vec, 19);

  assert(vi_at(&vec, 0) == 2);
  assert(vi_at(&vec, 1) == 3);
  assert(vi_at(&vec, 2) == 5);
  assert(vi_at(&vec, 3) == 7);
  assert(vi_at(&vec, 4) == 11);
  assert(vi_at(&vec, 5) == 13);
  assert(vi_at(&vec, 6) == 17);
  assert(vi_at(&vec, 7) == 19);

  assert(vec.size == 8);

  vi_clear(&vec);

  // test init size
  vi_init_size(&vec, 5);

  assert(vec.size == 5);
  assert(vec.capacity == 10);

  vi_set(&vec, 0, 23);
  vi_set(&vec, 1, 29);
  vi_set(&vec, 2, 31);
  vi_set(&vec, 3, 37);
  vi_set(&vec, 4, 41);

  assert(vi_at(&vec, 0) == 23);
  assert(vi_at(&vec, 1) == 29);
  assert(vi_at(&vec, 2) == 31);
  assert(vi_at(&vec, 3) == 37);
  assert(vi_at(&vec, 4) == 41);

  vi_clear(&vec);

  // test set size
  vi_init(&vec);
  vi_set_size(&vec, 5);

  vi_set(&vec, 0, 43);
  vi_set(&vec, 1, 47);
  vi_set(&vec, 2, 53);
  vi_set(&vec, 3, 59);
  vi_set(&vec, 4, 61);

  assert(vi_at(&vec, 0) == 43);
  assert(vi_at(&vec, 1) == 47);
  assert(vi_at(&vec, 2) == 53);
  assert(vi_at(&vec, 3) == 59);
  assert(vi_at(&vec, 4) == 61);

  vi_clear(&vec);

  // test set capacity
  vi_init(&vec);
  vi_set_capacity(&vec, 5);

  assert(vec.size == 0);
  assert(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vi_set(&vec, 0, 67);
  vi_set(&vec, 1, 71);

  assert(vi_at(&vec, 0) == 67);
  assert(vi_at(&vec, 1) == 71);

  vi_push_back(&vec, 73);
  vi_push_back(&vec, 79);

  assert(vec.size == 2);
  assert(vec.capacity == 5);

  assert(vi_at(&vec, 0) == 73);
  assert(vi_at(&vec, 1) == 79);

  vi_clear(&vec);


  printf("=== END VECTOR INT TESTS ===\n");
}
