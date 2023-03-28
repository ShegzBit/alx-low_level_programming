#include <stdio.h>

/**
 * puts_half - prints the second half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
int size, b, i;

for (size = 0; str[size] != '\0'; size++)
{
}
b = (size - 1) / 2;
for (i = b + 1; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
