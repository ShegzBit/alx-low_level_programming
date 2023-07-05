#include "lists.h"
#include <assert.h>

int main()
{
listint_t *head = NULL;
free_listint2(&head);
assert(head == NULL);

head = NULL;
free_listint2(&head);
assert(head == NULL);

head = malloc(sizeof(listint_t));
head->n = 4;
head->next = malloc(sizeof(listint_t));
head->next->n = 6;
head->next->next = malloc(sizeof(listint_t));
head->next->next->n = 8;
head->next->next->next = NULL;
free_listint2(&head);
assert(head == NULL);
return 0;
}
