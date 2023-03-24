#include <stdio.h>

/**
* print_line - draws a line
* @n : length of the line
*/
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
putchar('_');
}
putchar('\n');
}
