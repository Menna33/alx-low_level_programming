#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers passed to the function
 * @separator: the separator between functions
 * @n: the number of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
if (n == 0)
{
printf("\n");
return;   
}
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n - 1; i++)
{
printf("%d", va_arg(ptr, int));
if (separator != NULL)
printf("%s", separator);
}
if (ptr != NULL && n != 0)
printf("%d", va_arg(ptr, int));
printf("\n");
va_end(ptr);
}
