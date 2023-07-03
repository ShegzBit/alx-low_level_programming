#include "lists.h"
void test_list_len(void)
{
	list_t *head = malloc(sizeof(list_t));
	list_t *head2 = malloc(sizeof(list_t));
	   printf("Testing list_len:\n");
	      /* Test with an empty list */
	      printf("Empty list: %lu\n", list_len(NULL));

	         /* Test with a list of one node */
		    head->str = strdup("Hello");
		       head->len = 5;
		          head->next = NULL;
			     printf("One node: %lu\n", list_len(head));

			        /* Test with a list of multiple nodes */
				   head2->str = strdup("Hello");
				      head2->len = 5;
				         head2->next = malloc(sizeof(list_t));
					    head2->next->str = strdup("World");
					       head2->next->len = 5;
					          head2->next->next = NULL;
						     printf("Multiple nodes: %lu\n", list_len(head2));
}
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    list_t *head;
	        list_t *new;
		    list_t hello = {"World", 5, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(list_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->str = strdup("Hello");
					    new->len = 5;
					        new->next = head;
						    head = new;
						        n = list_len(head);
							    printf("-> %lu elements\n", n);
							        free(new->str);
								    free(new);
								    test_list_len();
								        return (0);
}
