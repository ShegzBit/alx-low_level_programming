#include <stdio.h>

/**
 * main - prints the sum of all multiple of 3 or 5
 * up to 1024(exclusive)
 * Return: 0 on success
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
}
