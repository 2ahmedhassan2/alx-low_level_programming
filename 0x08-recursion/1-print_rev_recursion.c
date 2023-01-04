#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - checks uppercase
 * @s: parameter
 * Return: 0 if sucessful
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
