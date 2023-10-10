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
n = -1 * n;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -1 * last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
