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
int i = 0;
int j;
int n = 13;
char a[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
while (s[i])
{
if (s[i] == '\t')
{
s[i] = ' ';
}
j = 0;
while (j < n)
{
if ((i == 0 || s[i - 1] == a[j]) && (s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;
j++;
}
i++;
}
return (s);
}
