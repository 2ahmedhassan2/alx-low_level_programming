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
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;
printf("%s\n", s1);
printf("%s", s2);
ptr = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s", ptr);
return (0);
}
