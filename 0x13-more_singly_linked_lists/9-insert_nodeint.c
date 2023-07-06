#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index index
 * @head: start of the list
 * @idx: position where node is to be added
 * @n: data to add
 * Return: node at indexth position
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}

	(*head)->next = insert_nodeint_at_index(&((*head)->next), idx - 1, n);
	return (new_node);
}
