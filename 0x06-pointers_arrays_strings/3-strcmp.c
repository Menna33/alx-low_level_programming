#include "main.h"

/**
 * _strcmp - copies one string to another
 * @s1: argument string
 * @s2: argument string to be copied
 * Return: integer of comparing
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int diff = 0;
while (s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}

return (diff);
}
