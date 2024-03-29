#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pionter to the first node of the linked lists
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int n;
n = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%i] %s\n", h->len, h->str);
}
h = h->next;
n++;
}
return (n);
}
