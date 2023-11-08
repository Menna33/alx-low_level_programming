#include <stdlib.h>=
#include <stdio.h>

/**
 * print_name - prints the name
 * @name: the name to be printed
 * @f : pointer to function to print the name
 *Return : void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
