#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints the numbers passed to the function
 * @separator: the separator between functions
 * @n: the number of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list ptr;
for (i = 0; i < n - 1; i++)
{
printf("%d", va_arg(ptr, int));
if (separator != NULL)
printf("%s", separator);
}
printf("%d", va_arg(ptr, int));
printf("\n");
va_end(ptr);
}
