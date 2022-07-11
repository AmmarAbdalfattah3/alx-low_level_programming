#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is a parameter
 * Return: the length of a string
 */
int _strlen(char *s)
{
int len;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
