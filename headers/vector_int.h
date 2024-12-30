
struct vector_int {
  int* data;
  int size;
  int capacity;
};

void init(vector_int* vec) {
  vec->data = (int *)malloc(1 * sizeof(int));
  size = 0;
  capacity = 1;
}

void clear(vector_int* vec) {
  vec->data = nullptr;
  size = 0;
  capacity = 0;
}

void push_back(vector_int* vec, int datum) {
  
}
