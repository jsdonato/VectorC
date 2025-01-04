#include "vector_float.h"

void vf_init(vector_float* vec) {
  vec->data = (float*)malloc(1 * sizeof(float));
  vec->size = 0;
  vec->capacity = 1;
}

void vf_init_size(vector_float* vec, int size) {
  vec->data = (float*)malloc(size * sizeof(float));
  vec->size = size;
  vec->capacity = 2 * size;
}

void vf_clear(vector_float* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void vf_push_back(vector_float* vec, float datum) {
  if (vec->size >= vec->capacity) {
    vec->data = (float*)realloc(vec->data, 2 * vec->capacity * sizeof(float));
    ++(vec->size);
    vec->capacity *= 2;
  }
  else {
    ++(vec->size);
  }
  (vec->data)[vec->size - 1] = datum;
}

float vf_at(vector_float* vec, int i) {
  return (vec->data)[i];
}

void vf_set(vector_float* vec, int i, float datum) {
  (vec->data)[i] = datum;
}

void vf_set_size(vector_float* vec, int size) {
  if (size > vec->capacity) {
    vec->data = (float*)realloc(vec->data, 2 * size * sizeof(float));
    vec->size = size;
    vec->capacity = 2 * size;
  }
}

void vf_set_capacity(vector_float* vec, int capacity) {
  if (capacity > vec->capacity) {
    vec->data = (float*)realloc(vec->data, capacity * sizeof(float));
    vec->capacity = capacity;
  }
}
