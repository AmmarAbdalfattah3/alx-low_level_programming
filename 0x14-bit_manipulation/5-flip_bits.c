#include "main.h"
/**
 * flip_bits - returns the number of bits.
 * @n: the first number.
 * @m: the second number.
 * Return: returns the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int i;
	unsigned long int result;

	i = 0;
	result = n ^ m;

	while (result != 0)
	{
		if ((result & 1) == 1)
		{
			i++;
		}
		result = result >> 1;
	}

	return (i);

}
