#include "main.h"
/**
 * print_diagonal - print back slashes
 * @n : the number of back slash to print
 * Return: nothing
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
