#include "main.h"

/**
 * times_table - prints the time tables of the numbers
 *
 * Return: nothing
 */
void times_table(void)
{
int i;
int j;
int mul;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
mul = j * i;
if (j == 0)
{
_putchar(mul + '0');
}
if (mul < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(mul + '0');
}
else if (mul >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
}
_putchar('\n');
}
