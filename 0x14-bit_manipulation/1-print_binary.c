#include "main.h"

/**
 * print_binary - prints the bin form of dec uint
 * @n: dec uint to print;
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
