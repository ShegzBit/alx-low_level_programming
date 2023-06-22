#include "variadic_functions.h"

/**
 * print_numbers - prints numberss
 * @separator: separator
 * @n: size of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (i < (n - 1))
				printf("%s", separator);
			i++;
		}
	}
	putchar('\n');
}
