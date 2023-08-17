#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head node of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
