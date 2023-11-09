#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - executes the program
 * @argc: number of argements
 * @argv: array of arguments
 * Return : integer to show how program runs
 */
int main(int argc, char *argv)
{
int result, num1, num2;
int (*op)(int, int);
if (argc < 4 || argc > 4)
{
printf("%s\n", "Error");
exit(98);
}
if (argv[2] != '+' && argv[2] != '-'
&& argv[2] != '*' && argv[2] != '/'
&& argv[2] != '%')
{
printf("%s\n", "Error");
exit(99);
}
if ((argv[2] == '/' || argv[2] == '%') && atoi(argv[3]) == 0)
{
printf("%s\n", "Error");
exit(100);
}
if (get_op_func(argv[2]) == NULL)
{
printf("%s\n", "Error");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = get_op_func(argv[2]);
result = op(num1, num2);
}
