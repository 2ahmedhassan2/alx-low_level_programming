#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
/* Base case: If n is 0, print 0 and return */
if (n == 0)
{
_putchar('0');
return;
}
/* Initialize a mask with the highest bit set */
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
/* Find the position of the most significant bit */
while ((mask & n) == 0)
{
mask >>= 1;
}
/* Print binary representation */
while (mask != 0)
{
if (mask & n)
_putchar('1');
else
_putchar('0');
mask >>= 1;
}
}
