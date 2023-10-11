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
_putchar((i / 10)+'0');
_putchar((i % 10)+'0');
_putchar(':');
for (j = 0; j < 60; j++)
{
_putchar((j / 10)+'0');
_putchar((j % 10)+'0');
_putchar('\n');
}

}
}
