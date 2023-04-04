#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, suma = 0, sumb = 0;

for (i = 0; i < size; i++)
{
suma += a[(size + 1) * i];
sumb += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", suma, sumb);
}
