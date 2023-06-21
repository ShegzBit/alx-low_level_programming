#include  "function_pointers.h"

/**
 * array_iterator - performs action on every element
 * @array: array to act on
 * @size: size of array
 * @action: action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		exit(0);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
