#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @str: Arg
 * @dest: Arg
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
*dest[98] = "Hello ";
*src[] = "World!\n";
char *ptr;
printf("%s\n", dest);
printf("%s", src);
ptr = _strcat(dest, src);
printf("%s", dest);
printf("%s", src);
printf("%s", ptr);
return (0);
}
