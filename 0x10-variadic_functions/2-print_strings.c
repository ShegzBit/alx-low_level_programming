#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the numbers passed to it
 * @separator : string to print between the numbers
 * @n : number of numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *save;
va_start(ap, n);
for (i = 0; i < n; i++)
{
save = va_arg(ap, char *);
if (save == NULL)
{
printf("(nil)");
}
else
{
printf("%s", save);
}
if (i < (n - 1))
{
if (separator == NULL)
{
}
else
{
printf("%s", separator);
}
}
}
va_end(ap);
putchar('\n');
}
