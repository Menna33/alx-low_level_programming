#include "main.h"

/**
 * rot13 - encodes a string using rot13 method
 * @s: argument string
 * Return: string encoded
 */

char *rot13(char *s)
{
int i, j;
char input_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output_letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; i <= 26; i++)
{
if (s[j] == input_letters[i])
s[j] = output_letters[i];
}
}
s[j] = '\0';
return (s);
}
