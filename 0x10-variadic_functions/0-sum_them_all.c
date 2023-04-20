#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the argument
 * @n : first arguments
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = n, j = 0;
va_list ap;
if (n == 0)
{
return (0);
}
va_start(ap, n);
for (i = 0; i < n; i++)
{
j += va_arg(ap, int);
}
va_end(ap);
return (j);
}
