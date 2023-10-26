
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
return (1 + length(s + 1));
}

/**
 * check - check if string s is palindrome
 *
 * @s: string to check if it is palindrome or not
 * @length: length of the string
 *
 * Return:  1 or 0
 */

int check(char *s, int length)

{
if (*s == '\0')
return (1);
if (*s != *(s + length - 1))
return (0);
return (check((s + 1), (length - 1)));
}

/**
 * is_palindrome - check if string s is palindrome
 *
 * @s: string to check if it is palindrome or not
 *
 * Return:  1 or 0
 */

int is_palindrome(char *s)

{
return (check(s, length(s)));
}
