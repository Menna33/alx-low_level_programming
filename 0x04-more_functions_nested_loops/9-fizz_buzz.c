#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers in special way
 * Return: 0 always success
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("%s", "FizzBuzz");
if (i % 3 == 0)
printf("%s", "Fizz");
else if (i % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
}
_putchar('/n');
return (0);
}
