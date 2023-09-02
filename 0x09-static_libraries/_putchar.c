#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes a char
 *
 *Return: Always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
