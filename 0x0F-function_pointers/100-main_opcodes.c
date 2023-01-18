#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *main -  prints the opcodes of its own main function.
 *@argc: integer value.
 *@argv: character value.
 *
 *Return: 0(success)
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *main_ptr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
main_ptr = (char *)main;
for (i = 0; i < bytes; i++)
printf("%02hhx", *(main_ptr + i));
printf("\n");
return (0);
}
