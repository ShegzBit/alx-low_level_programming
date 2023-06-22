#include "variadic_functions.h"

/**
 * print_strings - prints variable amout of strings passed
 * @separator: string separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *temp;

	va_start(ap, n);
	while (i < n)
	{
		temp = va_arg(ap, char *);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		i++;
	}
	putchar('\n');

}
