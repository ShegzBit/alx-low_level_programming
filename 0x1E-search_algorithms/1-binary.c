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
	{
		printf("%d", array[i]);
		(i < size - 1) ? printf(", ") : printf("\n");
	}
}

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

	/*check if array is null*/
	if (!array || end - start == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, end - start);
	/*prepare a base case for case 200 and 404*/
	if (value == array[mid])
		return (mid);
	/*if value is less than the middle of current list*/
	if (value < array[mid])
		return (search(array, start, mid, value));
	/*split left*/
	/*if value is greater split to the right*/
	if (value > array[mid])
		return (search(array, mid + 1, end, value));
	return (-1);
}

/**
 * binary_search - perfoms a binary search
 * @array: on array @array
 * @size: of size @size
 * @value: for value @value
 * Return: the index of the value being searched for
 */
int binary_search(int *array, size_t size, int value)
{
	return (search(array, 0, size, value));
}
