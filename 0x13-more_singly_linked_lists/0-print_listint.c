#include "lists.h"
/**
 * print_listint - prints a list of integer
 * @h: list to operate on
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int retval = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		retval++;
		h = h->next;
	}
	return (retval);
}
