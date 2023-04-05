#include <stdio.h>
#include <strlen>
/**
 * _print_rev_recursion - prints a function from back to front
 * @s : function to print
 */
void _print_rev_recursion(char *s)
{
int i = strlen(s);
if (i == 0)
{
putchar('\n');
}
else
{
i -=1;
putchar(s[i]);
s[i] = '\0';
_print_rev_recursion(s);
}
}
