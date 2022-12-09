#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */

/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
printf("%i Last digit of", n, "is", n, "and is greater than 5");
else if (n == 0)
printf("%i Last digit of", n, "is", n, "and is 0");
else if (n < 6 && n != 0)
printf("%i Last digit of", n, "is", n, "and is less than 6 and not 0");
return (0);
}
