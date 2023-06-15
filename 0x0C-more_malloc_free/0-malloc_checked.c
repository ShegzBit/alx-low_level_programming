#include <stdlib.h>

/**
 * malloc_checked - allocates memory and checks on it
 * @b: amount of memory to allocate
 * Return: pointer to allocated mem
*/
void *malloc_checked(unsigned int b)
{
	void *ret = NULL;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);
	return (ret);
}
