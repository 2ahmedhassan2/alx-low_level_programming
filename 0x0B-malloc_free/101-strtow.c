#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - checks uppercase
 * @str: parameter
 * @: parameter
 * Return: As function shows below
 */

char **strtow(char *str)
{
char **newstr;
int i = 0, j = 0, str_len = 0, words;
if (str == NULL || str[0] == '\0')
return (NULL);
while (*(str + str_len) != '\0')
str_len++;
words = word_count(str, str_len);
if (!words)
return (NULL);
newstr = malloc((words + 1) * sizeof(mallocmem(newstr, str, str_len);
while (i < str_len)
{
if (str[i] != ' ')
{
i = strncat_mod(newstr[j], str, i, str_len);
j++, i--;
}
i++;
}
newstr[words + 1] = NULL;
return (newstr);
}
