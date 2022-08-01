#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: is a first parameter
 * @name: is a second parameter
 * @age: is a third parameter
 * @owner: is a fourth parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}

d.name = name;
d.age = age;
d.owner = owner;
}
