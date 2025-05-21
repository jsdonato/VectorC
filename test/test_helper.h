#define ASSERT_TRUE(b) { \
  if (!(b)) { \
    fprintf(stderr, "FAIL: in file %s on line %d\n", __FILE__, __LINE__); \
    exit(1); \
  } \
} \
