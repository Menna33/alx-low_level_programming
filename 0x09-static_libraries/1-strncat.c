#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: argument string
 * @src: argument string
 * @n: number of characters to be concatinated
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int dest_length = 0;
while (dest[dest_length] != '\0')
{
dest_length++;
}
while (i < n && src[i] != '\0')
{
dest[dest_length + i] = src[i];
i++;
}
if (i < n)
{
dest[dest_length + i] = '\0';
}

return (dest);
}
