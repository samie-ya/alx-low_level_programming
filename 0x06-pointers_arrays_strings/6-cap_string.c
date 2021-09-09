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
char a[10] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '\t')
{
s[i] = ' ';
}
for (j = 0; j < 10; j++)
{
if (s[i] == a[j])
{
i++;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
}
}
if (s[i] == '\n' || s[i] == ' ')
{
i++;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
}
}
return (s);
}
