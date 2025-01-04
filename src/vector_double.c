#include "vector_double.h"

void vd_init(vector_double* vec) {
  vec->data = (double*)malloc(1 * sizeof(double));
  vec->size = 0;
  vec->capacity = 1;
}

void vd_init_size(vector_double* vec, int size) {
  vec->data = (double*)malloc(size * sizeof(double));
  vec->size = size;
  vec->capacity = 2 * size;
}

void vd_clear(vector_double* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void vd_push_back(vector_double* vec, double datum) {
  if (vec->size >= vec->capacity) {
    vec->data = (double*)realloc(vec->data, 2 * vec->capacity * sizeof(double));
    ++(vec->size);
    vec->capacity *= 2;
  }
  else {
    ++(vec->size);
  }
  (vec->data)[vec->size - 1] = datum;
}

double vd_at(vector_double* vec, int i) {
  return (vec->data)[i];
}

void vd_set(vector_double* vec, int i, double datum) {
  (vec->data)[i] = datum;
}

void vd_set_size(vector_double* vec, int size) {
  if (size > vec->capacity) {
    vec->data = (double*)realloc(vec->data, 2 * size * sizeof(double));
    vec->capacity = 2 * size;
  }
  vec->size = size;
}

void vd_set_capacity(vector_double* vec, int capacity) {
  if (capacity > vec->capacity) {
    vec->data = (double*)realloc(vec->data, capacity * sizeof(double));
    vec->capacity = capacity;
  }
}
