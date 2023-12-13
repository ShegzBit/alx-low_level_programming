#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int search(int *array, size_t low, size_t high, int value, size_t size);
#endif /*__SEARCH_ALGOS__*/
