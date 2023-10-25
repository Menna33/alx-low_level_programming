#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - Write a function that locates a substring.
 *
 * @a: array of characters
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])

{
int i, j;
for (j = 0; j < 8; j++)
{
for (i = 0; a[i] != '\0'; i++)
{
_putchar(a[i]);
}
_putchar('\n');
}

}
