#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - fills the first n bytes of the memory area
 * @a: pointer to the memory area to be filled
 * Return: pointer to the memory area s
 */

void print_chessboard(char (*a)[8])
{
int sum1 = 0, sum2 = 0;
for (int i = 0; i < size; i++) {
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}
printf("Sum of the two diagonals: %d\n", sum1 + sum2);
}
