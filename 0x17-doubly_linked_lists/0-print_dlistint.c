#include "lists.h"
/**
 * print_dlistint - prints all element in a doubly linked list
 * @h: head of the linked list
 * Return: size of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
