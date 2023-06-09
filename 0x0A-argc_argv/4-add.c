#include "main.h"

/**
 * _strlen - checks length of str s
 * @s: string to check
 * Return: num -> strig length
*/
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: char to check
 * Return: 1 on true
*/
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * isnumeral - checks if a str contains only digits
 * @s: str to work on
 * Return: 1 on true
*/
int isnumeral(char *s)
{
	int n, size = _strlen(s);

	while (size--)
	{
		n = _isdigit(*s);
		if (n == 0)
		{
			return (0);
		}
		s++;
	}
	return (1);
}


/**
 * main - adds to infinity
 * @ac: args count
 * @av: args vector
 * Return: 0 on success
*/

int main(int ac, char **av)
{
	int sum = 0, i = 1;

	if (ac == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < ac)
	{
		if (isnumeral(av[i]))
		{
			sum += atoi(av[i]);
		}
		else
		{
			printf("Error\n");
			return (-1);
		}
		i++;
	}
	printf("%d\n", sum);
}
