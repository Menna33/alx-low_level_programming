#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - gets the type of operation
 * @s: operation
 * Return : type of operation
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
if  (strcmp(s, ops[i].op) == 0)
return (*(ops[i]).f);
i++;
}
return (NULL);
}
