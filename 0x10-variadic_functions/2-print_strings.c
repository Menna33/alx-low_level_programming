#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints the strings passed to the function
 * @separator: the separator between functions
 * @n: the number of parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);
char *string;
for (i = 0; i < n - 1; i++)
{
string = va_arg(ptr, char*);
if (string == NULL)
printf("(nil)");
else
printf("%s",string);
if (separator != NULL)
printf("%s", separator);
}
printf("%s", va_arg(ptr, char *));
printf("\n");
va_end(ptr);
}
