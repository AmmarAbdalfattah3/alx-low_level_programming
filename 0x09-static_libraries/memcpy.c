#include "main.h"
/**
 * _memcpy -copies memory area
 * @dest: is a first parameter
 * @src: is a second parameter
 * @n: is a third parameter
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
