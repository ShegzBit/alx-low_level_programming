#include <stdio.h>

/**
 * main - prints name of file it is compiled from
 *
 * Return: 0 on success
 */
int main(void)
{
	char s[] = __FILE__;

	printf("%s\n", s);
	return (0);
}
