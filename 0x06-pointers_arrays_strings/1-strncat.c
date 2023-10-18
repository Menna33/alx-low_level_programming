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
while (dest[i] != '\0')
{
dest_length++;
}
while (i < n)
{
dest[dest_length - 1 + i] = src[i];
i++;
}
dest[dest_length - 1 + i] = '\0';
return (dest);
}
