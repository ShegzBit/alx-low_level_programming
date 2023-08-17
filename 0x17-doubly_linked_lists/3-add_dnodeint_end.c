#include "lists.h"

/**
 * add_dnodeint_end - adds a data to the end of a linked list
 * @head: head node of list for insertion
 * @n: data to add to end of list
 * Return: Pointer new node | Tail of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *store = *head;

	if (head == NULL)
		return (NULL);
	/**Allocate space for new node and check for alloc success*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (store->next != NULL)
		store = store->next;

	store->next = new_node;
	new_node->prev = store;

	return (new_node);
}
