#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: is a parameter
 */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char temp;

	while (*(s + x) != '\0')
		x++;
	x--;
	while (y < x)
	{
		temp = *(s + y);
		*(s + y) = *(s + x);
		*(s + x) = temp;
		if (*(s + y) == '\0')
		{
			(*s)--;
			*s -= y;
			break;
		}
		y++;
		x--;
	}
	s[-y] -= 1;
	_putchar('\n');
}
