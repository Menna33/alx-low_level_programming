#include "main.h"

/**
 * print_last_digit - prints the last digit of integer
 * @n: integer to get the last digit of it
 * Return: the last integer of it
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;

_putchar(last_digit);
return (last_digit);
}
