#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - prints a single char on the screen
 * Return: 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * _puts - print a string
 * @s : string to be counted
 * Return: length of string
 */
void _puts(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
putchar(s[i]);
}
putchar('\n');
}
