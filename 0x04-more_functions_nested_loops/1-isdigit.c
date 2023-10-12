#include "main.h"

/**
 * _isdigit - checks if the letter is uppercase or lowercase
 * @c : integer to be verified
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
