#include "lists.h"

/**
 * add_node_end - node to the end of a list
 * @head: list to add node to
 * @str: content of node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp2, *prev;
	/*first create a temp and alloc to store the current list and new data*/
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL || head == NULL)
		return (NULL);
	temp->next = NULL;
	temp2 = *head;
	temp->str = (str == NULL) ? "(nil)" : strdup(str);
	temp->len = (str == NULL) ? 0 : strlen(str);
	/*equate head to temp to update the list*/
	if (*head == NULL)
	{
		*head =  temp;
	}
	else
	{
		while (temp2 != NULL)
		{
			prev = temp2;
			temp2 = temp2->next;
		}
		prev->next = temp;
	}
	return (temp);
}
