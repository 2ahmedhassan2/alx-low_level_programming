#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
long double mul;
int i, j;
char *end;
if (argc != 3)
{
printf("Error: Invalid number of arguments\n");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]) && argv[i][j] != '.')
{
printf("Error: Invalid argument\n");
exit(98);
}
}
}
errno = 0;
mul = strtold(argv[1], &end);
if (errno == ERANGE || *end != '\0')
{
printf("Error: Invalid argument\n");
exit(98);
}
errno = 0;
mul *= strtold(argv[2], &end);
if (errno == ERANGE || *end != '\0')
{
printf("Error: Invalid argument\n");
exit(98);
}
printf("%.10Lf\n", mul);
return (0);
}
