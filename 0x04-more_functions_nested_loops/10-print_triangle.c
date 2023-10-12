#include "main.h"
/**
 * print_triangle - prints triangle
 * @size : the size of the triangle
 * Return: Void
 */
void print_triangle(int size)
{
int i, j, k;
for (i = 1; i <= size; i++)
{
j = i;
k = 0;

while (k < size - j)
{
_putchar(' ');
}
while (j > 0)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
