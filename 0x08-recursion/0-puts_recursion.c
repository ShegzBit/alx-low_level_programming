#include "main.h"

/**
 * _puts_recursion - a puts function using recursion
 * @s: str to print
*/
void _puts_recursion(char *s)
{
write(1, s, strlen(s));
_putchar('\n');
}
