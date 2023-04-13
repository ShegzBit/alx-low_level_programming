#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of element min-max
 * @min : minimum element
 * @max : maximum element
 * Return: ptr to arr
 */
int *array_range(int min, int max)
{
unsigned int i, size, mini = min;
int *ptr;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++, mini++)
{
ptr[i] = mini;
}
return (ptr);

}
