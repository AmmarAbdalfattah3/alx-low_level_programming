#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: is a first parameter
 * @s2: is a second parameter
 * Return: a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
char *g;
int len, f, l, b;
f = 0;
l = 0;
b = 0;
if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
while (s1[f] != '\0')
{
f++;
}
while (s2[l] != '\0')
{
l++;
}
len = f + l + 1;
g = malloc(sizeof(char) * len);
if (g)
{
for (b = 0; b < f; b++)
{
g[b] = s1[b];
}
for (b = 0; b < l; b++)
{
g[f] = s2[b];
f++;
}
return (g);
}
return (NULL);
}
