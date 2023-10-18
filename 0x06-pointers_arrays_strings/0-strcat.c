#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: argument string
 * @dest: argument string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int dest_length = 0;
while (dest[i] != '\0')
{
dest_length++;
}
while (src[i] != '\0')
{
dest[dest_length - 1 + i] = src[i];
i++;
}
dest[dest_length - 1 + i] = '\0';
return (dest);
}
