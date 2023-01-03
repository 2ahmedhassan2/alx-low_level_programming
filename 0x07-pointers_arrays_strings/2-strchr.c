#include "main.h"

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
while (*s != '\0')
{
if (*s == c)
return (s);
}
if (*s == c)
{
return (s);
return ('\0');
}
}
