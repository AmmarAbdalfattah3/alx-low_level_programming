#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creat a structure
 * @name: a first variable
 * @owner: a second variable
 * @age: a third variable
 */
struct dog
{
char *name;
char *owner;
float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif