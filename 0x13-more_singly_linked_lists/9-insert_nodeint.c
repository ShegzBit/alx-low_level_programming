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
	/*create all neccessary variables*/
	unsigned int retval = 0;
	listint_t *temp = malloc(sizeof(listint_t)), *l_head = *head;
	
	if (!temp || !head)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = l_head;
		*head = temp;
	}
	while (retval < idx - 1)
	{
		if (!(l_head))
			return (NULL);
		l_head = l_head->next;
		retval++;
	}
	temp->next = l_head->next;
	l_head->next = temp;
	return (temp);
}
