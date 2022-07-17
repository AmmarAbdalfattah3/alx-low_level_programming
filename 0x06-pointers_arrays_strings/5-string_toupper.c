#include "main.h"
/**
 * *string_toupper - changes all lowercase letters.
 * @n: is a parameter
 * Return: 0
 */
char *string_toupper(char *n)
{
int h;

for (h = 0; n[h + 32] != '\0'; h++)
{
printf("%s", n[h + 32]);
}
printf("\n");
}

