#include "lists.h"

/**
 * print_list - counts the amount of node in a linked list
 * @h: pointer to the head of the list
 * Return: returns number of nodes in h
 */
size_t print_list(const list_t *h)
{
	int retval = 0, len;
	char *str;

	while (h != NULL)
	{
		str = (h->str == NULL) ? "(nil)" : h->str;
		len = (h->str == NULL) ? 0 : strlen(h->str);
		printf("[%d] %s\n", len, str);
		retval++;
		h = h->next;

	}
	return (retval);
}

