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
int sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d %d\n", sum1, sum2);
int matrix[3][3] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};

print_diagsums((int *)matrix, 3);
}
