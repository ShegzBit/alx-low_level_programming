#include "main.h"

/**
 * main - gets number of coin needed for change
 * @ac: args count
 * @av: args vector
 * Return: 0 on success
*/
int main(int ac, char **av)
{
	int num, sum = 0, count = 5, i = 0;
	int check[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(av[1]);
	while (num > 0)
	{
		i = 0;
		while (i < count)
		{
			if (num % check[i] == 0)
			{
				sum += num / check[i];
				num %= check[i];
			}
			else
			{
				if (num / check[i] != 0)
				{
					sum += num / check[i];
					num %= check[i];
				}
			}
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
