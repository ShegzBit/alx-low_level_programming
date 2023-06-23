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
	int (*main_ptr)(int, char**) = &main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%p", main_ptr);
}
