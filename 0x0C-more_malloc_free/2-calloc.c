#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: unsigned integer to fill the array
 * @size: size of the array
 *
 * Return: pointer to the array or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *arr, i;
if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = nmemb;
}
return (arr);
}
