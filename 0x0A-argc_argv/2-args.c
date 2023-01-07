#include <stdio.h>

/**
 * main - fills the first n bytes of the memory area
 * @arg: pointer to the memory area to be filled
 * @argv: constant byte to fill the memory area
 * @: number of bytes to be filled
 * Return: pointer to the memory area s
 */

int main(int arg, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
