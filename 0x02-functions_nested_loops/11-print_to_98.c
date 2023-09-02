#include "main.h"


/**
 * print_to_98 - prints all natural numbers up to 98
 * from n
 * @n: starting point to print
 */
void print_to_98(int n)
{
	if (n < 98)
		for (; n <= 98; n++)
			(n < 98) ? printf("%d, ", n) : printf("%d\n", n);
	else
		for (; n >= 98; n--)
			(n > 98) ? printf("%d, ", n) : printf("%d\n", n);
}
