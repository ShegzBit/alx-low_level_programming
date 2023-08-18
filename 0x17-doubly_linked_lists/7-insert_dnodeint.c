#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts an element at index idx
 * @h: pointer to head node of list
 * @idx: index to insert n into
 * @n: data to insert
 * Return: Address of new node | NULL on alloc fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node, *tmp_prev;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		new_node->prev = NULL;
		(*h) = new_node;
		return (new_node);
	}

	for (i = 0; i < idx; i++)
	{
		tmp_prev = temp;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new_node->next = temp;
	new_node->prev = tmp_prev;
	if (tmp_prev != NULL)
		tmp_prev->next = new_node;
	if (temp != NULL)
		temp->prev = new_node;
	return (new_node);
}
