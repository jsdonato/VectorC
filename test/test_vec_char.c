#include "test_vec_char.h"

int test_vec_char() {
  printf("=== BEGIN VECTOR CHAR TESTS ===\n");

  vector_char vec;

  // test init
  vc_init(&vec);
  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 1);
  vc_clear(&vec);

  // test push_back
  vc_init(&vec);

  vc_push_back(&vec, 'a');
  vc_push_back(&vec, 'b');
  vc_push_back(&vec, 'c');
  vc_push_back(&vec, 'd');
  vc_push_back(&vec, 'e');
  vc_push_back(&vec, 'f');
  vc_push_back(&vec, 'g');
  vc_push_back(&vec, 'h');

  ASSERT_TRUE(vc_at(&vec, 0) == 'a');
  ASSERT_TRUE(vc_at(&vec, 1) == 'b');
  ASSERT_TRUE(vc_at(&vec, 2) == 'c');
  ASSERT_TRUE(vc_at(&vec, 3) == 'd');
  ASSERT_TRUE(vc_at(&vec, 4) == 'e');
  ASSERT_TRUE(vc_at(&vec, 5) == 'f');
  ASSERT_TRUE(vc_at(&vec, 6) == 'g');
  ASSERT_TRUE(vc_at(&vec, 7) == 'h');

  ASSERT_TRUE(vec.size == 8);

  vc_clear(&vec);

  // test init size
  vc_init_size(&vec, 5);

  ASSERT_TRUE(vec.size == 5);
  ASSERT_TRUE(vec.capacity == 10);

  vc_set(&vec, 0, 'i');
  vc_set(&vec, 1, 'j');
  vc_set(&vec, 2, 'k');
  vc_set(&vec, 3, 'l');
  vc_set(&vec, 4, 'm');

  ASSERT_TRUE(vc_at(&vec, 0) == 'i');
  ASSERT_TRUE(vc_at(&vec, 1) == 'j');
  ASSERT_TRUE(vc_at(&vec, 2) == 'k');
  ASSERT_TRUE(vc_at(&vec, 3) == 'l');
  ASSERT_TRUE(vc_at(&vec, 4) == 'm');

  vc_clear(&vec);

  // test set size
  vc_init(&vec);
  vc_set_size(&vec, 5);

  vc_set(&vec, 0, 'n');
  vc_set(&vec, 1, 'o');
  vc_set(&vec, 2, 'p');
  vc_set(&vec, 3, 'q');
  vc_set(&vec, 4, 'r');

  ASSERT_TRUE(vc_at(&vec, 0) == 'n');
  ASSERT_TRUE(vc_at(&vec, 1) == 'o');
  ASSERT_TRUE(vc_at(&vec, 2) == 'p');
  ASSERT_TRUE(vc_at(&vec, 3) == 'q');
  ASSERT_TRUE(vc_at(&vec, 4) == 'r');

  vc_clear(&vec);

  // test set capacity
  vc_init(&vec);
  vc_set_capacity(&vec, 5);

  ASSERT_TRUE(vec.size == 0);
  ASSERT_TRUE(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vc_set(&vec, 0, 's');
  vc_set(&vec, 1, 't');

  ASSERT_TRUE(vc_at(&vec, 0) == 's');
  ASSERT_TRUE(vc_at(&vec, 1) == 't');

  vc_push_back(&vec, 'u');
  vc_push_back(&vec, 'v');

  ASSERT_TRUE(vec.size == 2);
  ASSERT_TRUE(vec.capacity == 5);

  ASSERT_TRUE(vc_at(&vec, 0) == 'u');
  ASSERT_TRUE(vc_at(&vec, 1) == 'v');

  vc_clear(&vec);

  printf("=== END VECTOR CHAR TESTS ===\n");
  return EXIT_SUCCESS;
}
