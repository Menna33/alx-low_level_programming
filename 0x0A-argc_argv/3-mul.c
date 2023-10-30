#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of elements of array argv
 * @argv: array of arguments
 *
 * Return: 0 (success) or 1 (Failure)
 */

int main(int argc, char **argv)
{
int mul = 0;
if (argc > 3 || argc < 3)
{
printf("%s\n", "Error");
return (1);
}
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);

return (0);
}
