#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a node to the end of a list
 * @head: double pointer to the head of the linked list
 * @n: the data to be entered in the new node
 * Return: pointer to the added node if success of NULL if not
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	temp = *head;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(new_node));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			new_node->prev = NULL;
			return (new_node);
		}
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
	}
	return (NULL);
}
