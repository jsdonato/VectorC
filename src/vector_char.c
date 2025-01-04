#include "vector_char.h"

void vc_init(vector_char* vec) {
  vec->data = (char*)malloc(1 * sizeof(char));
  vec->size = 0;
  vec->capacity = 1;
}

void vc_init_size(vector_char* vec, int size) {
  vec->data = (char*)malloc(size * sizeof(char));
  vec->size = size;
  vec->capacity = 2 * size;
}

void vc_clear(vector_char* vec) {
  free(vec->data);
  vec->size = 0;
  vec->capacity = 1;
}

void vc_push_back(vector_char* vec, char datum) {
  if (vec->size >= vec->capacity) {
    vec->data = (char*)realloc(vec->data, 2 * vec->capacity * sizeof(char));
    ++(vec->size);
    vec->capacity *= 2;
  }
  else {
    ++(vec->size);
  }
  (vec->data)[vec->size - 1] = datum;
}

char vc_at(vector_char* vec, int i) {
  return (vec->data)[i];
}

void vc_set(vector_char* vec, int i, char datum) {
  (vec->data)[i] = datum;
}

void vc_set_size(vector_char* vec, int size) {
  if (size > vec->capacity) {
    vec->data = (char*)realloc(vec->data, 2 * size * sizeof(char));
    vec->capacity = 2 * size;
  }
   vec->size = size;
}

void vc_set_capacity(vector_char* vec, int capacity) {
  if (capacity > vec->capacity) {
    vec->data = (char*)realloc(vec->data, capacity * sizeof(char));
    vec->capacity = capacity;
  }
}
