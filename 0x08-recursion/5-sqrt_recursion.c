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
 * sqrt_recursion - check
 * @n: parameter
 * Return: 0 if sucessful
 */
int sqrt_recursion(int n)
{
return (_sqrt_recursion(n, 1));
}
