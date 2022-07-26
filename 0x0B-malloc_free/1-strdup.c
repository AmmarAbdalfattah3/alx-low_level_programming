#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory.
 * @str: is a parameter
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
char *k;
int n;
int y;
n = 0;
y = 0;

if (str == NULL)
{
return (NULL);
}
while (str[y] != '\0')
{
y++;
}
y++;

k = (char *)malloc(sizeof(char) * y);

if (k == NULL)
{
return (NULL);
}

while (n < y)
{
k[n] = str[n];
n++;
}

k[n++] = '\0';
return (k);
}
