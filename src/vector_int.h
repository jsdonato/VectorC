#ifndef VECTOR_INT_H
#define VECTOR_INT_H

#include "stdlib.h"

typedef struct {
  int* data;
  int size;
  int capacity;
} vector_int;

void init(vector_int* vec);

void init_size(vector_int* vec, int size);

void clear(vector_int* vec);

void push_back(vector_int* vec, int datum);

int at(vector_int* vec, int i);

void set(vector_int* vec, int i, int datum);

void set_size(vector_int* vec, int size);

void set_capacity(vector_int* vec, int capacity);

#endif
