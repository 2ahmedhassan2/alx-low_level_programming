#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - checks uppercase
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1, l2, i, j;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
l1 = l2 = 0;
while (s1[l1] != '\0')
l1++;
while (s2[l2] != '\0')
l2++;
if (n >= l2)
n = 12;
str = (char *) malloc((l1 + n + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n && s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
