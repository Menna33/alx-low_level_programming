
#include "main.h"

/**
 * factorial - calculate the factorial of number
 *
 * @n: integer to calculate factorial
 *
 * Return: factorial of given number
 */

int factorial(int n)

{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
else if (n == 1)
return (1);
return (n * factorial(n - 1));
}
