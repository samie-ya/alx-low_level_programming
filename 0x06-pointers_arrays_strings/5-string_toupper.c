#include "main.h"
/**
* string_toupper- makes all string capital letter
*
* @s: parameter used
*
* Return: value s
*/
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
