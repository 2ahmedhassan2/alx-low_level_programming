#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - fills the first n bytes of the memory area
 * @a: pointer to the memory area to be filled
 * Return: pointer to the memory area s
 */

void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++) {
for (int j = 0; j < 8; j++) {
printf("%c", a[i][j]);
}
printf("\n");
}
}
