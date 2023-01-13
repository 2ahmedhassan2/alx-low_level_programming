#include <stdlib.h>
#include <main.h>

/**
 * array_range - checks uppercase
 * @min: parameter
 * @max: parameter
 * Return: Null
 */

int *array_range(int min, int max)
{
int *arr, i;
if (min > max)
{
return (NULL);
}
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i <= max - min; i++)
{
arr[i] = min + i;
}
return (arr);
}
