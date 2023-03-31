#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse an array
 * @a : array to reverse
 * @n : number of elements
 */
void reverse_array(int *a, int n)
{
int i, j, ins;

j = n - 1;

for (i = 0; i < n / 2; i++)
{
ins = a[i];
a[i] = a[j];
a[j--] = ins;
}
}
