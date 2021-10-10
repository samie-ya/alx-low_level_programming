#include "main.h"
/**
* cap_string- capitalizes a string
*
* @s: string used
*
* Return: the string
*/
char *cap_string(char *s)
{
char str[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', 10, 9};
int i;
int j;
i = 0;
while (s[i] != '\0')
{
for (j = 0; j < 12; j++)
{
if (s[i] == str[j])
{
i++;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
if (s[i] == 9)
{
s[i] = ' ';
}
}
i++;
}
return (s);
}
