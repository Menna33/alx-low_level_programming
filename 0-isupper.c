#include "main.h"

/**
 * _isupper - checks if the letter is uppercase or lowercase
 * @c : character to be verified
 * Return: 1 or 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
