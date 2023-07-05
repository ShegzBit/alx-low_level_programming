#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: head of list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/*Loop while head is not null and free all spaces alloced through malloc*/
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
