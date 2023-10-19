#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: argument string
 * Return: string encoded
 */

char *leet(char *s)
{
int i, j;
char small_letters[] = {'a', 'e', 'o', 't', 'l'};
char capital_letters[] = {'A', 'E', 'O', 'T', 'L'};
char numbers[] = {'4', '3', '0', '7', '1'};
for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; i < 5; i++)
{
if (s[j] == small_letters[i] || s[j] == capital_letters[i])
s[j] = numbers[i];
}
}
return (s);
}
