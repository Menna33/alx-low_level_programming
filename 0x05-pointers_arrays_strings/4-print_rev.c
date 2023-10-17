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
int j;
while (s[i] != '\0')
{
length++;
i++;
}
for (j = length - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
