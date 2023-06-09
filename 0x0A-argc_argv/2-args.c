#include "main.h"


/**
 * main - prints all arguments
 * @ac: args count
 * @av: args vector
 * Return: 0 on success
*/
int main(int ac, char **av)
{
	while (ac--)
	{
		printf("%s\n", *av++);
	}
	return (0);
}




