#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 * @h: pointer to a doubly linked list.
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
return (i);
}
