#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the first node of linked lists.
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
unsigned int i;
i = 0;
if (h == NULL)
{
return (i);
}
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
