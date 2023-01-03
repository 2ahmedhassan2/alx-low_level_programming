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
int i, j = 0, k;
for (i = 0; haystack[i] != 0; i++)
{
k = i;
j = 0;
for (; needle[j] != 0; )
{
if (haystack[k++] == needle[j++])
{
continue;
}
break;
}
if (needle[j] == '\0')
return ((haystack + i));
}
return (NULL);
}
