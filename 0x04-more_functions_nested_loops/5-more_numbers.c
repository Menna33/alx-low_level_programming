#include "main.h"
/**
 * more_numbers - print the numbers 10 times from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
}
