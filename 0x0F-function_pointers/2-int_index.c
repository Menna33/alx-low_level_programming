#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to executes the function on its elements
 * @size: the size of the array
 * @cmp: function to compare 2 strings
 * Return : index of the element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))

{
int i;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return;
for (i = 0; i < size; i++)
{
if (cmp(*(array + i)) != 0)
{
return (i);
}
}
return (-1);
}