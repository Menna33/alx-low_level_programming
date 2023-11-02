#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
int *p;
unsigned int i;
p = (int *) malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
