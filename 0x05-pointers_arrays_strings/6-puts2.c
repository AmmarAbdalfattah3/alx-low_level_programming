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
		putchar(*(str + (x * 2)));
		x++;
		if (x == 5)
			break;
	}
	putchar('\n');
}
