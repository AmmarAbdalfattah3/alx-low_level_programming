#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the first node of the linked lists
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
unsigned int i;
for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}
