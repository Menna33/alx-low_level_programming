#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - calcu;ates the sum of all the arguments
 * @n: the number of parameters
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;
va_list ptr;
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return(sum);
}
