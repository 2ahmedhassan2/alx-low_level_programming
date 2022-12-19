#include "main.h"
#include <stdio.h>
/**
 * rev_string - main
 * @s: parameter
 * Return: Always 0
 *
 */

void rev_string(char *s)
{
int i, k, tmp, len;
i = 0;
while (s[i] != '\0')
{
i++;
}
k = 0;
len = i;
i--;
while (k < len / 2)
{
tmp = s[k];
s[k] = s[i];
s[i] = tmp;
i--;
k++;
}
}
