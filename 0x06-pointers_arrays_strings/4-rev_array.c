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
int swap[n], i = 0, p;
p = n - 1;
while (p >= 0)
{
swap[i++] = a[p--];

}
free(a);
a = (int *) malloc(sizeof(swap) / sizeof(int))
if (a != NULL)
{
for (i = 0; i < n; i++)
{
a[i] = swap[i];
}
}
}
