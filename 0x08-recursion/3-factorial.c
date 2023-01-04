#include "main.h"
#include <stdio.h>

/**
 * factorial - checks uppercase
 * @n: parameter
 * Return: 0 if sucessful
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
