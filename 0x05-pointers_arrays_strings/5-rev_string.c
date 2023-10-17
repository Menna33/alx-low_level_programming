#include "main.h"

/**
 * rev_string - reverses the string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
int length = 0;
int j, k;
char *tmp;
while (s[i] != '\0')
{
length++;
i++;
}
for (j = length - 1; j >= 0; j--)
{
for (k = 0; k < length; k++)
{
tmp[k] = s[j];
}
}
*s = *tmp;
}
