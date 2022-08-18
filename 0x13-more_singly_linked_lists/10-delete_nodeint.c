#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: pointer to pointer to the first element.
 * @index: is the index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp1, *temp2;

	temp1 = *head;
	temp2 = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		return (1);
	}

	while (temp1 != NULL)
	{
		if (i == index)
		{
			temp2->next = temp1->next;
			free(temp1);
			return (1);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	return (-1);
}
