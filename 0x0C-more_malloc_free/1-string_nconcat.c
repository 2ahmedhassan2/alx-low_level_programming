#include <stdlib.h>
#include <string.h>
#include <main.h>

/**
 * string_nconcat - checks uppercase
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int s1_len = 0, s2_len = 0;
char *concat_str;
if (s1 != NULL)
{
s1_len = strlen(s1);
}
if (s2 != NULL)
{
s2_len = strlen(s2);
}
if (n >= s2_len)
{
n = s2_len;
}
concat_str = malloc(s1_len + n + 1);
if (concat_str == NULL)
{
return (NULL);
}
strncpy(concat_str, s1, s1_len);
strncpy(concat_str + s1_len, s2, n);
concat_str[s1_len + n] = '\0';
return (concat_str);
}
