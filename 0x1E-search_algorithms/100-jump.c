#include "search_algos.h"
#include <math.h>

/**
 * _sqrt - finds the squareroot of a number
 * @num: number of whose squreroot to find
 * Return: the sqrt of number
 */
int _sqrt(int num)
{
	double guess = num / 2.0;
	double epsilon = 0.00001;

	while ((guess * guess - num) >= epsilon || (num - guess * guess) >= epsilon)
		guess = (guess + num / guess) / 2.0;

	return (guess);
}

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
	int step = _sqrt(size);

	start = 0;
	stop = 0;
	/*Handle for null or 0 sized array*/
	if (!array || !size)
		return (-1);
	/*Jump until the end of the loop*/
	/*Break if value boundary has been crossed*/
	while (array[stop] < value && size > stop)
	{
		start = stop;
		stop += step;
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, stop);
	/*If stop took some steps ahead of the array return to the original size*/
	if (stop > size)
		stop = size - 1;
	/*Loop through boundary to find the value*/
	while (start <= stop)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
