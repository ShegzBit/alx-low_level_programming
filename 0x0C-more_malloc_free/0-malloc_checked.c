#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - returns a void pointer
 * @b : size to malloc
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
void *mall = malloc(b);
if (mall == NULL)
{
exit(98);
}
else
{
return (mall);
}
}
