
struct vector_int {
  int* data;
  int size;
  int capacity;
};

void init(vector_int* vec) {
  vec->data = (int*)malloc(1 * sizeof(int));
  size = 0;
  capacity = 1;
}

void clear(vector_int* vec) {
  free(vec->data);
  size = 0;
  capacity = 1;
}

void push_back(vector_int* vec, int datum) {
  if (vec->size == vec->capacity) {
    vec->data = (int*)realloc(vec->data, 2 * capacity * sizeof(int));
    ++(vec->size());
    vec->capacity *= 2;
  }
  else {
    (vec->data)[size] = datum;
    ++(vec->size);
  }
}
