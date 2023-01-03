#include <stdio.h>
#include "main.h"

/**
 * _strspn - the function locates character in string
 * @s: this string is used to locate the first occurence of c
 * @accept: the character to locate
 * Return: returns a pointer to the first occurence of c
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0')
{
char *temp = accept;
while (*temp != '\0')
{
if (*s == *temp)
{
count++;
break;
}
temp++;
}
if (*temp == '\0')
break;
s++;
return (count);
}
