#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "calc.h"

/**
 * print_name - prints the name
 * @name: the name to be printed
 * @f : function to print the name
 * Return : void
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 6)
{
if (s == ops[i].f)
return (ops[i].f);
}
}
