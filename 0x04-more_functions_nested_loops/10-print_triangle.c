#include "main.h"

/**
<<<<<<< HEAD
* print_triangle - prints triangle
* @size: parameter
* Return: returns nothing
*/

void print_square(int size)
{
int inc1, inc2;
if (size > 0)
{
for (inc1 = 1; inc1 <= size; inc1++)
{
for ((inc2 = size - 1); inc2 > 0; inc2--)
{
putchar(' ');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
=======
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
} else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
>>>>>>> cbe2a03add149a2e1f86df0e7b777490848dba3a
}
}
