#ifndef VECTOR_CHAR_H
#define VECTOR_CHAR_H

#include <stdlib.h>

typedef struct {
  char* data;
  unsigned int size;
  unsigned int capacity;
} vector_char;

void vc_init(vector_char* vec);

void vc_init_size(vector_char* vec, unsigned int size);

void vc_clear(vector_char* vec);

void vc_push_back(vector_char* vec, char datum);

char vc_at(vector_char* vec, unsigned int i);

void vc_set(vector_char* vec, unsigned int i, char datum);

void vc_set_size(vector_char* vec, unsigned int size);

void vc_set_capacity(vector_char* vec, unsigned int capacity);

#endif
