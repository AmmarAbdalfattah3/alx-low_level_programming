#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: is a parameter
 */
void rev_string(char *s)
{
	char *k;

	k = s;

	while (*s != '\0')
	{
		s++;
	}
	s -= 1;

	while (k <= s)
	{
		s--;
	}
	_putchar('\n');
}
