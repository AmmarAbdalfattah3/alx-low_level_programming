#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: is a first argument
 * @s2: is a second argument
 * @n: is a third argument
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *an;
unsigned int i, x, r;
i = 0;
x = 0;
r = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[x] != '\0')
{
x++;
}
an = malloc(sizeof(*an) * (i + x + 1));
if (an)
{
for (r = 0; r < i; r++)
{
an[r] = s1[r];
}
for (r = 0; r < n && s2[r] != '\0'; r++)
{
an[i] = s2[r];
i++;
}
an[i++] = '\0';
return (an);
}
return (NULL);
}
