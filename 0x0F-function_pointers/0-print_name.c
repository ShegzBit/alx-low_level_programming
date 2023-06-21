#include "function_pointers.h"

/**
 * print_name - prints name using function passed as argument
 * @name: name to print
 * @f: function to utilize
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);

	f(name);
}
