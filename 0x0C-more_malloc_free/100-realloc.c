#include "main.h"

/**
 * _realloc - custom realloc
 * @ptr: old ptr
 * @old_size: old size
 * @new_size: new size
 * Return: ret -> pointer to new
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/**
 * if new size = old size rturn ptr
 * if ptr = null alloc newsize
 * if ptr != null and new size is zero free ptr return NULL
 * if new size > old size copy all old into new
*/
	void *ret;
	int size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ret = malloc(new_size);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	size = (new_size < old_size) ? new_size : old_size;
	ret = malloc(new_size);
	if (ret == NULL)
		return (NULL);
	memcpy(ret, ptr, size);
	free(ptr);

	return (ret);
}
