#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from s2
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
int size2 = 0, size1 = 0;
int index = 0, i = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n >= strlen(s2))
size2 = strlen(s2);
else
size2 = n;
size1 = strlen(s1);
s3 = malloc(sizeof(char) * (size1 + size2 + 1));
if (s3 == NULL)
return (NULL);
while (s1[index] != '\0')
{
s3[index] = s1[index];
index++;
}

while (i < size2)
{
s3[index + i] = s2[i];
i++;
}
s3[index + i] = '\0';
return (s3);
}
