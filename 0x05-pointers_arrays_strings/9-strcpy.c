#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string to destination string
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
int j, i = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (*dest);
}
