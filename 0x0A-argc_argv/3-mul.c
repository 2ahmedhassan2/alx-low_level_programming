#include <stdio.h>
#include <stdlib.h>

/**
 * main - fills the first n bytes of the memory area
 * @argc: pointer to the memory area to be filled
 * @argv: constant byte to fill the memory area
 * @: number of bytes to be fille
 * Return: pointer to the memory area s
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int x, y;
if (argc <= 2)
{
printf("%s\n", "Error");
return (1);
}
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
