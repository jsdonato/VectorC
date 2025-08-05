#include "tests.h"

int test_vec_double() {
  printf("=== BEGIN VECTOR DOUBLE TESTS ===\n");

  vector_double vec;

  // test init
  vd_init(&vec);
  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 1);
  vd_clear(&vec);

  // test push_back
  vd_init(&vec);

  vd_push_back(&vec, 2.0);
  vd_push_back(&vec, 3.0);
  vd_push_back(&vec, 5.0);
  vd_push_back(&vec, 7.0);
  vd_push_back(&vec, 11.0);
  vd_push_back(&vec, 13.0);
  vd_push_back(&vec, 17.0);
  vd_push_back(&vec, 19.0);

  ASSERT_TRUE(vd_at(&vec, 0) == 2.0);
  ASSERT_TRUE(vd_at(&vec, 1) == 3.0);
  ASSERT_TRUE(vd_at(&vec, 2) == 5.0);
  ASSERT_TRUE(vd_at(&vec, 3) == 7.0);
  ASSERT_TRUE(vd_at(&vec, 4) == 11.0);
  ASSERT_TRUE(vd_at(&vec, 5) == 13.0);
  ASSERT_TRUE(vd_at(&vec, 6) == 17.0);
  ASSERT_TRUE(vd_at(&vec, 7) == 19.0);

  ASSERT_TRUE(vec.size == 8);

  vd_clear(&vec);

  // test init size
  vd_init_size(&vec, 5);

  ASSERT_TRUE(vec.size == 5);
  ASSERT_TRUE(vec.capacity == 10);

  vd_set(&vec, 0, 23.0);
  vd_set(&vec, 1, 29.0);
  vd_set(&vec, 2, 31.0);
  vd_set(&vec, 3, 37.0);
  vd_set(&vec, 4, 41.0);

  ASSERT_TRUE(vd_at(&vec, 0) == 23.0);
  ASSERT_TRUE(vd_at(&vec, 1) == 29.0);
  ASSERT_TRUE(vd_at(&vec, 2) == 31.0);
  ASSERT_TRUE(vd_at(&vec, 3) == 37.0);
  ASSERT_TRUE(vd_at(&vec, 4) == 41.0);

  vd_clear(&vec);

  // test set size
  vd_init(&vec);
  vd_set_size(&vec, 5);

  vd_set(&vec, 0, 43.0);
  vd_set(&vec, 1, 47.0);
  vd_set(&vec, 2, 53.0);
  vd_set(&vec, 3, 59.0);
  vd_set(&vec, 4, 61.0);

  ASSERT_TRUE(vd_at(&vec, 0) == 43.0);
  ASSERT_TRUE(vd_at(&vec, 1) == 47.0);
  ASSERT_TRUE(vd_at(&vec, 2) == 53.0);
  ASSERT_TRUE(vd_at(&vec, 3) == 59.0);
  ASSERT_TRUE(vd_at(&vec, 4) == 61.0);

  vd_clear(&vec);

  // test set capacity
  vd_init(&vec);
  vd_set_capacity(&vec, 5);

  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vd_set(&vec, 0, 67.0);
  vd_set(&vec, 1, 71.0);

  ASSERT_TRUE(vd_at(&vec, 0) == 67.0);
  ASSERT_TRUE(vd_at(&vec, 1) == 71.0);

  vd_push_back(&vec, 73.0);
  vd_push_back(&vec, 79.0);

  ASSERT_TRUE(vec.size == 2);
  ASSERT_TRUE(vec.capacity == 5);

  ASSERT_TRUE(vd_at(&vec, 0) == 73.0);
  ASSERT_TRUE(vd_at(&vec, 1) == 79.0);

  vd_clear(&vec);

  printf("=== END VECTOR DOUBLE TESTS ===\n");
  return EXIT_SUCCESS;
}
