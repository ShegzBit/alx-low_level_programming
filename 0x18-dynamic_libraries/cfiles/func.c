#include <stdio.h>
#include <unistd.h>

/**
 * add - adds two number a and b
 * Return: a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two number a and b
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * Return: a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two number a and b
 * Return: a / b
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - divides two numbers a and b and gives the remainder
 * Return: a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
