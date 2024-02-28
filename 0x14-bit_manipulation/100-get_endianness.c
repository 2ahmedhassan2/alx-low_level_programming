#include "main.h"
/**
 *
 * get_endianness - checks the endianness
 * 
 * Return: 1 for little endian || 0 for big endian
 */
int get_endianness(void)
{
unsigned long int n = 1;
return (*(char *)&n);
}
