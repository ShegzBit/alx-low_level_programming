#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* Test cases for add_node_end */
void test_add_node_end(void)
{
	 list_t *head = NULL;
	   printf("Testing add_node_end:\n");
	      /* Test with a null head pointer */
	      printf("Null head pointer: %p\n", (void *)add_node_end(NULL, "Hello"));

	         /* Test with a null string */
		    printf("Null string: %p\n", (void *)add_node_end(&head, NULL));

		       /* Test with a valid head pointer and string */
		       printf("Valid head pointer and string: %p\n", (void *)add_node_end(&head, "Hello"));

		          /* Test with adding multiple nodes */
		          printf("Adding multiple nodes: %p\n", (void *)add_node_end(&head, "World"));
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
		    add_node_end(&head, "Anne");
		        add_node_end(&head, "Colton");
			    add_node_end(&head, "Corbin");
			        add_node_end(&head, "Daniel");
				    add_node_end(&head, "Danton");
				        add_node_end(&head, "David");
					    add_node_end(&head, "Gary");
					        add_node_end(&head, "Holden");
						    add_node_end(&head, "Ian");
						        add_node_end(&head, "Ian");
							    add_node_end(&head, "Jay");
							        add_node_end(&head, "Jennie");
								    add_node_end(&head, "Jimmy");
								        add_node_end(&head, "Justin");
									    add_node_end(&head, "Kalson");
									        add_node_end(&head, "Kina");
										    add_node_end(&head, "Matthew");
										        add_node_end(&head, "Max");
											    add_node_end(&head, "Michael");
											        add_node_end(&head, "Ntuj");
												    add_node_end(&head, "Philip");
												        add_node_end(&head, "Richard");
													    add_node_end(&head, "Samantha");
													        add_node_end(&head, "Stuart");
														    add_node_end(&head, "Swati");
														        add_node_end(&head, "Timothy");
															    add_node_end(&head, "Victor");
															        add_node_end(&head, "Walton");
																    print_list(head);
	test_add_node_end();
		    														    return (0);
}
