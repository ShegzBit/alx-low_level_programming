#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
*/
void _print_rev_recursion(char *s)
{
int len = strlen(s) - 1;
rev_ass(s, len);
}

/**
 * rev_ass - assistant for recursion count
 * @s: string to reverse
 * @len: length of s
*/
void rev_ass(char *s, int len)
{
if (len >=  0)
{
_putchar(s[len]);
len--;
rev_ass(s, len);
}
}
