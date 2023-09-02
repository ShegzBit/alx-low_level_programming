#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n : number to be used in print last function
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
