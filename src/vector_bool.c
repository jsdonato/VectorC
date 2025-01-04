#include "vector_bool.h"

void vb_init(vector_bool* vec) {
  vec->data = (bool*)malloc(1 * sizeof(bool));
  vec->size = 0;
  vec->capacity = 1;
}

void vb_init_size(vector_bool* vec, int size) {
  vec->data = (bool*)malloc(size * sizeof(bool));
  vec->size = size;
  vec->capacity = 2 * size;
}

void vb_clear(vector_bool* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void vb_push_back(vector_bool* vec, bool datum) {
  if (vec->size >= vec->capacity) {
    vec->data = (bool*)realloc(vec->data, 2 * vec->capacity * sizeof(bool));
    ++(vec->size);
    vec->capacity *= 2;
  }
  else {
    ++(vec->size);
  }
  (vec->data)[vec->size - 1] = datum;
}

bool vb_at(vector_bool* vec, int i) {
  return (vec->data)[i];
}

void vb_set(vector_bool* vec, int i, bool datum) {
  (vec->data)[i] = datum;
}

void vb_set_size(vector_bool* vec, int size) {
  if (size > vec->capacity) {
    vec->data = (bool*)realloc(vec->data, 2 * size * sizeof(bool));
    vec->capacity = 2 * size;
  }
  vec->size = size;
}

void vb_set_capacity(vector_bool* vec, int capacity) {
  if (capacity > vec->capacity) {
    vec->data = (bool*)realloc(vec->data, capacity * sizeof(bool));
    vec->capacity = capacity;
  }
}
