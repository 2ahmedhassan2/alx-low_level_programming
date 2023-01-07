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

int is_digits(char *s) {
int len = strlen(s);
for (int i = 0; i < len; i++) {
if (!isdigit(s[i])) {
return (0);
}
}
return 1;
}

/**
 * main - fills the first n bytes of the memory area
 * @argc: pointer to the memory area to be filled
 * @argv: constant byte to fill the memory area
 * @: number of bytes to be fille
 * Return: pointer to the memory area s
 */

int main(int argc, char *argv[]) {
if (argc == 1) {
printf("0\n");
return (0);
}
int sum = 0;
for (int i = 1; i < argc; i++) {
if (!is_digits(argv[i])) {
printf("Error\n");
return (1);
}
int n = atoi(argv[i]);
if (n < 0) {
printf("Error\n");
return (1);
}
sum += n;
}
printf("%d\n", sum);
return (0);
}
