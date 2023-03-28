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
if (i % 2 == 0)
{

}
else
{
i = i - 1;
}
for (j = i / 2; j < i; j++)
{
putchar(str[j]);
}


putchar('\n');
}
