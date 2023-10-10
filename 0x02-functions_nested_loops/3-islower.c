#include <stdio.h>

/**
 * _islower - checks if the input is lowercase.
 * @c: character to be verified
 * Return: 1 if lowercase , 0 if uppercase.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
