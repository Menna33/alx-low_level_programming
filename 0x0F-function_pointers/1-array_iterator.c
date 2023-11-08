#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on every array element
 * @array: the array to executes the function on its elements
 * @size: the size of the array
 * @action: the function
 * Return : void
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array + i);
}}
