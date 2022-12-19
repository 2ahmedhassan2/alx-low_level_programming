#include "main.h"
#include <stdio.h>
/**
 * swap_int - main
 * @a: parameter
 * Return: Always 0
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
