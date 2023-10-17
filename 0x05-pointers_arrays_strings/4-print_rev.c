#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
int length = 0;
while (s[i] != '\0')
{
length++;
i++;
}
while (s[length] != s[0])
{
_putchar(s[length]);
length--;
}
_putchar(s[0]);
_putchar('\n');
}
