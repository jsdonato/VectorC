#include "test_vec_bool.h"

void test_vec_bool() {
  printf("=== BEGIN VECTOR BOOL TESTS ===\n");

  vector_bool vec;

  // test init
  vb_init(&vec);
  assert(vec.size == 0);
  assert(vec.capacity == 1);
  vb_clear(&vec);

  // test push_back
  vb_init(&vec);

  vb_push_back(&vec, true);
  vb_push_back(&vec, true);
  vb_push_back(&vec, true);
  vb_push_back(&vec, true);
  vb_push_back(&vec, false);
  vb_push_back(&vec, false);
  vb_push_back(&vec, false);
  vb_push_back(&vec, false);

  assert(vb_at(&vec, 0) == true);
  assert(vb_at(&vec, 1) == true);
  assert(vb_at(&vec, 2) == true);
  assert(vb_at(&vec, 3) == true);
  assert(vb_at(&vec, 4) == false);
  assert(vb_at(&vec, 5) == false);
  assert(vb_at(&vec, 6) == false);
  assert(vb_at(&vec, 7) == false);

  assert(vec.size == 8);

  vb_clear(&vec);

  // test init size
  vb_init_size(&vec, 5);

  assert(vec.size == 5);
  assert(vec.capacity == 10);

  vb_set(&vec, 0, true);
  vb_set(&vec, 1, false);
  vb_set(&vec, 2, true);
  vb_set(&vec, 3, false);
  vb_set(&vec, 4, true);

  assert(vb_at(&vec, 0) == true);
  assert(vb_at(&vec, 1) == false);
  assert(vb_at(&vec, 2) == true);
  assert(vb_at(&vec, 3) == false);
  assert(vb_at(&vec, 4) == true);

  vb_clear(&vec);

  // test set size
  vb_init(&vec);
  vb_set_size(&vec, 5);

  vb_set(&vec, 0, false);
  vb_set(&vec, 1, false);
  vb_set(&vec, 2, true);
  vb_set(&vec, 3, true);
  vb_set(&vec, 4, true);

  assert(vb_at(&vec, 0) == false);
  assert(vb_at(&vec, 1) == false);
  assert(vb_at(&vec, 2) == true);
  assert(vb_at(&vec, 3) == true);
  assert(vb_at(&vec, 4) == true);

  vb_clear(&vec);

  // test set capacity
  vb_init(&vec);
  vb_set_capacity(&vec, 5);

  assert(vec.size == 0);
  assert(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vb_set(&vec, 0, false);
  vb_set(&vec, 1, true);

  assert(vb_at(&vec, 0) == false);
  assert(vb_at(&vec, 1) == true);

  vb_push_back(&vec, false);
  vb_push_back(&vec, true);

  assert(vec.size == 2);
  assert(vec.capacity == 5);

  assert(vb_at(&vec, 0) == false);
  assert(vb_at(&vec, 1) == true);

  vb_clear(&vec);

  printf("=== END VECTOR BOOL TESTS ===\n");
}
