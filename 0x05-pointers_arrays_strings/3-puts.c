#include "main.h"

/**
 * _puts - prints the string
 * @str: argument string
 * Return: void
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
    _putchar(*(str+i));
}
_putchar('\n');
}
