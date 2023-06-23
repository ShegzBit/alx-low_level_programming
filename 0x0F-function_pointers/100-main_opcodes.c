#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the op code of value passed to it
 * @ac: args count
 * @av: args vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	unsigned char *main_ptr = (unsigned char *)&main;
	int i = 0;
	int n = atoi(av[1]);

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < n)
	{
		printf("%02x", *(main_ptr + i));
		if (i < n-1)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
