#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - calls the function passed to it
 * @name : name of person to be printed
 * @f : function to be called
 */
void print_name(char *name, void(*f)(char *))
{
if (f != NULL)
{
f(name);
}
}