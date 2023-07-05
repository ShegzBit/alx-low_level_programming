#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: head of list to free
 */
void free_listint(listint_t *head)
{
	/*Loop while head is not null and free all spaces alloced through malloc*/
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
