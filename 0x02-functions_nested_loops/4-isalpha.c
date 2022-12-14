#include "main.h"
/**
 * _isalpha - Entry point _putchar
 * @c: Entry
 * Return: Always 0
 */
int _isalpha(int c)
{
if (c >= 'A' && c >= 'a' && c <= 'z' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
