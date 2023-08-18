#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);

    printf("/*Insert in between*/\n");
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);

    printf("/*Insert at beginning*/\n");
     printf("-----------------\n");
    insert_dnodeint_at_index(&head, 0, 4);
    print_dlistint(head);

    printf("/*Insert at second to last*/\n");
     printf("-----------------\n");
    insert_dnodeint_at_index(&head, 9, 4096);
    print_dlistint(head);

    printf("/*Insert at end*/\n");
     printf("-----------------\n");
    insert_dnodeint_at_index(&head, 11, 13);
    print_dlistint(head);

    printf("/*Insert at unreachable*/\n");
     printf("-----------------\n");
    insert_dnodeint_at_index(&head, 19, 13);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
