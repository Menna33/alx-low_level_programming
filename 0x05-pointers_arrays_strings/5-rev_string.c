#include "main.h"

/**
 * rev_string - reverses the string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
int i;
int length = 0;
char tmp;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length / 2; i++)
{
tmp = s[i];
s[i] = s[length-i-1];
s[length-i-1] = tmp;
}
}
