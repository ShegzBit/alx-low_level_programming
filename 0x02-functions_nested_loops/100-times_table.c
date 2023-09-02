#include "main.h"

/**
 * print_times_table - prints the times table 0 - n
 * @n: stop point
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			(j == 0) ? printf("%d", i * j) : printf("%4d", i * j);
			(j < n) ? printf(",") : printf("\n");
		}
	}
}
