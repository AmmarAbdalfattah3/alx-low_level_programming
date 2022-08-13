#include "lists.h"
/**
 * _strlen - finds a length of the string
 * @str: is a parameter
 * Return: a length of the string
 */
int _strlen(const char *str)
{
int b;
b = 0;
while (str[b])
{
b++;
}
return (b);
}
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to the first element
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 */



list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
list_t *new_node;
new_node = malloc(sizeof(list_t));

if (str == NULL)
{
return (NULL);
}


if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = _strlen(str);
temp = new_node;
new_node->next = *head;
*head = temp;

return (*head);
}
