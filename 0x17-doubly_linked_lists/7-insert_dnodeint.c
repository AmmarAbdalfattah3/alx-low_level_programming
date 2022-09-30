#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a doubly linked list.
 * @idx: the index of the list.
 * @n: the number to be inserted.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert_node, *node, *node2;
	unsigned int x = 0;

	node = *h;
	insert_node = malloc(sizeof(dlistint_t));
	if (insert_node != NULL)
	{
		insert_node->n = n;
		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}
		while (node->next)
		{
			if (x == (idx - 1))
			{
				node2 = node->next;
				node2->prev = insert_node;
				node->next = insert_node;
				insert_node->next = node2;
				insert_node->prev = node;
				return (insert_node);
			}
			node = node->next;
			x++;
		}
		if (node->next == NULL && idx == (x - 1))
		{
			return (add_dnodeint_end(h, n));
		}
		return (insert_node);
	}
	return (NULL);
}
