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

	if (n == 0)
		exit(1);
	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
}
