#include "function_pointers.h"

/**
 * print_name - prints name using function passed as argument
 * @name: name to print
 * @f: function to utilize
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
}
