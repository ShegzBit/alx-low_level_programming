#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void test_free_list(void)
{
	list_t *head = malloc(sizeof(list_t));
	list_t *head2 = malloc(sizeof(list_t));
	  printf("Testing free_list:\n");
	    /* Test with an empty list */
	    free_list(NULL);

	      /* Test with a list of one node */
	        head->str = strdup("Hello");
		  head->len = 5;
		    head->next = NULL;
		      free_list(head);

		        /* Test with a list of multiple nodes */
			  head2->str = strdup("Hello");
			    head2->len = 5;
			      head2->next = malloc(sizeof(list_t));
			        head2->next->str = strdup("World");
				  head2->next->len = 5;
				    head2->next->next = NULL;
				      free_list(head2);
}

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    list_t *head;

	        head = NULL;
		    add_node_end(&head, "Bob");
		        add_node_end(&head, "&");
			    add_node_end(&head, "Kris");
			        add_node_end(&head, "love");
				    add_node_end(&head, "asm");
				        print_list(head);
					    free_list(head);
					        head = NULL;
						test_free_list();
						    return (0);
}
