#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - checks uppercase
 * @x: parameter
 * @y: parameter
 * Return: 0 if sucessful
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
