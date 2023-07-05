#include "lists.h"
#define data n
#define printList print_listint

listint_t* createNode(int data) {
	    listint_t* newNode = (listint_t*)malloc(sizeof(listint_t));
	        if (newNode == NULL) {
			        printf("Memory allocation failed.\n");
				        exit(1);
					    }
		    newNode->data = data;
		        newNode->next = NULL;
			    return newNode;
}

/* Function to free the memory occupied by the listint_t list */
void freeList(listint_t* head) {
	    listint_t* temp;
	        while (head != NULL) {
			        temp = head;
				        head = head->next;
					        free(temp);
						    }
}

int main() {
	    /* Test case 1: Empty list */
	    listint_t* head = NULL;
	        printf("Test case 1: ");
		    printList(head);

		        /* Test case 2: List with a single element */
		        head = createNode(10);
			    printf("Test case 2: ");
			        printList(head);
				    freeList(head);

				        /* Test case 3: List with multiple elements */
				        head = createNode(1);
					    head->next = createNode(2);
					        head->next->next = createNode(3);
						    head->next->next->next = createNode(4);
						        printf("Test case 3: ");
							    printList(head);
							        freeList(head);

								    /* Test case 4: List with negative elements */
								    head = createNode(-5);
								        head->next = createNode(-10);
									    head->next->next = createNode(-15);
									        printf("Test case 4: ");
										    printList(head);
										        freeList(head);

											    /* Test case 5: List with repeating elements */
											    head = createNode(5);
											        head->next = createNode(5);
												    head->next->next = createNode(5);
												        printf("Test case 5: ");
													    printList(head);
													        freeList(head);

														    return 0;
}
