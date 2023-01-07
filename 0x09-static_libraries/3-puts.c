#include "main.h"
#include <stdio.h>
/**
 * _puts - main
 * @str: parameter
 * Return: Always 0
 *
 */
void _puts(char *str)
{
while (*str)
{
putchar(*str);
str++;
}
putchar('\n');
}
