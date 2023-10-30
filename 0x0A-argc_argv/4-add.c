#include <stdio.h>
#include <stdlib.h>

/**
 * isalldigits - check if the argumen is all digits
 *
 * @s: the argument to check if it is all digits or not
 *
 * Return: 0  or 1
 */

int isalldigits(const char *s)
{
for (; *s; ++s)
{
if (!isdigit(*s))
return (0);
}
return (1);
}

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
int sum = 0;
if (argc == 0)
printf("%d\n", 0);
if (!isalldigits(argv[1]) || !isalldigits(argv[2]))
{
printf("%s\n", "Error");
return (1);
}
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);

return (0);
}
