#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: is a variable
 * Return: Always 0
 */
int _abs(int n)
{

	if (n < 0)
	{
		int r = n * -1;

		return (r);
	}

	return (n);
}
