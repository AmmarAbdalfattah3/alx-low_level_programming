#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: is a first pointer
 * @src: is a second pointer
 * Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; i <= dest; i++)
{
i++;
dest++;
}
dest -= 1;
for (j = 0; j <= src; J++)
{
j++;
src++;
}
dest = src;
return (&dest);
}
