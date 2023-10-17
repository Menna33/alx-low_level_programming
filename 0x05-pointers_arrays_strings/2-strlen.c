#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: argument string
 * Return: length of given string
 */

int _strlen(char *s)
{
int count = 0;
while (*(s+count) != '\0')
{
count++;
}
return count;
}
