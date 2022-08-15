#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer to the first element.
 * @n:the the integer to be inserted
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
listint_t *node;
node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
node->n = n;
temp = node;
node->next = *head;
*head = temp;
return (*head);
}
