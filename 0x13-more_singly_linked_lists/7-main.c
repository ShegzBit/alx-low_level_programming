#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head, *result;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    node = get_nodeint_at_index(head, 5);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);

    /* Test with an empty list */
    head = NULL;
    result = get_nodeint_at_index(head, 0);
    assert(result == NULL);

    /* Test with a list that has one element and index 0 */
    head = malloc(sizeof(listint_t));
    head->n = 4;
    head->next = NULL;
    result = get_nodeint_at_index(head, 0);
    assert(result != NULL);
    assert(result->n == 4);
    free_listint2(&head);

    /* Test with a list that has one element and index 1 */
    head = malloc(sizeof(listint_t));
    head->n = 4;
    head->next = NULL;
    result = get_nodeint_at_index(head, 1);
    assert(result == NULL);
    free_listint2(&head);

    /* Test with a list that has multiple elements and a valid index */
    head = malloc(sizeof(listint_t));
    head->n = 4;
    head->next = malloc(sizeof(listint_t));
    head->next->n = 6;
    head->next->next = malloc(sizeof(listint_t));
    head->next->next->n = 8;
    head->next->next->next = NULL;
    result = get_nodeint_at_index(head, 1);
    assert(result != NULL);
    assert(result->n == 6);
    free_listint2(&head);

    /* Test with a list that has multiple elements and an invalid index */
    head = malloc(sizeof(listint_t));
    head->n = 4;
    head->next = malloc(sizeof(listint_t));
    head->next->n = 6;
    head->next->next = malloc(sizeof(listint_t));
    head->next->next->n = 8;
    head->next->next->next = NULL;
    result = get_nodeint_at_index(head, 3);
    assert(result == NULL);
    free_listint2(&head);

    printf("All tests passed!\n");

    return (0);
}
