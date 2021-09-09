#include "main.h"
/**
*
*
*
*
*
*
*
*
*/
char *cap_string(char *s)
{
int i;
char a[] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int j = 13;
int k;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; k < j; k++)
{
if (s[i] == a[k])
{
i++;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
}
}
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
} 
}
else
{
if (s[i] >= 'A' && s[i] <= 'Z')
s[i] = s[i] + 32;
}
}
return (s);
}
