#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: is a first parameter
 * @s2: is a second parameter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int m;
int cmp;

for (m = 0; s1[m] && s2[m]; m++)
{
cmp = (s1[m] - s2[m]);

if (s1[m] != s2[m])
{
return (cmp);
}
}
return (0);
}
