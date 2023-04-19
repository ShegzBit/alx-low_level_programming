#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - calls the function passed to it
 * @name : name of person to be printed
 * @f() : function to be called
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
