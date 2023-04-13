#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - simulates realloc
 * @ptr : previous ptr
 * @old_size : size of ptr
 * @new_size : size to be alloc
 * Return: void ptr to new address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *nPtr;
if (new_size == old_size)
{
return (ptr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
nPtr = malloc(new_size);
}
if (new_size > old_size)
{
nPtr = malloc(new_size);
memcpy(nPtr, ptr, old_size);
free(ptr);
}
else if (old_size > new_size)
{
memcpy(nPtr, ptr, new_size);
}
return (nPtr);
}
