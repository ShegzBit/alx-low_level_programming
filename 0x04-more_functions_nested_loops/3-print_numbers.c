#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Check if a number is greater than 0
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
}
