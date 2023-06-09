#include "main.h"

/**
 * main - prints multiplication of arguments
 * @ac: args count
 * @av: args vector
 * Return: 0 on success
*/

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(*(av + 1)) * atoi(*(av + 2))));
	return (0);
}
