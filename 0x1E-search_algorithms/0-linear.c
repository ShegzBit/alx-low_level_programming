#include "search_algos.h"


/**
 * linear_search - performs a linear search on
 * @array: an array @array
 * @size: of size @size
 * @value: to find @value
 * Return: 1st index of @value in the array or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
