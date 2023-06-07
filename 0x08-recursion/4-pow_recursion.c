#include "main.h"

/**
 * _pow_recursion - power recursion
 * @x: is main number
 * @y: power
 * Return: x
*/
int _pow_recursion(int x, int y)
{
	int v = x;

	if (y < 0)
	{
		return (-1);
	}
	x = pow_ass(x, y, v);
	return (x);
}

/**
 * pow_ass - power recursion
 * @x: is main number
 * @y: power
 * @v: x duplicate to use
 * Return: x
*/
int pow_ass(int x, int y, int v)
{
	if (y == 0 || x == 1)
	{
		return (1);
	}
	else if (y > 1)
	{
		y--;
		x = pow_ass(x, y, v);
		return (x *= v);
	}
	return (x);
}
