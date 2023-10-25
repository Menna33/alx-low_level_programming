
#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 *
 * @s: string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)

{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar (*s);
}
}
