#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <main.h>

/**
 * is_valid_number - checks uppercase
 * @num: parameter
 * @: parameter
 * Return: Null
 */

int is_valid_number(char *num)
{
int i;
int len = strlen(num);
for (i = 0; i < len; i++)
{
if (!isdigit(num[i]))
{
return (0);
}
}
return (1);
}

/**
 * multiply - checks uppercase
 * @num1: parameter
 * @num2: parameter
 * Return: Null
 */

long long multiply(char *num1, char *num2)
{
return (atoll(num1) * atoll(num2));
}

/**
 * main - checks uppercase
 * @argc: parameter
 * @argv: parameter
 * Return: Null
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
exit(EXIT_FAILURE);
}
printf("%lld\n", multiply(argv[1], argv[2]));
return (EXIT_SUCCESS);
}
