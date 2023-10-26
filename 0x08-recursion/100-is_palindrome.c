#include <stdio.h>


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
 * @index: to access the string characters
 * Return:  1 or 0
 */

int check(char *s, int length, int index)

{
if (length <= 0)
return (1);
if (s[index] != s[length - 1])
{
return (0);
}
return (check(s, (length - 1), (index + 1)));
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
return (check(s, length(s), 0));
}
