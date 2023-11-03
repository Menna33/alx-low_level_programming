#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range -  creates an array of integers
 *
 * @min: min number to put in the array
 * @max: max number to put in the array
 *
 * Return: pointer to the array or NULL
 */

int *array_range(int min, int max)
{
int *arr, i;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min));
if (arr == NULL)
return (NULL);

for (i = 0; i < (max - min) + 1; i++)
{
arr[i] = min + i;
}
return (arr);
}
