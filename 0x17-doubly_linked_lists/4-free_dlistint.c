#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to a doubly linked list.
 */
void free_dlistint(dlistint_t *head);
{
	dlistint_t *free_node;

	while (head != NULL)
	{
		free_node = head;
		free(free_node);
		head = head->next;
	}
}
