#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * Return: 1 or 0
 * @c: is a variable
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
