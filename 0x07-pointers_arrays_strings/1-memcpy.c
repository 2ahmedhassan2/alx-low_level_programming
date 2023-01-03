#include "main.h"

/**
 * _memcpy - fills the first n bytes of the memory area
 * @dest: pointer to the memory area to be filled
 * @src: constant byte to fill the memory area
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
