#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a function from back to front
 * @s : function to print
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
