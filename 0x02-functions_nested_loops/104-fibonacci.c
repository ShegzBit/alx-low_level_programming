#include <stdio.h>

/**
 * main - prints first fifty fibonacci numbers
 * Return: 0 on success
 */
int main(void)
{
	unsigned long i = 0, prev = 1, next = 1, current;

	/*1, 1, 2, 3, 5, 8,...*/
	for (; i < 98; i++)
	{
		current = next + prev;
		prev = next;
		next = current;

		if (prev < 1844674407370955)
			printf("%ld", prev);
		else
		{
			printf("%ld", prev / 10000000);
			printf("%ld", prev % 10000000);
		}
		if (prev != 20365011074)
			printf(", ");

	}
	putchar('\n');

	return (0);
}
