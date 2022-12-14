#include "main.h"
/**
 * print_alphabet_x10 - Entry point _putchar
 * from a - z
 */
void print_alphabet_x10(void)
{
char time, i;
for (time = 0; time <= 9; time++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
