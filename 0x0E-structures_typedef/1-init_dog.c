#include <stdlib.h>
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
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
