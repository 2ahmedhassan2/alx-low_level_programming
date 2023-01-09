#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - checks uppercase
 * @size: parameter
 * @c: parameter
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (int i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
