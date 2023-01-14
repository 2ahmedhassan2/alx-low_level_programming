#include <stdlib.h>

/**
 * _realloc - checks uppercase
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: Null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
}
if (new_size > old_size && (ptr != NULL))
{
nptr = malloc(new_size);
if (nptr == NULL)
return (nptr);
for (i = 0; i < old_size; i++)
nptr[i] = *((char *) ptr + 1);
free(ptr);
}
return (nptr);
}
