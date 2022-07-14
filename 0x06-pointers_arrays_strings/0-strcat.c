#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: is a first pointer
 * @src: is a second pointer
 * Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int ox;
int lox;
int rx;
rx = 0;
for (ox = 0; dest[ox] != '\0'; ox++)
{
rx++;
}
for (lox = 0; src[lox] != '\0'; lox++)
{
dest[rx] = src[lox];
rx++;
}
return (dest);
}
