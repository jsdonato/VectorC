#include "vector_int.h"

void init(vector_int* vec) {
  vec->data = (int*)malloc(1 * sizeof(int));
  vec->size = 0;
  vec->capacity = 1;
}

void clear(vector_int* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void push_back(vector_int* vec, int datum) {
  if (vec->size == vec->capacity) {
    vec->data = (int*)realloc(vec->data, 2 * vec->capacity * sizeof(int));
    ++(vec->size);
    vec->capacity *= 2;
  }
  else {
    (vec->data)[vec->size] = datum;
    ++(vec->size);
  }
}

int at(vector_int* vec, int i) {
  return (vec->data)[i];
}

void set(vector_int* vec, int i, int datum) {
  (vec->data)[i] = datum;
}
