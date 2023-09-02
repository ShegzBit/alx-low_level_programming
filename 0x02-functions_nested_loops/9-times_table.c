#include "main.h"

/**
 * times_table - prints the times table 0 - 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			(j == 0) ? printf("%d", i * j) : printf("%3d", i * j);
			(j < 9) ? printf(",") : printf("\n");
		}
	}
}
