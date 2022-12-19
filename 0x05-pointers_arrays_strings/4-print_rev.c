#include <stdio.h>
#include <string.h>
/**
 * print_rev - main
 * @s: parameter
 * Return: Always 0
 *
 */

void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
i -= 1;
while (i >= 0)
{
putchar(s[i]);
i--;
};
putchar('\n');
}
