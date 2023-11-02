#include <stdio.h>
#include <stdlib.h>
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
s3 = malloc(sizeof(char) * (strlen(s1) + n));
if (s3 == NULL)
return (NULL);
int index = 0, i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[index] != '\0')
{
index++;
s3[index] = s1[index];
}
if (n >= strlen(s2))
{
while (i < strlen(s2))
{
s3[index + i] = s2[i];
i++;
}
}
else
{
while (j < n)
{
s3[index + j] = s2[j];
j++;
}
}
}
