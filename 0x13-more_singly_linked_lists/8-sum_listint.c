#include "lists.h"

/**
 * sum_listint - sums up all data stored in a listint list
 * @head: start point of list
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	/*creates all neccessary variables*/
	int retval = 0;

	/*loop through list and sum data*/
	while (head)
	{
		retval += head->n;
		head = head->next;
	}
	return (retval);
}
