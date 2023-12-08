#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: is a parameter
 */
void puts2(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		if (x % 2 == 0)
		{
			_putchar(*(str + x));
		}
		x++;
	}
	_putchar('\n');
}
