#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to be copied
 *
 * Return: pointer to the array
 */

char *_strdup(char *str)
{
char *new_str = malloc(sizeof(char) * strlen(str));
unsigned int i;
if (str == NULL)
return (NULL);
for (i = 0; i < strlen(str); i++)
{
*(new_str + i) = *(str + i);
}
return (new_str);
}
