#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - to concatenate the first n bytes to string
 *
 * @s1: string to be concatenated
 *
 * @s2: the string to concatenate
 *
 * @n: number of bytes to be concatenated
 *
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int k = 0;
unsigned int len = 0;
char *dest;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (n >= j)
len = i + j + 1;
else
len = i + n + 1;
dest = malloc(len);
if (dest == 0)
{
return (0);
free(dest);
}
if (k < len)
{
for (i = 0; s1[i] != '\0'; i++)
{
dest[k] = s1[i];
k++;
}
for (j = 0; s2[j] != '\0' && j < n; j++)
{
dest[k] = s2[j];
k++;
}
}
dest[k] = '\0';
return (dest);
}
