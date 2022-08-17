#include "lists.h"
/**
 * listint_len - return the number of elemets in a linked listint_t list.
 * @h: pointer to the first node of linked lists.
 * Return: the number of element.
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



/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the first element.
 * @idx: is the index of the list.
 * @n:the value to be inserted.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int z = 0, h = 0;
listint_t *node, *temp1, *temp2;
node = malloc(sizeof(listint_t));
if (*head == NULL && idx != 0)
{
	return (NULL);
}
if (node != NULL)
{
	node->n = n;
	if (idx == 0)
	{
		temp1 = node, node->next = *head, *head = temp1;
		return (node);
	}
	temp1 = *head;
	while (temp1 != NULL)
	{
		if (z == idx - 1)
		{
			temp2 = temp1->next
			temp1->next = node, h = listint_len(*head);
			if (z == h)
			{
				node->next = NULL;
				return (node);
			}
			if (z > h)
			{
				free(node);
				return (NULL);
			}
			node->next = temp2;
			return (node);
		}
		temp1 = temp1->next;
		z++;
	}
}
return (NULL);
}
