
#include "main.h"

/**
 * _puts_recursion - prints string using recursion
 *
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)

{
_putchar(*s);
if (*s == '\0')
{
return;
}
_puts_recursion(*(s + 1));
}
