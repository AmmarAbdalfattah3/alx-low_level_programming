#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first element.
 * Return: returns the sum of all the data (n), or (0) if the list is empty.
 */
int sum_listint(listint_t *head)
{
listint_t *node;
int s;
s = 0;
node = head;
if (node == NULL)
{
return (0);
}
while (node != NULL)
{
s += node->n;
node = node->next;
}
return (s);
}
