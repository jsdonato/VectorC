#ifndef VECTOR_DOUBLE_H
#define VECTOR_DOUBLE_H

#include "stdlib.h"

typedef struct {
  double* data;
  int size;
  int capacity;
} vector_double;

void init(vector_double* vec);

void init_size(vector_double* vec, int size);

void clear(vector_double* vec);

void push_back(vector_double* vec, double datum);

double at(vector_double* vec, int i);

void set(vector_double* vec, int i, double datum);

void set_size(vector_double* vec, int size);

void set_capacity(vector_double* vec, int capacity);

#endif
