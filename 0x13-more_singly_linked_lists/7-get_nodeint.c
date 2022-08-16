#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first element.
 * @index: is the index of the node.
 * Return: returns the nth node, or (NULL) if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *node;
node = head;
for (i = 0; node != NULL; i++)
{
	if (i == index)
	{
		return (node);
	}
	node = node->next;
}
return (NULL);
}
