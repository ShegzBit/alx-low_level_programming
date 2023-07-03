#include "lists.h"

/**
 *free_list - frees a list
 *@head: head of list to free
 */
void free_list(list_t *head)
{
	/*Create a pointer with value head to avoid tampering with the pass pointer*/
	list_t *temp = head;
	/*loop through the list through it free one after the other*/
	while (temp != NULL)
	{
		if (temp->str != NULL)
			free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
