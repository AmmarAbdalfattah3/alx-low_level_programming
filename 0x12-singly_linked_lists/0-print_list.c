#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: is a parameter
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int n;
for (n = 0; h != NULL; n++)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
}
return (n);
}
