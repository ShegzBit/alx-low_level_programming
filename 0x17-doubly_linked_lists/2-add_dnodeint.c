#include "lists.h"

/**
 * add_dnodeint - adds a new data to the beginning of a list
 * @head: head of list to add data to
 * @n: data to add to list
 * Return: pointer to new node being added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	temp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = temp;
	(*head) = temp;
	return (temp);

}
