#include <stdio.h>

/**
 * main - prints first fifty fibonacci numbers
 * Return: 0 on success
 */
int main(void)
{
	long i = 0, prev = 1, next = 1, current;

	/*1, 1, 2, 3, 5, 8,...*/
	for (; i < 48; i++)
	{
		current = next + prev;
		prev = next;
		next = current;
		printf("%ld, ", prev);

	}
	putchar('\n');

	return (0);
}
