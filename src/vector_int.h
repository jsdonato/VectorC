#ifndef VECTOR_INT_H
#define VECTOR_INT_H

#include "stdlib.h"

typedef struct {
  int* data;
  int size;
  int capacity;
} vector_int;

void vi_init(vector_int* vec);

void vi_init_size(vector_int* vec, int size);

void vi_clear(vector_int* vec);

void vi_push_back(vector_int* vec, int datum);

int vi_at(vector_int* vec, int i);

void vi_set(vector_int* vec, int i, int datum);

void vi_set_size(vector_int* vec, int size);

void vi_set_capacity(vector_int* vec, int capacity);

#endif
