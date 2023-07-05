#include "lists.h"
#include <assert.h>

int main()
{
listint_t *head = NULL;
int result = pop_listint(&head);

assert(result == 0);
assert(head == NULL);

head = malloc(sizeof(listint_t));
head->n = 4;
head->next = NULL;
result = pop_listint(&head);
assert(result == 4);
assert(head == NULL);

head = malloc(sizeof(listint_t));
head->n = 4;
head->next = malloc(sizeof(listint_t));
head->next->n = 6;
head->next->next = malloc(sizeof(listint_t));
head->next->next->n = 8;
head->next->next->next = NULL;
result = pop_listint(&head);
assert(result == 4);
assert(head != NULL);
assert(head->n == 6);
assert(head->next != NULL);
assert(head->next->n == 8);
assert(head->next->next == NULL);

head = malloc(sizeof(listint_t));
head->n = 4;
head->next = malloc(sizeof(listint_t));
head->next->n = 6;
head->next->next = malloc(sizeof(listint_t));
head->next->next->n = 8;
head->next->next->next = NULL;
result = pop_listint(&head);
assert(result == 4);
assert(head != NULL);
assert(head->n == 6);
assert(head->next != NULL);
assert(head->next->n == 8);
assert(head->next->next == NULL);
free_listint2(&head);
return 0;
}
