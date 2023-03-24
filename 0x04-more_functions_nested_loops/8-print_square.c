#include "main.h"
#include <stdio.h>

/**
 * print_square - daws a square
 * @size : size of square
 */
void print_square(int size)
{
int i;
int j;
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
putchar('#');
}
putchar('\n');
}
if (size <= 0)
{
putchar('\n');
}
}

