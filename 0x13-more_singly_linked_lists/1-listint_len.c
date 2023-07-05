#include "lists.h"

/**
 * listint_len - calculates the length of a linked list
 * @h: list of whose length to calculate
 * Return: length of h
 */
size_t listint_len(const listint_t *h)
{
	unsigned int retval = 0;

	while (h != NULL)
	{
		retval++;
		h = h->next;
	}
	return (retval);
}
