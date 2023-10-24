#include "main.h"
#include <stddef.h>

/**
 * _strspn - returns the number of bytes in the initial segment
 * @s: first string
 * @accept: second string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)

{
int i = 0, j = 0, count = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
}
if (count > 0 && s[i] != accept[j])
return (count);
j++;
}
i++;
}
return (count);
}
