#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - checks uppercase
 * @d: parameter
 * Return: Null
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
}
