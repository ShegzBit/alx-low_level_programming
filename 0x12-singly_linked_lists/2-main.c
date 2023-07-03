#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void test_add_node(void)
{
	 list_t *head = NULL;
	   printf("Testing add_node:\n");
	      /* Test with a null head pointer */
	      printf("Null head pointer: %p\n", (void *)add_node(NULL, "Hello"));

	         /* Test with a null string */
		    printf("Null string: %p\n", (void *)add_node(&head, NULL));

		       /* Test with a valid head pointer and string */
		       printf("Valid head pointer and string: %p\n", (void *)add_node(&head, "Hello"));

		          /* Test with adding multiple nodes */
		          printf("Adding multiple nodes: %p\n", (void *)add_node(&head, "World"));
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
		    add_node(&head, "Alexandro");
		        add_node(&head, "Asaia");
			    add_node(&head, "Augustin");
			        add_node(&head, "Bennett");
				    add_node(&head, "Bilal");
				        add_node(&head, "Chandler");
					    add_node(&head, "Damian");
					        add_node(&head, "Daniel");
						    add_node(&head, "Dora");
						        add_node(&head, "Electra");
							    add_node(&head, "Gloria");
							        add_node(&head, "Joe");
								    add_node(&head, "John");
								        add_node(&head, "John");
									    add_node(&head, "Josquin");
									        add_node(&head, "Kris");
										    add_node(&head, "Marine");
										        add_node(&head, "Mason");
											    add_node(&head, "Praylin");
											        add_node(&head, "Rick");
												    add_node(&head, "Rick");
												        add_node(&head, "Rona");
													    add_node(&head, "Siphan");
													        add_node(&head, "Sravanthi");
														    add_node(&head, "Steven");
														        add_node(&head, "Tasneem");
															    add_node(&head, "William");
															        add_node(&head, "Zee");
																    print_list(head);
		
	test_add_node();															    return (0);
}
