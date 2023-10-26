#include "main.h"
/**
 * is_prime - check if the number is prime or not
 *
 * @n: number to check if it is prime or not
 * @i: numbers before n
 *
 * Return: 1 or 0
 */

int is_prime(int n, int i)

{
if (n % i == 0)
return 0;
else if (i >= n)
return 1;
return (is_prime(n, i + 1));
}


/**
 * is_prime_number - check if the number is prime or not
 *
 * @n: number to check if it is prime or not
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)

{
return is_prime(n, 2);
}
