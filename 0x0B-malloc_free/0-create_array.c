#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array -  a function that creates char arrays and inits. it
 * @size : size of array
 * @c : character to fill the space with
 * Return: returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int v = size;
int i = 0;
char *ptr = (char *)malloc(size * sizeof(char));
if (ptr == NULL || size == 0)
{
return (NULL);
}
while (i < v)
{
ptr[i] = c;
i++;
}
return (ptr);
}
