#include "main.h"
/**
 * @s: pointer to the first char of the string
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
