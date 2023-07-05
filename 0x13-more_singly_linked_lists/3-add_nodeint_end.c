#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to start of the node
 * @n: data to add
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*create neccessary variables*/
	listint_t *temp, *l_head;

	l_head = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (l_head == NULL)
	{
		*head = temp;
		return (temp);
	}
	/*loop trhough the list until the next is null*/
	while (l_head->next != NULL)
	{
		l_head = l_head->next;
	}
	/*then change the temp next to null and update list*/
	l_head->next = temp;
	return (temp);
}
