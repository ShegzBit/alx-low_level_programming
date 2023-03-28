#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n : number to be used in print last function
 * Return: last digit
 */
int print_last_digit(int n)
{
int get = 10;
while (n % get >= 10)
{
get *= 10;
}
return (n % get);
}
