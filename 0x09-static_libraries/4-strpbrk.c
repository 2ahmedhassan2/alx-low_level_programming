#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - fills the first n bytes of the memory area
 * @s: pointer to the memory area to be filled
 * @accept: constant byte to fill the memory area
 * @: number of bytes to be filled
 * Return: pointer to the memory area s
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
