#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>

/**
 * is_digits - fills the first n bytes of the memory area
 * @s: pointer to the memory area to be filled
 * @: constant byte to fill the memory area
 * @: number of bytes to be fille
 * Return: pointer to the memory area s
 */

int isNotInteger(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (1);
i++;
}
return (0);
}

/**
 * main - adds all the given positive numbers
 * @argc: number of argument passed
 * @argv: array to store arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int sum = 0;
while (--argc)
{
if (isNotInteger(argv[argc]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}
printf("%i\n", sum);
return (0);
}
