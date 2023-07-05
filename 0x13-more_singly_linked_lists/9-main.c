#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#define print_list print_listint

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

   /* head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);*/

    head = NULL;
    /* Test: insert at beginning of empty list */
    insert_nodeint_at_index(&head, 0, 98);
    print_list(head);

    /* Test: insert at beginning of non-empty list */
    insert_nodeint_at_index(&head, 0, 402);
    print_list(head);

    /* Test: insert in middle of list */
    insert_nodeint_at_index(&head, 1, 1024);
    print_list(head);

    /* Test: insert at end of list */
    insert_nodeint_at_index(&head, 3, 2048);
    print_list(head);

    /* Test: insert beyond end of list */
    insert_nodeint_at_index(&head, 5, 4096);
    if (insert_nodeint_at_index(&head, 5, 4096) == NULL)
	printf("Failed to insert node beyond end of list\n");
    print_list(head);


    return (0);
}
