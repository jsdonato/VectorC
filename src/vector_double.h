#ifndef VECTOR_DOUBLE_H
#define VECTOR_DOUBLE_H

#include "stdlib.h"

typedef struct {
  double* data;
  int size;
  int capacity;
} vector_double;

void vd_init(vector_double* vec);

void vd_init_size(vector_double* vec, int size);

void vd_clear(vector_double* vec);

void vd_push_back(vector_double* vec, double datum);

double vd_at(vector_double* vec, int i);

void vd_set(vector_double* vec, int i, double datum);

void vd_set_size(vector_double* vec, int size);

void vd_set_capacity(vector_double* vec, int capacity);

#endif
