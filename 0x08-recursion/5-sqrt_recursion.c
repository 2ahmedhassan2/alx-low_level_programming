#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - checks uppercase
 * @n: parameter
 * @i: parameter
 * Return: 0 if sucessful
 */

int _sqrt_recursion(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_recursion(n, i + 1));
}

/**
 * sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n
 */
int sqrt_recursion(int n)
{
return (_sqrt_recursion(n, 1));
}
