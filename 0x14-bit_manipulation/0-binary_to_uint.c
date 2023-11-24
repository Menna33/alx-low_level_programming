#include "main.h"

/**
 * binary_to_uint - converts binary number to decimal
 * @b:binary number to get its decimal
 * Return: decimal represntation of binary number.
 */
unsigned int binary_to_uint(const char *b)
{
int i = strlen(b) - 1;
int count = 1;
int sum = 0;
if (b == NULL)
return (0);
while (i >= 0)
{
if (b[i] != '1' && b[i] != '0')
return (0);
sum = sum + ((b[i] - '0') * count);
count = count * 2;
i--;
}
return (sum);
}
