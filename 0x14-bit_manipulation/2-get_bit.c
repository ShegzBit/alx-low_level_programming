#include "main.h"

/**
 * get_bit - gets bit as index i of n
 * @n: number to search bit in
 * @i: index of the bit
 * Return: the bit
*/
int get_bit(unsigned long int n, unsigned int i)
{
	if ((sizeof(n) * 8) <= i)
		return (-1);
	return (((n & (1 << i)) != 0));
}
