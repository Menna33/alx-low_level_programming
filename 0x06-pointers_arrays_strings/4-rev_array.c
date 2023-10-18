#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: array to be reveresed
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
