
#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - Write a function that locates a substring.
 *
 * @a: array of characters
 *
 * Return: void
 */

void print_diagsums(int *a, int size)

{
int i, j;
for (j = 0; j < 8; j++)
{
for (i = 0; a[i][j] != '\0'; i++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}

}
