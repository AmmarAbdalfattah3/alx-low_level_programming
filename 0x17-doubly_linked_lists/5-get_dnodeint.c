#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the wanted node
 * Return: a pointer to the required node if success or NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	size_t i = 0;

	node = head;
	if (index == 0)
	{
		return (head);
	}
	while (node->next)
	{
		if (i == (index - 1))
		{
			return (node->next);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
