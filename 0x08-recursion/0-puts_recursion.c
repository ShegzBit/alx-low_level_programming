#include <stdio.h>
/**
 * _puts_recursion - prints a null terminated string
 * @s : string to be inserted
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s);
}
else
{
putchar('\n');
}
putchar(*s);
s++;
}
