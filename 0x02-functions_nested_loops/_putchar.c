#include "main.h"
#include <unistd.h>

/**
 * _putchar - print chars
 *
 * Return: success 1, error -1
 */
int _putchar(int c)
{
return (write(1, &c, 1));
}
