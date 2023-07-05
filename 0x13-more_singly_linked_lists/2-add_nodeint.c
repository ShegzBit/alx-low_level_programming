#include "lists.h"

/**
 * add_nodeint - adds a node to a list
 * @head: pointer to head of list
 * @n: data to add
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create needed variables*/
	listint_t *temp, *l_head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	l_head = *head;
	/*temp equate next to head current data and n to temp n*/
	temp->n = n;
	temp->next = l_head;
	/*update the list*/
	*(head) = temp;
	return (temp);
}
