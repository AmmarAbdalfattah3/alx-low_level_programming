#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: is a first parameter
 * @b: is a second parameter
 * @n: is a third parameter
 * Return: a pointer to the memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
