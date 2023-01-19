#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: Parameter
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
n = sum_them_all(2, 98, 1024);
printf("%d\n", n);
n = sum_them_all(4, 98, 1024, 402, -1024);
printf("%d\n", n);
if (n == 0)
return (0);
}
