#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: is a first pointer
 * @src: is a second pointer
 * Return: a value of the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int rx;

	for (rx = 0; src[rx] != '\0'; rx++)
	{

		dest[rx] = src[rx];

	}

	dest[rx++] = '\0';

	return (dest);

}
