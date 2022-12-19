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
*a = 98;
*b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
