
#include "main.h"

/**
 * length - calculate the length of string
 *
 * @s: string to calculate the length of it
 *
 * Return: the length of string
 */

int length(char *s)
{
if (*s == '\0')
return (0);
return (1 + length (s + 1));
}

/**
 * is_palindrome - calculate the  value of x raised to the power of y
 *
 * @s: string to check if it is palindrome or not
 *
 * Return:  1 or 0
 */

int is_palindrome(char *s)

{
if (*s == '\0')
return (1);
if (*s != *(s + length(s) - 1))
return (0);
return (is_palindrome(s + 1));
}
