#ifndef VECTOR_DOUBLE_H
#define VECTOR_DOUBLE_H

#include <stdlib.h>

typedef struct {
  double* data;
  unsigned int size;
  unsigned int capacity;
} vector_double;

void vd_init(vector_double* vec);

void vd_init_size(vector_double* vec, unsigned int size);

void vd_clear(vector_double* vec);

void vd_push_back(vector_double* vec, double datum);

double vd_at(vector_double* vec, unsigned int i);

void vd_set(vector_double* vec, unsigned int i, double datum);

void vd_set_size(vector_double* vec, unsigned int size);

void vd_set_capacity(vector_double* vec, unsigned int capacity);

#endif
