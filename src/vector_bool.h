#ifndef VECTOR_BOOL_H
#define VECTOR_BOOL_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  bool* data;
  unsigned int size;
  unsigned int capacity;
} vector_bool;

void vb_init(vector_bool* vec);

void vb_init_size(vector_bool* vec, unsigned int size);

void vb_clear(vector_bool* vec);

void vb_push_back(vector_bool* vec, bool datum);

bool vb_at(vector_bool* vec, unsigned int i);

void vb_set(vector_bool* vec, unsigned int i, bool datum);

void vb_set_size(vector_bool* vec, unsigned int size);

void vb_set_capacity(vector_bool* vec, unsigned int capacity);

#endif
