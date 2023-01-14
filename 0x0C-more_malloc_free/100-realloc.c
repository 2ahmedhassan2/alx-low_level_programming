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
void *new_ptr;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
if (ptr != NULL)
{
size_t copy_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
free(ptr);
}
return (new_ptr);
}
