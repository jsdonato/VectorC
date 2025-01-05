#include "vector_int.h"

void vi_init(vector_int* vec) {
  vec->data = (int*)malloc(1 * sizeof(int));
  vec->size = 0;
  vec->capacity = 1;
}

void vi_init_size(vector_int* vec, unsigned int size) {
  vec->data = (int*)malloc(size * sizeof(int));
  vec->size = size;
  vec->capacity = 2 * size;
}

void vi_clear(vector_int* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void vi_push_back(vector_int* vec, int datum) {
  if (vec->size >= vec->capacity) {
    vec->data = (int*)realloc(vec->data, 2 * vec->capacity * sizeof(int));
    ++(vec->size);
    vec->capacity *= 2;
  }
  else {
    ++(vec->size);
  }
  (vec->data)[vec->size - 1] = datum;
}

int vi_at(vector_int* vec, unsigned int i) {
  return (vec->data)[i];
}

void vi_set(vector_int* vec, unsigned int i, int datum) {
  (vec->data)[i] = datum;
}

void vi_set_size(vector_int* vec, unsigned int size) {
  if (size > vec->capacity) {
    vec->data = (int*)realloc(vec->data, 2 * size * sizeof(int));
    vec->capacity = 2 * size;
  }
  vec->size = size;
}

void vi_set_capacity(vector_int* vec, unsigned int capacity) {
  if (capacity > vec->capacity) {
    vec->data = (int*)realloc(vec->data, capacity * sizeof(int));
    vec->capacity = capacity;
  }
}
