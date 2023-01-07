#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * main - fills the first n bytes of the memory area
 * @argc: pointer to the memory area to be filled
 * @argv: constant byte to fill the memory area
 * @: number of bytes to be fille
 * Return: pointer to the memory area s
 */

int main(int argc, char *argv[]) {
if (argc != 3) {
printf("Error\n");
return 1;
}
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int result = a * b;
printf("%d\n", result);
return 0;
}
