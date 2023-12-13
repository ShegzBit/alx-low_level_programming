#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to pint
 * @size: size of array to print
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (!array)
		return;
	for (; i < size; i++)
		printf("%d%s", array[i], (i < size - 1) ? ", " : "\n");
}

/**
 * advanced_binary - perfoms a binary search
 * @array: on array @array
 * @size: of size @size
 * @value: for value @value
 * Return: the index of the value being searched for
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (search(array, 0, size, value));
}
#include "search_algos.h"

/**
 * search - perfoms a binary search
 * @array: on array @array
 * @start: from start
 * @end: to stop
 * @value: for value @value
 * Return: the index of the first occurence of value
 */
int search(int *array, size_t start, size_t end, int value)
{
	size_t mid = start + (end - start - 1) / 2;

	if (end > start)
	{
		/*check if array is null*/
		if (!array || end - start == 0)
			return (-1);
		printf("Searching in array: ");
		print_array(array + start, end - start);
		/*prepare a base case for case 200 and 404*/

		/*if value is less than the middle of current list*/
		if (value < array[mid])
			return (search(array, start, mid, value));
		/*if value is greater split to the right*/
		if (array[mid] == value)
		{
			if (mid == start || array[mid - 1] != value)
				return (mid);
			return (search(array, start, mid, value));
		}
		return (search(array, mid + 1, end, value));
	}
	return (-1);
}
