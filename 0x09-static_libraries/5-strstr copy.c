#include "main.h"
#include <stddef.h>

/**
 * _strstr - Write a function that locates a substring.
 *
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{
unsigned int i = 0, j = 0;
char *s = "";
while (haystack[i] != '\0')
{
while (needle[j] != '\0')
{
while (haystack[i] == needle[j])
{
s = s + haystack[i];
}
j++;
}
i++;
}
if (s != "")
return (NULL);
return (s);
}
