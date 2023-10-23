#include "main.h"

/**
 * _memset - copies n bytes from memory area src to memory area dest
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Return: destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
