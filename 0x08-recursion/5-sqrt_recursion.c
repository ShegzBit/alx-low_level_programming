#include "main.h"

/**
 * _sqrt_recursion - sqrt using recursion
 * @num: number to work on
 * Return: n -> sqrt of num
*/
int _sqrt_recursion(int num)
{
	int n;

	n = sqrt_helper(num, 1);
	return (n);
}

/**
 * sqrt_helper - sqrt using recursion
 * @num: number to work on
 * @n: counter and sqrt
 * Return: n -> sqrt of num
*/
int sqrt_helper(int num, int n)
{
	if (n * n != num && n < num)
	{
		/*Let n = 9*/
		n = sqrt_helper(num, n + 1);
		return (n);
	}
	else if (n * n == num)
	{
		return (n);
	}
	return (-1);
}
