#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: is a first parameter
 * @accept: is a second parameter
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int in;
int n;
n = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (in = 0; accept[in] != '\0'; in++)
{
if (s[i] == accept[in])
n++;
}
else
return (n);
}
}
return (n);
}
