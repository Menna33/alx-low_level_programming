#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @s: argument string
 * Return: string a capitalizing all words of a stringfter
 */

char *cap_string(char *s)
{
int i;
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
|| s[i - 1] == '}' || s[i - 1] == '(' || s[i - 1] == ')'
|| s[i - 1] == '{')
{
if (s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 32;
}

}
return (s);
}
