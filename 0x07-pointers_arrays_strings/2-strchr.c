#include "main.h"
#include <stddef.h>

/**
 * _strchr - fills memory with a constant byte
 * @s: sting
 * @c: character to search on the string
 * Return: a pointer, or NULL
 */

char *_strchr(char *s, char c)

{
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
if (s[i] == 0)
{
return (NULL);
}
i++;
}
return (NULL);
}
