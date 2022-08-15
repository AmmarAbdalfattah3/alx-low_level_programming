#include "lists.h"
/**
 * print_listint - prints all the elemets of a listint_t list.
 * @h: pointer to the first node of linked lists.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int i;
i = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
i++;
}
return (i);
}
