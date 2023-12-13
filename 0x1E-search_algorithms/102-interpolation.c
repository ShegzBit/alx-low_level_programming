#include "search_algos.h"


/**
 * inter_search - perfoms a binary search
 * @array: on array @array
 * @size: of size
 * @low: from start
 * @high: to stop
 * @value: for value @value
 * Return: the index of the first occurence of value
 */
int inter_search(int *array, size_t low, size_t high, int value, size_t size)
{
	size_t pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	if (!array)
		return (-1);
	if (pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (value == array[pos])
		return (pos);
	if (value < array[pos])
		return (inter_search(array, low, pos - 1, value, size));
	if (value > array[pos])
		return (inter_search(array, pos + 1, high, value, size));

	return (-1);
}

/**
 * interpolation_search - performs interpolation search on
 * @array: of size
 * @size: for value
 * @value: and
 * Return: the position of the value || -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (inter_search(array, 0, size - 1, value, size));
}
