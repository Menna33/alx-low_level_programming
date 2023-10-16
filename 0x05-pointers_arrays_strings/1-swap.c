#include "main.h"

/**
 * swap_int -   swaps 2 values of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
