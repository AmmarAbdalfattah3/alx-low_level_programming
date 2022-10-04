#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: is a first parameter
 * @src: is a second parameter
 * @n: is a third parameter
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (; src[i]  && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
