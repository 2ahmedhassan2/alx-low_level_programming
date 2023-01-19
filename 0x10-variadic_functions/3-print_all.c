#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints int
 * @format: arguments from print_all
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
int i = 0;
char c;
while ((c = format[i]) != '\0')
{
if (c == 'c')
{
printf("%c", va_arg(args, int));
}
else if (c == 'i')
{
printf("%d", va_arg(args, int));
}
else if (c == 'f')
{
printf("%f", va_arg(args, double));
}
else if (c == 's')
char *s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}
i++;
}
va_end(args);
printf("\n");
}
