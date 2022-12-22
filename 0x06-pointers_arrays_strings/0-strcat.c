#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @str: Arg
 * @dest: Arg
 * Return: value
 */

char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
a++;
dest[i] = src[a];
i++;
} while (src[a] != '\0');
return (dest);
}
