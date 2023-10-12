#include "main.h"
/**
 * print_diagonal - print back slashes
 * @n : the number of back slash to print
 * Return: nothing
 */
void print_diagonal(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
