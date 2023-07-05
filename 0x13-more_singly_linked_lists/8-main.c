#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "lists.h"

int main(void)
{
    listint_t *head;
    int result;
    int sum;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&head);

    /* Test with an empty list */
    head = NULL;
    result = sum_listint(head);
    assert(result == 0);

    /* Test with a list that has one element */
    head = malloc(sizeof(listint_t));
    head->n = 4;
    head->next = NULL;
    result = sum_listint(head);
    assert(result == 4);
    free_listint2(&head);

    /* Test with a list that has multiple elements */
    head = malloc(sizeof(listint_t));
    head->n = 4;
    head->next = malloc(sizeof(listint_t));
    head->next->n = 6;
    head->next->next = malloc(sizeof(listint_t));
    head->next->next->n = 8;
    head->next->next->next = NULL;
    result = sum_listint(head);
    assert(result == 18);
    free_listint2(&head);

    printf("All tests passed!\n");

    return (0);
}

