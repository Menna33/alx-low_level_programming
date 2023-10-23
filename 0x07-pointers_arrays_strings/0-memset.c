#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: concatenated string
 */

char *_memset(char *s, char b, unsigned int n)

{
int i;
while (i < n)
{
s[i] = b;
}
return (s);
}
