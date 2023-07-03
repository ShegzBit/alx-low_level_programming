#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* Test cases for print_list */
void test_print_list(void)
{
	list_t *head2 = malloc(sizeof(list_t));
	list_t *head3 = malloc(sizeof(list_t));
	list_t *head = malloc(sizeof(list_t));
	list_t *head4 = malloc(sizeof(list_t));
	    printf("Testing print_list:\n");
	        /* Test with an empty list */
	        printf("Empty list:\n");
		    print_list(NULL);
		        printf("\n");

			    /* Test with a list of one node with a non-null string */
			    printf("One node with non-null string:\n");
				    head->str = strdup("Hello");
				        head->len = 5;
					    head->next = NULL;
					        print_list(head);
						    printf("\n");

						        /* Test with a list of one node with a null string */
						        printf("One node with null string:\n");
							        head2->str = NULL;
								    head2->len = 0;
								        head2->next = NULL;
									    print_list(head2);
									        printf("\n");

										    /* Test with a list of multiple nodes with non-null strings */
										    printf("Multiple nodes with non-null strings:\n");
											    head3->str = strdup("Hello");
											        head3->len = 5;
												    head3->next = malloc(sizeof(list_t));
												        head3->next->str = strdup("World");
													    head3->next->len = 5;
													        head3->next->next = NULL;
														    print_list(head3);
														        printf("\n");

															    /* Test with a list of multiple nodes with some null strings */
															    printf("Multiple nodes with some null strings:\n");
																    head4->str = NULL;
																        head4->len = 0;
																	    head4->next = malloc(sizeof(list_t));
																	        head4->next->str = strdup("World");
																		    head4->next->len = 5;
																		        head4->next->next = NULL;
																			    print_list(head4);
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
						        n = print_list(head);
							    printf("-> %lu elements\n", n);

							        printf("\n");
								    free(new->str);
								        new->str = NULL;
									    n = print_list(head);
									        printf("-> %lu elements\n", n);

										    free(new);
										    test_print_list();

										        return (0);


}
