#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the decimal value.
 * @index: is the index of the bit.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;
	unsigned long int value;

	bit = ((sizeof(unsigned long int) * 8) - 1);

	if (index > bit)
	{
		return (-1);
	}

	value = ((n >> index) & 1);

	return (value);

}
