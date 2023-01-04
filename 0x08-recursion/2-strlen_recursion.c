#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - checks uppercase
 * @s: parameter
 * Return: 0 if sucessful
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
