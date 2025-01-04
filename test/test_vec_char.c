#include "test_vec_char.h"

void test_vec_char() {
  printf("=== BEGIN VECTOR CHAR TESTS ===\n");

  vector_char vec;

  // test init
  vc_init(&vec);
  assert(vec.size == 0);
  assert(vec.capacity == 1);
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

  assert(vc_at(&vec, 0) == 'a');
  assert(vc_at(&vec, 1) == 'b');
  assert(vc_at(&vec, 2) == 'c');
  assert(vc_at(&vec, 3) == 'd');
  assert(vc_at(&vec, 4) == 'e');
  assert(vc_at(&vec, 5) == 'f');
  assert(vc_at(&vec, 6) == 'g');
  assert(vc_at(&vec, 7) == 'h');

  assert(vec.size == 8);

  vc_clear(&vec);

  // test init size
  vc_init_size(&vec, 5);

  assert(vec.size == 5);
  assert(vec.capacity == 10);

  vc_set(&vec, 0, 'i');
  vc_set(&vec, 1, 'j');
  vc_set(&vec, 2, 'k');
  vc_set(&vec, 3, 'l');
  vc_set(&vec, 4, 'm');

  assert(vc_at(&vec, 0) == 'i');
  assert(vc_at(&vec, 1) == 'j');
  assert(vc_at(&vec, 2) == 'k');
  assert(vc_at(&vec, 3) == 'l');
  assert(vc_at(&vec, 4) == 'm');

  vc_clear(&vec);

  // test set size
  vc_init(&vec);
  vc_set_size(&vec, 5);

  vc_set(&vec, 0, 'n');
  vc_set(&vec, 1, 'o');
  vc_set(&vec, 2, 'p');
  vc_set(&vec, 3, 'q');
  vc_set(&vec, 4, 'r');

  assert(vc_at(&vec, 0) == 'n');
  assert(vc_at(&vec, 1) == 'o');
  assert(vc_at(&vec, 2) == 'p');
  assert(vc_at(&vec, 3) == 'q');
  assert(vc_at(&vec, 4) == 'r');

  vc_clear(&vec);

  // test set capacity
  vc_init(&vec);
  vc_set_capacity(&vec, 5);

  assert(vec.size == 0);
  assert(vec.capacity == 5);

  // this is unintended behavior but wont throw
  // errors due what we actually allocated
  vc_set(&vec, 0, 's');
  vc_set(&vec, 1, 't');

  assert(vc_at(&vec, 0) == 's');
  assert(vc_at(&vec, 1) == 't');

  vc_push_back(&vec, 'u');
  vc_push_back(&vec, 'v');

  assert(vec.size == 2);
  assert(vec.capacity == 5);

  assert(vc_at(&vec, 0) == 'u');
  assert(vc_at(&vec, 1) == 'v');

  vc_clear(&vec);

  printf("=== END VECTOR CHAR TESTS ===\n");
}
