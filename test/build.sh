gcc \
-I../src \
../src/vector_int.c test_vec_int.c \
../src/vector_double.c test_vec_double.c \
../src/vector_float.c test_vec_float.c \
../src/vector_char.c test_vec_char.c \
main.c -o run
