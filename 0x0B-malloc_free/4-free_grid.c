#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - checks uppercase
 * @grid: parameter
 * @height: parameter
 * Return: As function shows below
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
