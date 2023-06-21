#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: num 1
 * @b: num 2
 * Return: addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs a and b
 * @a: num 1
 * @b: num 2
 * Return: subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - muls a and b
 * @a: num 1
 * @b: num 2
 * Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divs a and b
 * @a: num 1
 * @b: num 2
 * Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mods a and b
 * @a: num 1
 * @b: num 2
 * Return: modulo
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
