#include "search_algos.h"


/**
 * get_jump - gets the right jump from a node
 * @node: node to jump from
 * @size: size of list
 * Return: the node after jumps || NULL
 */
listint_t **get_jump(listint_t *node, size_t size)
{
	int jump = sqrt(size), i;
	static listint_t *values[2];
	listint_t *temp = NULL;

	for (i = 0; i < jump && node; i++)
	{
		temp = node;
		node = node->next;
	}
	values[0] = node;
	values[1] = (!node) ? temp : node;

	return (values);
}

/**
 * jump_list - performs jump search on a linked list
 * @list: head of list to operate on
 * @size: size of list
 * @value: value tob searched
 * Return: node of value || NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start = NULL, **stop = &list;

	if (!list || !size)
		return (NULL);

	do {
		start = stop[0];
		stop = get_jump(stop[0], size);
		printf("Value checked at index [%ld] = [%d]\n",
				(stop[1])->index, (stop[1])->n);
	} while (stop[0] && (stop[1])->n <= value);

	while (start != stop[1])
	{
		printf("Value checked at index [%ld] = [%d]\n", start->index, start->n);
		if (value == start->n)
		{
			return (start);
		}
		start = start->next;
	}
	return (NULL);
}
