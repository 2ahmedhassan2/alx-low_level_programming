#include <stdlib.h>


/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory
 *     block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

/**
 * _calloc - checks uppercase
 * @nmemb: parameter
 * @size: parameter
 * Return: Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}
