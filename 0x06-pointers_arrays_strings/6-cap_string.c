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
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
continue;
}
if (s[i] == ' ' || s[i] == '\n'  || s[i] == 9)
{
i++;
if (s[i] == '.')
{
continue;
}
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
if (s[i] == 9)
{
s[i] = s[i] + 19;
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
