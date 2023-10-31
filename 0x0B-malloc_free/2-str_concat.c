#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string or null
 */

char *str_concat(char *s1, char *s2)
{
int len1, len2, i, j;
if (s1 == NULL)
len1 = 0;
else
len1 = strlen(s1);
if (s2 == NULL)
len2 = 0;
else
len2 = strlen(s2);
char *new_string;
new_string = malloc(sizeof(char) * (len1 + len2));
if (new_string == NULL)
return (NULL);
while (i < len1)
{
*(new_string + i) = *(s1 + i);
i++;
}
while (j < len2)
{
*(new_string + j) = *(s2 + j);
j++;
}
*(new_string + i + j) = '/0';
return (new_string);
}
