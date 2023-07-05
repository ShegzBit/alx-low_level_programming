#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at index index
 * @head: start of the list
 * @index: position of whose node to delete
 * Return: node at indexth position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*create all neccessay variables*/
	unsigned int retval = 0;

	/*handle for if list is empty*/
	if (head == NULL)
		return (NULL);
	/*loop through the list while incrementing count*/
	while (head)
	{
	/*return current node when count = index*/
		if (index == retval)
			return (head);
		retval++;
		head = head->next;
	}
	/*if loop is exited without function termination NULL*/
	return (NULL);
}
