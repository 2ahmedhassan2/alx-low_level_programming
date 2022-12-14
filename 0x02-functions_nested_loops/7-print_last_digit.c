#include "main.h"
/**
 * print_last_digit - Entry point _putchar
 * @n: Entry
 * Return: Always 0
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
