#include "main.h"
#include <stdlib.h>
/**
* *str_concat- to concatenate string
*
* @s1: string to receive
*
* @s2: string to concatenate
*
* Return: dest
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int k = 0;
int len;
char *dest;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
len = i + j + 1;
dest = malloc(len);
if (dest == 0)
return (0);
if (k < len)
{
while (*s1 != '\0')
{
dest[k] = *s1;
s1++;
k++;
}
while (*s2 != '\0')
{
dest[k] = *s2;
s2++;
k++;
}
}
dest[k] = '\0';
return (dest);
}
