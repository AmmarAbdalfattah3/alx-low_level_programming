#include "main.h"
/**
 * *string_toupper - changes all lowercase letters.
 * @n: is a parameter
 * Return: n
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 'a' + 'A';
}
i++;
}
return (n);
}

