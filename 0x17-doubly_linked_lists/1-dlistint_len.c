#include "lists.h"

/**
 * dlistint_len - counts number of elements in a doubly linked list
 * @h: head node of list to count
 * Return: size of list h
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
