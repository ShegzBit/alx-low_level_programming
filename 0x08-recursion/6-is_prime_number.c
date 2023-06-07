#include "main.h"

/**
 * is_prime_number - check if a number is prime
 * @num: number to work on
 * Return: 1 on true 0 on false
*/
int is_prime_number(int num)
{
	int n = 2;

	if (num < 2)
	{
		return (0);
	}
	n = prime_helper(num, n);
	return (n);
}

/**
 * prime_helper - check if a number is prime
 * @num: number to work on
 * @n: counter or factor
 * Return: 1 on true 0 on false
*/
int prime_helper(int num, int n)
{
	if ((num % n == 0) && num > n)
	{
		return (0);
	}
	else if (num % n != 0 && num > n)
	{
		n += 1;
		n = prime_helper(num, n);
		return (n);
	}
	return (1);
}
