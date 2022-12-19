#include "main.h"
#include <stdio.h>
/**
 * _strcpy - main
 * @src: first arg
 * Return: Always 0
 * @dest: second arg
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < src[i]; i++)
dest[i] = '\0';
return (dest);
}
