#include "main.h"
/**
 * print_square - prints square
 * @n : the length of the line of the square
 * Return: Void
 */
void print_square(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n ; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
