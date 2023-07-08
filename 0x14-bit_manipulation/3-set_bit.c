#include "main.h"

/**
 * set_bit - sets the bit at index i to 1
 * @n: pointer to int to set bit for
 * @i: index of bit to set
 * Return: 1 on success
*/
int set_bit(unsigned long int *n, unsigned int i)
{
	if ((sizeof(*n) * 8) <= i || n == NULL)
		return (-1);
	*n = (*n) | (1 << i);
	return (1);
}
