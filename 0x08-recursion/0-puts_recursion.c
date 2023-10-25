
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
_puts_recursion(*s++);
if (*s == '\0')
{
_putchar('\n');
return;
}

}
