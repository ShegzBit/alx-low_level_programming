#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: head of list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/*Loop while head is not null and free all spaces alloced through malloc*/
	while (*head != NULL)
	{
		temp = *head;
		(*head) = temp->next;
		free(temp);
	}
	*head = NULL;
}
