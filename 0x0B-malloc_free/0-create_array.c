#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: character to fill the array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *arr;
arr = malloc(size * sizeof(char));
int i;
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
