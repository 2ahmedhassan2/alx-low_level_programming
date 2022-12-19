#include "main.h"
#include <stdio.h>
/**
 * puts_half - main
 * @str: parameter
 * Return: Always 0
 *
 */
void puts_half(char *str)
{
int i, len;
i = 0;
while (str[i] != '\0')
{
i++;
}
len = i;
if (len % 2 != 0)
len = (len + 1) / 2;
else
len /= 2;
while (len < i)
{
len++;
putchar(*(str + len - 1));
}
putchar('\n');
}
