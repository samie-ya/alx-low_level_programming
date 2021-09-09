#include "main.h"
/**
* cap_string- capitalizes the first letter
*
* @s: parameter used
*
* Return: value s
*/
char *cap_string(char *s)
{
int i;
int j;
int n = 13;
char a[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '\t')
{
s[i] = ' ';
}
for (j = 0; j < n; j++)
{
if ((i == 0 || s[i - 1] == a[j]) && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
j++;
}
}
}
return (s);
}
