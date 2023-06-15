#include "main.h"

/*
Write a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL*/

/**
 * check if nmemb or size = 0 then return null
 * allocate memory of nmemb * size
 * check for alloc failure 
 * loop through the array and init to 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ret;

    if (nmemb == 0 || size == 0)
        return (NULL);
    ret = calloc(nmemb, size);
    if (ret == NULL)
        return(NULL);
    return (ret);
}