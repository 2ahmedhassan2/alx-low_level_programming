#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fills the first n bytes of the memory area
 * @argc: pointer to the memory area to be filled
 * @argv: constant byte to fill the memory area
 * @: number of bytes to be fille
 * Return: pointer to the memory area s
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
int cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
int coins = 0;
while (cents >= 25)
{
cents -= 25;
coins++;
}
while (cents >= 10)
{
cents -= 10;
coins++;
}
while (cents >= 5)
{
cents -= 5;
coins++;
}
while (cents >= 2)
{
cents -= 2;
coins++;
}
coins += cents;
printf("%d\n", coins);
return (0);
}
