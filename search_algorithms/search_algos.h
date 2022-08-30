#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

void printMe(int *array, size_t i, size_t size);

#endif
