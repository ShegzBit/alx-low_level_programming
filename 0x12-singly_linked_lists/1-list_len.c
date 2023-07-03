#include "lists.h"

/**
 * list_len - calculates the number of nodes in list h
 * @h: list to caculate for
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	unsigned int retval = 0;

	while (h != NULL)
	{
		retval++;
		h = h->next;
	}
	return (retval);
}
