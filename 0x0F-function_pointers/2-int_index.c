#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns index of first compared true
 * @array : array of element to compare
 * @size : size of array
 * @cmp : comparison function
 * Return: index of first compared true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array != NULL && cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}