#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: is a first parameter
 * @age: is a second parameter
 * @owner: is a third parameter
 * Return: the address of the struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *stupid_dog;
char *na, *ow;
unsigned int x;
na = malloc(sizeof(char) * (strlen(name) + 1));
if (na == NULL)
{
free(na);
return (NULL);
}
ow = malloc(sizeof(char) * (strlen(owner) + 1));
if (ow == NULL)
{
free(ow);
return (NULL);
}
stupid_dog = malloc(sizeof(*stupid_dog));
if (stupid_dog)
{
x = 0;
while (name[x] != '\0')
{
na[x] = name[x];
x++;
}
na[x] = '\0';
x = 0;
while (owner[x] != '\0')
{
ow[x] = owner[x];
x++;
}
ow[x] = '\0';
stupid_dog->name = na;
stupid_dog->age = age;
stupid_dog->owner = ow;
return (stupid_dog);
}
free(na);
free(ow);
return (NULL);
}
