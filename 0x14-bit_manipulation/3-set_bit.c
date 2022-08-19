#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the decimal value.
 * @index: is the index of the bit.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = ((sizeof(unsigned long int) * 8) - 1);

	if (index > bit)
	{
		return (-1);
	}

	*n = (*n | 1 << index);

	return (1);

}
