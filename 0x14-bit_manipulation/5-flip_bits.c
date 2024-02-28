#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: Difference in bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int bit_difference;

	bit_difference = n ^ m;

	do {
		i += (bit_difference & 1);
		bit_difference >>= 1;
	}
	while
		(bit_difference > 0);

	return (i);
}
