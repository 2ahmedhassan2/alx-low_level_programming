#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <main.h>

/**
 * multiply - checks uppercase
 * @num1: parameter
 * @num2: parameter
 * Return: Null
 */

long long multiply(char *num1, char *num2)
{
return atoll(num1) * atoll(num2);
}
int is_valid_number(char *num)
{
int i;
for (i = 0; i < strlen(num); i++)
{
if (!isdigit(num[i]))
{
return (0);
}
}
return (1);
}
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
exit(98);
}
if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
exit(98);
}
printf("%lld\n", multiply(argv[1], argv[2]));
return (0);
}
