#include "main.h"

/**
 * get_endianness - get endianness
 * Return: 0 for big endian
*/
int get_endianness(void)
{
	int n = 100;
	char *ptr_s = (char *)&n;

	return (ptr_s[0]);
}
