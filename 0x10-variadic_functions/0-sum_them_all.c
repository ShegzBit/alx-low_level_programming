#include "variadic_functions.h"

/**
 * sum_them_all - sums all numbers passed to it and returns it
 *
 * @n: size of nums
 * Return: sum of nums
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int temp = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		temp += va_arg(ap, int);
		i++;
	}
	return (temp);
}
