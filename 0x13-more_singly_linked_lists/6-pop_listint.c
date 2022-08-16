#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer to the first element.
 * Return: returns the head node’s data (n), or (0) if it was empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (0);
	}
	while (*head != NULL)
	{
		temp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(temp);
		return (i);
	}
	return (0);
}
