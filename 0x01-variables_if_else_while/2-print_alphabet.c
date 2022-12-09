#cription: Print the alphabet in lowercase and uppercase on same line
* using putchar only thrice, followed by new line
* Return : 0
/**
* main - Prints a random number and states whether
*        it is positive, negative, or zero.
*
* Return: Always 0.
*/
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
alpha = 'A';
while (alpha <= 'Z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
