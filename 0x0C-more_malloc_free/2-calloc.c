#include "main.h"


/**
 * _calloc - calloc
 * @nmemb: num of memb
 * @size: size of member
 * Return: pointer to mem address
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = calloc(nmemb, size);
	if (ret == NULL)
		return (NULL);
	return (ret);
}
