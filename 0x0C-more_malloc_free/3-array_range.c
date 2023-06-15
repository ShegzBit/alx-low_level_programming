#include "main.h"

/**
 * array_range - creates array of range
 * @min: range minimum
 * @max: range maximum
 * Return: pointer to arr
*/
int *array_range(int min, int max)
{
	int size = max - min + 1, i = 0;
	int *arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	if (min > max)
		return (NULL);
	while (i < size)
		arr[i++] = min++;

	return (arr);
}
