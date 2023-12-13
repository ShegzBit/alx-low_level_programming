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
	size_t low = 0, high = size - 1;
	int first_occurence = -1, mid;

	while (low < high)
	{
		printf("Searching in array: ");
		print_array(array + low, high - low + 1);
		mid = low + (high - low) / 2;

		if (value > array[mid])
			low = mid + 1;
		else
		{
			high = mid;
			if (array[mid] == value)
				first_occurence = mid;
		}
	}
	if (low == high && array[low] == value)
		first_occurence = low;

	return (first_occurence);
	/*return (ad_bin_search(array, 0, size, value, -1));*/
}
