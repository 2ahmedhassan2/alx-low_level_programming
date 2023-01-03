#include "main.h"
#include <stdio.h>
/**
 * _strchr - fills the first n bytes of the memory area
 * @s: pointer to the memory area to be filled
 * @: constant byte to fill the memory area
 * @c: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; 1 ; i++)
{
if (s[i] == c)
return ((s + i));
if (s[i] == 0)
break;
}
return (NULL);
}
