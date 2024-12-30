#include "stdlib.h"

typedef struct {
  int* data;
  int size;
  int capacity;
} vector_int;

void init(vector_int* vec);

void clear(vector_int* vec);

void push_back(vector_int* vec, int datum);

int at(vector_int* vec, int i);

void set(vector_int* vec, int i, int datum);
