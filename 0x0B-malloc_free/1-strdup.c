#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - checks uppercase
 * @str: parameter
 * @: parameter
 * Return: As function shows below
 */

char *_strdup(char *str)
{
int i = 1, j = 0;
char *snt;
if (str == NULL)
return (NULL);
while (str[i])
i++;
snt = (char *)malloc(i *sizeof(char) + 1);
if (snt == NULL)
return (NULL);
while (j < i)
{
snt[j] = str[j];
j++;
}
snt[j] = '\0';
return (snt);
}
