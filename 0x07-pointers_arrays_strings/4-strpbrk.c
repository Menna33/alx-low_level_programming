#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: first string
 * @accept: second string
 * Return: a pointer, or NULL
 */

char *_strpbrk(char *s, char *accept)

{
int i = 0, j = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (NULL);
}
