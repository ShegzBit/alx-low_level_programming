#include "main.h"

/**
 * _pow - calculates x to power y
 * @x: number
 * @y: power
 * Return: x^y
*/
int _pow(int x, int y)
{
	if (y == 0)
	return (1);
	return (x *= _pow(x, --y));
}

/**
 * binary_to_uint - changes a str of 1 and 0 to the dec form
 * @b: bin to change to change
 * Return: uint representation
*/
unsigned int binary_to_uint(const char *b)
{
	int count = 0, size, itr = 0, retval = 0;

	if (b == NULL)
		return (0);
	while (b[count])
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		count++;
	}
	size = strlen(b);
	while (itr < size)
	{
		if (b[itr] == '1')
		{
			retval += _pow(2, size - itr - 1);
		}
		itr++;
	}
	return (retval);
}
