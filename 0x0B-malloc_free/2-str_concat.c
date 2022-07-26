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
int len;
int f;
int l;
f = 0;
l = 0;
while (s1[f] != '\0')
{
f++;
}
while (s2[l] != '\0')
{
l++;
}

len = f + l;
g = (char *)malloc(sizeof(char) * len);
if (g == 0)
{
return (NULL);
}
for (f = 0; s1[f] != '\0'; f++)
{
g[f] = s1[f];
}
for (l = 0; s2[l] != '\0'; l++)
{
g[f + l] = s2[l];
}
return (g);
}
