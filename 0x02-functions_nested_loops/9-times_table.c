#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - main block
 * Description: prints all single number of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
void times_table(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
