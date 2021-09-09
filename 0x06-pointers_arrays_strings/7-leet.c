#include "main.h"
/**
* leet- converts letters to digits
*
* @s: parameter used
*
* Return: value s
*/
char *leet(char *s)
{
int i;
char a[5] = {'A', 'E', 'O', 'T', 'L'};
char b[5] = {'4', '3', '0', '7', '1'};
int c;
for (i = 0; s[i] != '\0'; i++)
{
for (c = 0; c < 5; c++)
{
if (s[i] == a[c] || s[i] - 32 == a[c])
{
s[i] = b[c];
}
}
}
return (s);
}
