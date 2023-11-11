#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_integer - function that prints integer.
 * @args: integers to print
 * Return: void
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_double - function that prints double.
 * @args: doubles to print
 * Return: void
 */
void print_double(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_char - function that prints char.
 * @args: chars to print
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, char));
}


/**
 * print_string - function that prints char.
 * @args: chars to print
 * Return: void
 */
void print_string(va_list args)
{
	char *s;
	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - function that prints anything.
 * @format: type of argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	args_t arguments[] = {
        {"i", print_integer},
		{"f", print_double},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
}
