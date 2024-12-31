#include "vector_int.h"

void init(vector_int* vec) {
  vec->data = (int*)malloc(1 * sizeof(int));
  vec->size = 0;
  vec->capacity = 1;
}

void init_size(vector_int* vec, int size) {
  vec->data = (int*)malloc(size * sizeof(int));
  vec->size = size;
  vec->capacity = 2 * size;
}

void clear(vector_int* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void push_back(vector_int* vec, int datum) {
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

int at(vector_int* vec, int i) {
  return (vec->data)[i];
}

void set(vector_int* vec, int i, int datum) {
  (vec->data)[i] = datum;
}

void set_size(vector_int* vec, int size) {
  if (size > vec->capacity) {
    vec->data = (int*)realloc(vec->data, 2 * size * sizeof(int));
    vec->size = size;
    vec->capacity = 2 * size;
  }
}

void set_capacity(vector_int* vec, int capacity) {
  if (capacity > vec->capacity) {
    vec->data = (int*)realloc(vec->data, capacity * sizeof(int));
    vec->capacity = capacity;
  }
}
