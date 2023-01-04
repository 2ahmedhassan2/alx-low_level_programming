#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - checks uppercase
 * @s: parameter
 * Return: 0 if sucessful
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
