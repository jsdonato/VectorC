#ifndef VECTOR_CHAR_H
#define VECTOR_CHAR_H

#include <stdlib.h>

typedef struct {
  char* data;
  int size;
  int capacity;
} vector_char;

void vc_init(vector_char* vec);

void vc_init_size(vector_char* vec, int size);

void vc_clear(vector_char* vec);

void vc_push_back(vector_char* vec, char datum);

char vc_at(vector_char* vec, int i);

void vc_set(vector_char* vec, int i, char datum);

void vc_set_size(vector_char* vec, int size);

void vc_set_capacity(vector_char* vec, int capacity);

#endif
