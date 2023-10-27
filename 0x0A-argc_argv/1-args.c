#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 *
 * @argc: number of elements of array argv
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
printf("%s\n", argc - 1);
return (0);
}
