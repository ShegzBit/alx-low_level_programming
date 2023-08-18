#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head node of list
 * @index: index of node to delete
 * Return: 1 on success | -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		if (temp != NULL)
			temp->prev = NULL;
		free(*head);
		temp->prev = NULL;
		*head = temp;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);



}
