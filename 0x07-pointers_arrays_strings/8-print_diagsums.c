#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - fills the first n bytes of the memory area
 * @a: pointer to the memory area to be filled
 * @size: constant byte to fill the memory area
 * @: number of bytes to be filled
 * Return: pointer to the memory area s
 */

void print_diagsums(int *a, int size)
{
int i;
int n = 0, m = 0, p = 1;
long int d1 = 0, d2 = 0;
for (i = 0; i < size; i++)
{
d1 += a[(size * m) + m];
m++;
}
for (i = 0; i < size; i++)
{
d2 += a[(size * n) + (size - p)];
n++;
p++;
}
printf("%ld, %ld\n", d1, d2);
}
