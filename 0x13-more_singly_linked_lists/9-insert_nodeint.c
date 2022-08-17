#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the first element.
 * @idx: is the index of the list.
 * @n:the value to be inserted.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *node;
listint_t *temp;
node = malloc(sizeof(listint_t));
temp = node;
node->next = *head;
for (i = 0; node != NULL; i++)
{
	if (i == idx)
	{
		node->n = n;
		return (node);
	}
	node = node->next;
}
return (NULL);
}
