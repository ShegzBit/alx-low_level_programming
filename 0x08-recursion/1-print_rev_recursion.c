#include <stdio.h>
/**
 * _print_rev_recursion - prints a function from back to front
 * @s : function to print
 */
void _print_rev_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
if (i == 0)
{
putchar('\n');
}
else
{
--i;
putchar(s[i]);
s[i] = '\0';
_print_rev_recursion(s);
}
}
