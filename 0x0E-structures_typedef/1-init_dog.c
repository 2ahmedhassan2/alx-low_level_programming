#include <stdio.h>
#include "dog.h"

/**
 * init_dog - checks uppercase
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: Null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
