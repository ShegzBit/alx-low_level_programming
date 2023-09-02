#include <stdio.h>

/**
 * main - prints sum of fibonacci numbers under 4,000,000
 * Return: 0 on success
 */
int main(void)
{
	long i = 0, prev = 1, next = 1, current, sum = 0;

	/*1, 1, 2, 3, 5, 8,...*/
	for (; prev < 4000000; i++)
	{
		current = next + prev;
		prev = next;
		next = current;
		if (prev % 2 == 0)
			sum += prev;
	}
	printf("%ld\n", sum);

	return (0);
}
