#include "lists.h"
/**
 * print_list - prints the nodes of a list
 * @h : pointer to start of a list
 * Return: length of list
 */
size_t print_list(list_t *h)
{
unsigned int i = 0;
if (h != NULL)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
i = 1 + print_list(h);
}
return (i);
}