#include "main.h"
/**
 * *string_toupper - changes all lowercase letters.
 * @n: is a parameter
 * Return: 0
 */
char *string_toupper(char *n)
{
int h;
int k;
for (h = 0; n[h] != '\0'; h++)
{
k = n[h] + 32;
printf("%c", k);
}
printf("\n");
return (0);
}

