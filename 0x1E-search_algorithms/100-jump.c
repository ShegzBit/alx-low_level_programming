#include "search_algos.h"


/**
 * jump_search - search a jump search operation on
 * @array: of size
 * @size: of the value
 * @value: and
 * Return: the index of first occurence of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, stop;
	int step = size / 3;

	start = 0;
	stop = 0;
	if (!array || !size)
		return (-1);
	while (stop < size)
	{
		if (array[stop] >= value)
		{
			break;
		}
		start = stop;
		stop += step;
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, stop);
	if (stop > size)
		stop = size - 1;
	while (start <= stop)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
