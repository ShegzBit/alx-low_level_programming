#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
int i, digits = 0, divisor = 1;

if (n < 0)
{
putchar('-');
n = -n;
}

while (n / divisor > 9)
{
divisor *= 10;
}

for (i = divisor; i > 0; i /= 10)
{
digits = n / i;
putchar(digits + '0');
n -= digits * i;
}

if (divisor == 1 && n == 0)
{
putchar('0');
}
}
