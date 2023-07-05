listint_t *head = malloc(sizeof(listint_t));
head->n = 4;
head->next = NULL;
free_listint2(&head);
assert(head == NULL);

