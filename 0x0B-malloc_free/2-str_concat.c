#include "main.h"
#include <stdlib.h>
/**
*
*
*
*
*
*
*
*
*
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int len;
char *dest;
if (s1 == 0)
{
s1 = "";
}
if (s2 == 0)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
len = i + j;
dest = malloc((sizeof(char) * len) + 1);
if (dest == 0)
{
return (0);
}
for (i = 0; s1[i] != '\0'; i++)
{
dest[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
dest[j] = s2[j];
}
dest[j] = '\0';
return (dest);
}
