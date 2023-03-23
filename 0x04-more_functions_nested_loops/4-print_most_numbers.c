#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - rints most numbers
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
else
{
putchar(i + '0');
}
}
putchar('\n');
}
