#include <stdio.h>
/**
 * puts_half - print evry second character starting from the 1st
 * @str : str to print from
 */

void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
}

for (j = i / 2; j < i; j++)
{
putchar(str[j]);
}
putchar('\n');
}
