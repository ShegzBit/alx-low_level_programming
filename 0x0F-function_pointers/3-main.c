#include "3-calc.h"

/**
 * main - uses all othe 3- functions
 *
 * @ac: args count
 * @av: args vector
 * Return: 0 in success
 */
int main(int ac, char **av)
{
	op_f func;
	int num1, num2;

	if (ac != 4 || av == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(av[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	printf("%d\n", func(num1, num2));
	return (0);
}
