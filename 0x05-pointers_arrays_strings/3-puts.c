#include <stdio.h>

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
