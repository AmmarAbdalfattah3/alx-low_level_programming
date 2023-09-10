#include <stdio.h>
#include <main.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int x, y, d;

	if (size > 0)
	{
		x = 1;
		while (x <= size)
		{
			y = 0;
			while (y < size)
			{
				printf(" ");
				if (y == (size - x))
				{
					d = 0;
					while (d < x)
					{
						printf("%c", 35);
						d++;
					}
				}
				y++;
			}
			_putchar('\n');
			x++;
		}

	}
	else
	{
		printf("\n");
	}
	return (0);
}
