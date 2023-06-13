#include "main.h"


/**
 * create_array - creates an array and initialize it to c
 * @size: size of array
 * @c: char to initialize with
 * Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
	char *char_arr = malloc(size * sizeof(char));
	unsigned int i;

	if (char_arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		char_arr[i] = c;
	}
	return (char_arr);
}
