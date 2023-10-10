#include <stdio.h>

/**
 * isalpha - checks for alphabetic character
 *
 * Return: 1 if lowercase , 0 if uppercase.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
 return (1);
return (0);
}
