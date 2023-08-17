#include "lists.h"

/**
 * sum_dlistint - sums all elements in an integer list
 * @head: head node of list operate on
 * Return: sum of all integers in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
