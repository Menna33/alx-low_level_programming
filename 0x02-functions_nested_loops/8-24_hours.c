#include "main.h"

/**
 * jack_bauer - prints the minutes of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
if (i % 10 == i)
{
_putchar('0');
}
_putchar(i);
_putchar(':');
for (j = 0; j < 60; j++)
{
if (j % 10 == j)
{
_putchar('0');
}
_putchar(j);
}
_putchar('\n');
}
}
