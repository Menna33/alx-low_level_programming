#include "main.h"
/**
 * print_line - print line based on number of dashes
 * @n : the number of dashes to print
 * Return: nothing
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('-');
}
_putchar('\n');
}
