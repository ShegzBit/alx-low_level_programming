#include <stdio.h>
/**
 * swap_int - swaps 2 integers
 * @a : integer 1
 * @b : integer 2
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
