#include <stdlib.h>
#include <main.h>

/**
 * _calloc - checks uppercase
 * @nmemb: parameter
 * @size: parameter
 * Return: Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
