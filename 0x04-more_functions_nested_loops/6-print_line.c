#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a line
 * @n : number of lines
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
