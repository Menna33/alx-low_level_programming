#include "main.h"
/**
 * print_numbers - the numbers
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	putchar('\n');
}
