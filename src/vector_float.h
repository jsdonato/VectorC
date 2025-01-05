#ifndef VECTOR_FLOAT_H
#define VECTOR_FLOAT_H

#include <stdlib.h>

typedef struct {
  float* data;
  unsigned int size;
  unsigned int capacity;
} vector_float;

void vf_init(vector_float* vec);

void vf_init_size(vector_float* vec, unsigned int size);

void vf_clear(vector_float* vec);

void vf_push_back(vector_float* vec, float datum);

float vf_at(vector_float* vec, unsigned int i);

void vf_set(vector_float* vec, unsigned int i, float datum);

void vf_set_size(vector_float* vec, unsigned int size);

void vf_set_capacity(vector_float* vec, unsigned int capacity);

#endif
