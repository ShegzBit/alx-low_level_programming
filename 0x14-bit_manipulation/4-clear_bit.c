#include "main.h"

/**
 * clear_bit - sets bit in n at i to 0
 * @n: number to set bit in
 * @i: index of number to set bit in
 * Return: 1 on success
*/
int clear_bit(unsigned long int *n, unsigned int i)
{
	if ((sizeof(*n) * 8) <= i || n == NULL)
		return (-1);
	*n = (*n) & (~(1 << i));
	return (1);
}
