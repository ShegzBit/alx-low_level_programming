#include "main.h"

/**
 * main - prints name of program
 * @ac: argument count
 * @av: argument vector
 * Return: zero on success
*/
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", *av);
	return (0);
}
