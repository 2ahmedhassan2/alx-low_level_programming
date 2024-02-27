#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string
 * Return: Converted number || 0
 */
unsigned int binary_to_uint(const char *b)
{
    int slen = 0, i;
    unsigned int total = 0;

    if (b == NULL)
        return (0);

    while (b[slen] != '\0')
    {
        if (b[slen] != '0' && b[slen] != '1')
            return (0); // Return 0 if any character is not '0' or '1'
        slen++;
    }
    slen -= 1;
    i = 0;

    while (b[i])
    {
        if (b[i] == '1')
        {
            total += (1 * (1 << slen));
        }
        i++;
        slen--;
    }
    return (total);
}
