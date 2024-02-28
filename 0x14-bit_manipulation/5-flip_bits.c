#include "main.h"

/**
 * flip_bits - returns number of fliped bits from one number to another
 *
 * @n: number of flipped bits
 * @m: number of flips
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;
	unsigned long int max;
	unsigned long int XOR = n ^ m;
	unsigned long int a;

	for (a = 63; a != (unsigned long int)-1; a--)
	{
		max = XOR >> a;
		if (max & 1)
			flips++;
	}

	return (flips);
}
