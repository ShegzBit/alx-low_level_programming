#include <stdio.h>

/**
 * print_triangle - draws a triangle of size @size
 * @size : size of triangle
 */
void print_triangle(int size)
{
int i, j, track = 1;
for (i = 0; i < size; i++)
{
track++;
for (j = 0; j < size; j++)
{
if (j > size - track)
{
putchar('#');
}
else
{
putchar(' ');
}
}
putchar('\n');
}
if (size <= 0)
{
putchar('\n')
}
}
