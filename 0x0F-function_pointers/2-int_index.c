#include "function_pointers.h"


/**
 * int_index - compares
 * @array: array to work on
 * @size: size of array
 * @cmp: function to use
 * Return: index of element not compared true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
