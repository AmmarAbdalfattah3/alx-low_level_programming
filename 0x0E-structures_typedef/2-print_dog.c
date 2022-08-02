#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: is a parameter
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
{
printf("Name:%s\n", d->name);
}
printf("Name: (nil)\n");
if (d->age >= 0)
{
printf("Age:%f\n", d->age);
}
printf("Age: (nil)\n");
if (d->owner)
{
printf("Owner:%s\n", d->owner);
}
printf("Owner: (nil)\n");
}
