#include <stdio.h>
/**
 * puts2 - print evry second character starting from the 1st
 * @str : str to print from
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
