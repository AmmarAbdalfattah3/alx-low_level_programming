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
typedef struct dog dog_t;
void init_dog(struct dog *d, cihar *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
