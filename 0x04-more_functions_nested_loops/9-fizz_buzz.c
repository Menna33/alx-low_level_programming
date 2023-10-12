#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers in special way
 * Return: 0 always success
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
if (i % 3 == 0)
printf("%s", "Fizz");
else if (i % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", i);
}
_putchar('/n');
return (0);
}
