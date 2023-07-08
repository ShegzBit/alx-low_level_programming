#include "main.h"

/**
 * flip_bits - count bit needed to be flipped for m to become n
 * @m: fisrt number
 * @n: second number
 * Return: flip count;
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int retval = 0;

	while (m > 0 || n > 0)
	{
		if (((m ^ n) & 1) == 1)
			retval++;
		m >>= 1;
		n >>= 1;
	}
	return (retval);
}
