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
unsigned int i;
if (size == 0)
return (NULL);
arr = (char *) malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
while (i < size)
{
*(arr + i) = c;
i++;
}

return (arr);
}
