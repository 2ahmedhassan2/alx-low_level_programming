#include "main.h"
#include <stdio.h>
/**
 * print_array - main
 * @a: parameter
 * Return: Always 0
 * @n: Parameter
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i < n - 1)
printf(", ");
}
printf("\n");
}
