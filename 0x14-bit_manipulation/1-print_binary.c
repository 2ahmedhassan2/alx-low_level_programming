#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned int
 * Return: Binary rep
 */
void print_binary(unsigned long int n)
{
	unsigned long int n1 = n, mask = 1;
	int slen = 0; /*string length*/

	while (n1 > 0)
	{
		slen++;
		n1 >>= 1;
	}
	slen -= 1;

	if (slen > 0)
		mask = mask << slen;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
			_putchar('0');
		mask >>= 1;
	}
}
