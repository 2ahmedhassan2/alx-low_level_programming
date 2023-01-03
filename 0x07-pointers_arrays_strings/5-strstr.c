#include "main.h"
#include <stdion.h>

/**
 * _strstr - fills the first n bytes of the memory area
 * @needle: pointer to the memory area to be filled
 * @haystack: constant byte to fill the memory area
 * @: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}
