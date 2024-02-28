#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns value of given bit at given index
 * @n: number
 * @index: index starting from 0
 * Return: value of bit at index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int j;

	j = (sizeof(unsigned long int) * 8);
	if  (index > j)
		return (-1);

	i = ((n >> index) & 1);
	return (i);
}
