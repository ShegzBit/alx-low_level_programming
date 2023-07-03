#include "lists.h"

/**
 * add_node - node to list
 * @head: list to add node to
 * @str: content of node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	/*first create a temp and alloc to store the current listand new data*/
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL || head == NULL)
		return (NULL);
	temp->next = *head;
	temp->str = (str == NULL) ? "(nil)" : strdup(str);
	temp->len = (str == NULL) ? 0 : strlen(str);
	/*equate head to temp to update the list*/
	*head = temp;
	return (temp);
}
