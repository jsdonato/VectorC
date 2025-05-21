#include "test_vec_int.h"

int test_vec_int() {
  printf("=== BEGIN VECTOR INT TESTS ===\n");

  vector_int vec;

  // test init
  vi_init(&vec);
  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 1);
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

  ASSERT_TRUE(vi_at(&vec, 0) == 2);
  ASSERT_TRUE(vi_at(&vec, 1) == 3);
  ASSERT_TRUE(vi_at(&vec, 2) == 5);
  ASSERT_TRUE(vi_at(&vec, 3) == 7);
  ASSERT_TRUE(vi_at(&vec, 4) == 11);
  ASSERT_TRUE(vi_at(&vec, 5) == 13);
  ASSERT_TRUE(vi_at(&vec, 6) == 17);
  ASSERT_TRUE(vi_at(&vec, 7) == 19);

  ASSERT_TRUE(vec.size == 8);

  vi_clear(&vec);

  // test init size
  vi_init_size(&vec, 5);

  ASSERT_TRUE(vec.size == 5);
  ASSERT_TRUE(vec.capacity == 10);

  vi_set(&vec, 0, 23);
  vi_set(&vec, 1, 29);
  vi_set(&vec, 2, 31);
  vi_set(&vec, 3, 37);
  vi_set(&vec, 4, 41);

  ASSERT_TRUE(vi_at(&vec, 0) == 23);
  ASSERT_TRUE(vi_at(&vec, 1) == 29);
  ASSERT_TRUE(vi_at(&vec, 2) == 31);
  ASSERT_TRUE(vi_at(&vec, 3) == 37);
  ASSERT_TRUE(vi_at(&vec, 4) == 41);

  vi_clear(&vec);

  // test set size
  vi_init(&vec);
  vi_set_size(&vec, 5);

  vi_set(&vec, 0, 43);
  vi_set(&vec, 1, 47);
  vi_set(&vec, 2, 53);
  vi_set(&vec, 3, 59);
  vi_set(&vec, 4, 61);

  ASSERT_TRUE(vi_at(&vec, 0) == 43);
  ASSERT_TRUE(vi_at(&vec, 1) == 47);
  ASSERT_TRUE(vi_at(&vec, 2) == 53);
  ASSERT_TRUE(vi_at(&vec, 3) == 59);
  ASSERT_TRUE(vi_at(&vec, 4) == 61);

  vi_clear(&vec);

  // test set capacity
  vi_init(&vec);
  vi_set_capacity(&vec, 5);

  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vi_set(&vec, 0, 67);
  vi_set(&vec, 1, 71);

  ASSERT_TRUE(vi_at(&vec, 0) == 67);
  ASSERT_TRUE(vi_at(&vec, 1) == 71);

  vi_push_back(&vec, 73);
  vi_push_back(&vec, 79);

  ASSERT_TRUE(vec.size == 2);
  ASSERT_TRUE(vec.capacity == 5);

  ASSERT_TRUE(vi_at(&vec, 0) == 73);
  ASSERT_TRUE(vi_at(&vec, 1) == 79);

  vi_clear(&vec);


  printf("=== END VECTOR INT TESTS ===\n");
  return EXIT_SUCCESS;
}
