#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to the first element
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
}
