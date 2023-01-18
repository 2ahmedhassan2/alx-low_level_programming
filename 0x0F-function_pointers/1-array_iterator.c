#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - check if a number is equal to 98
 * @array: the integer to check
 * @size: Parameter
 * @action: Parameter
 * Return: 0 if false, something else otherwise.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
