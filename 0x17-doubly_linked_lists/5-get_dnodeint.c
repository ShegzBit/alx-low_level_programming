#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at index
 * @head: head of list to search through
 * @index: index of node to find
 * Return: node at inde
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; head = head->next, i++)
		;
	return (head);
}
