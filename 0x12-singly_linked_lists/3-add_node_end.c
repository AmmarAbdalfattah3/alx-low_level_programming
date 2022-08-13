#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the first element
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *c_ptr;
c_ptr = *head;
if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (c_ptr->next != NULL)
{
c_ptr = c_ptr->next;
}
c_ptr->next = new_node;
return (new_node);

}

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
