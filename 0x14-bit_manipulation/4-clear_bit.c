#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n: number
 * @index: index statring from 0
 * Return: 1 for success || -1 for erroe
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int max_1 = 1;

	i = (sizeof(unsigned long int) * 8);
	if (index > i)
		return (-1);

	max_1 = ~(max_1 << index);
	*n = (*n & max_1);

	return (1); /* for success */
}
