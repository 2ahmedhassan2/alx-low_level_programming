#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - main
 * @s: parameter
 * Return: Always 0
 *
 */

int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
