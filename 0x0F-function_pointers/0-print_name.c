#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: is a first parameter
 * @f: is a second parameter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
