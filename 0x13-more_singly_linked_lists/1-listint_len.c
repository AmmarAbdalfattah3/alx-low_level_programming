#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the first node of linked lists.
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
unsigned int i;
unsigned int x;
i = 0;
x = 0;
while (h != NULL)
{
if (h == NULL)
{
return (x);
}
h = h->next;
i++;
}
return (i);
}
