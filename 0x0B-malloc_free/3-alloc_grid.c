#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid -concatenates two strings
 *
 * @width: grid width
 * @height: grid height
 *
 * Return: the grid of zeros
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
if (width <= 0 || height <= 0)
return (NULL);
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free(arr);
for (j = 0; j <= i; j++)
free(arr[j]);
return (NULL);
}
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
