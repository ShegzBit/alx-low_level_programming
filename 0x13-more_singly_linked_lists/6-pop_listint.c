#include "lists.h"

/**
 * pop_listint - deletes the head of a listint list
 * @head: pointer to head of list
 * Return: data stored ibn the deleted node
 */
int pop_listint(listint_t **head)
{
	/*create the needed variables*/
	listint_t *temp;
	int n_temp = 0;

	/*Handle for list is empty*/
	if (head == NULL || *head == NULL)
		return (0);
	/*store the next and n of head in a temp variable and free head*/
	temp = (*head)->next;
	n_temp = (*head)->n;
	free(*head);
	/*update list and return*/
	*head = temp;
	return (n_temp);

}
