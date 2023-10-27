#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program's name
 *
 * @argc: number of elements of array argv
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
return (0);
}
