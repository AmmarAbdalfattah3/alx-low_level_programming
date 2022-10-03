#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: is a first parameter
 * @c: is a second parameter
 * Return: the character c in the string s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == '\0')
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
