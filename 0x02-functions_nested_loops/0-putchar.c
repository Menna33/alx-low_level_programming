#include <stdio.h>

/**
 * main - prints string using putchar function
 *
 * Return: 0 when succeed.
 */
int main(void)
{
int i;
string s = "_putchar";

for (i = 0; i < 8; i++)
{
 putchar(s[i]);
}
putchar('\n');
return (0);
}
