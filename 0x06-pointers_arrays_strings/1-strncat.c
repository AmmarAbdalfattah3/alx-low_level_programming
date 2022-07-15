#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @n: is a integer
 * @dest: is a first pointer
 * @src: is a second pointer
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int x = 0;
int k = 0;

for (i = 0; dest[i] != '\0'; i++)
{
x++;
}


while (k < n)
{
if (src[k] == '\0')
{
break;
}
dest[x] = src[k];
x++;
k++;
}

return (dest);
}
