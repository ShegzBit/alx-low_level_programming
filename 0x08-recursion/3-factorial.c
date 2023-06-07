#include "main.h"

/**
 * factorial - calculates factorial
 * @n: number to solve for
 * Return: n
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		n *= factorial(n - 1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n);
}
