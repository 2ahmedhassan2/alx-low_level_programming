#include <stdlib.h>

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
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
