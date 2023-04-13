#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - simulates calloc
 * @nmemb : num of element
 * @size : size of byte
 * Return: void ptr to address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i __attribute__((unused));
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
