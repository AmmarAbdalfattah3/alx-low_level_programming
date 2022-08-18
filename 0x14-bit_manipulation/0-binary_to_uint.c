#include <main.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a stirng
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, numb = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			numb <<= 1;
			if (b[i] == '1')
			{
				numb += 1;
			}
			else
			{
				continue;
			}
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (numb);
}
