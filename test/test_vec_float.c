#include "tests.h"

int test_vec_float() {
  printf("=== BEGIN VECTOR FLOAT TESTS ===\n");

  vector_float vec;

  // test init
  vf_init(&vec);
  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 1);
  vf_clear(&vec);

  // test push_back
  vf_init(&vec);

  vf_push_back(&vec, 2.0);
  vf_push_back(&vec, 3.0);
  vf_push_back(&vec, 5.0);
  vf_push_back(&vec, 7.0);
  vf_push_back(&vec, 11.0);
  vf_push_back(&vec, 13.0);
  vf_push_back(&vec, 17.0);
  vf_push_back(&vec, 19.0);

  ASSERT_TRUE(vf_at(&vec, 0) == 2.0);
  ASSERT_TRUE(vf_at(&vec, 1) == 3.0);
  ASSERT_TRUE(vf_at(&vec, 2) == 5.0);
  ASSERT_TRUE(vf_at(&vec, 3) == 7.0);
  ASSERT_TRUE(vf_at(&vec, 4) == 11.0);
  ASSERT_TRUE(vf_at(&vec, 5) == 13.0);
  ASSERT_TRUE(vf_at(&vec, 6) == 17.0);
  ASSERT_TRUE(vf_at(&vec, 7) == 19.0);

  ASSERT_TRUE(vec.size == 8);

  vf_clear(&vec);

  // test init size
  vf_init_size(&vec, 5);

  ASSERT_TRUE(vec.size == 5);
  ASSERT_TRUE(vec.capacity == 10);

  vf_set(&vec, 0, 23.0);
  vf_set(&vec, 1, 29.0);
  vf_set(&vec, 2, 31.0);
  vf_set(&vec, 3, 37.0);
  vf_set(&vec, 4, 41.0);

  ASSERT_TRUE(vf_at(&vec, 0) == 23.0);
  ASSERT_TRUE(vf_at(&vec, 1) == 29.0);
  ASSERT_TRUE(vf_at(&vec, 2) == 31.0);
  ASSERT_TRUE(vf_at(&vec, 3) == 37.0);
  ASSERT_TRUE(vf_at(&vec, 4) == 41.0);

  vf_clear(&vec);

  // test set size
  vf_init(&vec);
  vf_set_size(&vec, 5);

  vf_set(&vec, 0, 43.0);
  vf_set(&vec, 1, 47.0);
  vf_set(&vec, 2, 53.0);
  vf_set(&vec, 3, 59.0);
  vf_set(&vec, 4, 61.0);

  ASSERT_TRUE(vf_at(&vec, 0) == 43.0);
  ASSERT_TRUE(vf_at(&vec, 1) == 47.0);
  ASSERT_TRUE(vf_at(&vec, 2) == 53.0);
  ASSERT_TRUE(vf_at(&vec, 3) == 59.0);
  ASSERT_TRUE(vf_at(&vec, 4) == 61.0);

  vf_clear(&vec);

  // test set capacity
  vf_init(&vec);
  vf_set_capacity(&vec, 5);

  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vf_set(&vec, 0, 67.0);
  vf_set(&vec, 1, 71.0);

  ASSERT_TRUE(vf_at(&vec, 0) == 67.0);
  ASSERT_TRUE(vf_at(&vec, 1) == 71.0);

  vf_push_back(&vec, 73.0);
  vf_push_back(&vec, 79.0);

  ASSERT_TRUE(vec.size == 2);
  ASSERT_TRUE(vec.capacity == 5);

  ASSERT_TRUE(vf_at(&vec, 0) == 73.0);
  ASSERT_TRUE(vf_at(&vec, 1) == 79.0);

  vf_clear(&vec);

  printf("=== END VECTOR FLOAT TESTS ===\n");
  return EXIT_SUCCESS;
}
