#include "lists.h"
/**
 * sum_dlistint - returns the sum of data (n) of a  linked list.
 * @head: a pointer to the head of the linked list
 * Return: the sum of all data or there of in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;
	if (head == NULL)
	{
		return (0);
	}
	while (node)
	{
	sum += node->n;
	node = node->next;
	}

	return (sum);
}
