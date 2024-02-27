#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if:
 * - There is one or more characters in the string 'b' that is not 0 or 1.
 * - 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
num = num * 2 + (*b++ - '0');
}
return (num);
}
